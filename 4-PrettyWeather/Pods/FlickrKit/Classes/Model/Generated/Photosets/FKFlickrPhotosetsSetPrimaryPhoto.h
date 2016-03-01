//
//  FKFlickrPhotosetsSetPrimaryPhoto.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPhotosetsSetPrimaryPhotoError_PhotosetNotFound = 1,		 /* The photoset id passed was not the id of avalid photoset owned by the calling user. */
	FKFlickrPhotosetsSetPrimaryPhotoError_PhotoNotFound = 2,		 /* The photo id passed was not the id of a valid photo owned by the calling user. */
	FKFlickrPhotosetsSetPrimaryPhotoError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPhotosetsSetPrimaryPhotoError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosetsSetPrimaryPhotoError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosetsSetPrimaryPhotoError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosetsSetPrimaryPhotoError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosetsSetPrimaryPhotoError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosetsSetPrimaryPhotoError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosetsSetPrimaryPhotoError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosetsSetPrimaryPhotoError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosetsSetPrimaryPhotoError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosetsSetPrimaryPhotoError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosetsSetPrimaryPhotoError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosetsSetPrimaryPhotoError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPhotosetsSetPrimaryPhotoError;

/*

Set photoset primary photo




*/
@interface FKFlickrPhotosetsSetPrimaryPhoto : NSObject <FKFlickrAPIMethod>

/* The id of the photoset to set primary photo to. */
@property (nonatomic, copy) NSString *photoset_id; /* (Required) */

/* The id of the photo to set as primary. */
@property (nonatomic, copy) NSString *photo_id; /* (Required) */


@end