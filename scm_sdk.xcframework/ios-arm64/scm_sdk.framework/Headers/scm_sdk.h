#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Scm_sdkScmAuthInteractor, Scm_sdkScmAuthorizedUserInteractor, Scm_sdkScmMigrationInteractor, Scm_sdkScmTokenInteractor, Scm_sdkScmToolsInteractor, Scm_sdkScmUnauthorizedUserInteractor, Scm_sdkScmUserAccessInteractor, Scm_sdkDashboardDataLocal, Scm_sdkSsoClientRegisterRemoteParams, Scm_sdkScResult<__covariant T>, Scm_sdkKotlinThrowable, Scm_sdkKotlinArray<T>, Scm_sdkSdkException, Scm_sdkFeatureException, Scm_sdkAuthException, Scm_sdkAuthExceptionAuthNotSuccessfulException, Scm_sdkSdkExceptionCacheException, Scm_sdkSdkExceptionNetworkException, Scm_sdkSdkExceptionNetworkExceptionHttpStatusException, Scm_sdkSdkExceptionNetworkExceptionResponseException, Scm_sdkSdkExceptionUnknownException, Scm_sdkUserFeatureException, Scm_sdkValidationParamsException, Scm_sdkKotlinUnit, Scm_sdkAppSettingParams, Scm_sdkFeatureParams, Scm_sdkUserPermissionParams, Scm_sdkDashboard, Scm_sdkSubscriber, Scm_sdkUser, Scm_sdkKotlinEnum<E>, Scm_sdkSsoAuthState, Scm_sdkSsoAuthStateSsoUrl, Scm_sdkScmSdkToken, Scm_sdkMigrationTokenTypeParams, Scm_sdkConfigurationMigrationParams, Scm_sdkConfigurationBaseUrlsParams, Scm_sdkScFlow<T>, Scm_sdkAccountLocal, Scm_sdkRuntimeQuery<__covariant RowType>, Scm_sdkAppSettingsLocal, Scm_sdkFeaturesLocal, Scm_sdkUserLocalAdapter, Scm_sdkSubscriberLocal, Scm_sdkUserLocal, Scm_sdkUserPermissionsLocal, Scm_sdkKotlinException, Scm_sdkKotlinRuntimeException, Scm_sdkKotlinIllegalStateException, Scm_sdkKodein_diDITrigger, Scm_sdkRuntimeTransacterTransaction, Scm_sdkKotlinx_serialization_coreSerializersModule, Scm_sdkKotlinx_serialization_coreSerialKind, Scm_sdkKotlinNothing, Scm_sdkKodein_diDIKey<__contravariant C, __contravariant A, __covariant T>, Scm_sdkKotlinByteArray, Scm_sdkKodein_diDIDefinition<C, A, T>, Scm_sdkKotlinTriple<__covariant A, __covariant B, __covariant C>, Scm_sdkKodein_diSearchSpecs, Scm_sdkKotlinByteIterator, Scm_sdkKodein_diDIDefining<C, A, T>, Scm_sdkKodein_diScopeRegistry, Scm_sdkKodein_diReference<__covariant T>;

@protocol Scm_sdkKotlinx_serialization_coreKSerializer, Scm_sdkKotlinx_coroutines_coreFlow, Scm_sdkKotlinComparable, Scm_sdkKotlinx_coroutines_coreFlowCollector, Scm_sdkCloseable, Scm_sdkKotlinCoroutineContext, Scm_sdkKotlinx_coroutines_coreCoroutineScope, Scm_sdkScmAuth, Scm_sdkScmAuthorizedUser, Scm_sdkScmMigration, Scm_sdkScmToken, Scm_sdkScmTools, Scm_sdkScmUnauthorizedUser, Scm_sdkScmUserAccess, Scm_sdkKodein_diDI, Scm_sdkRuntimeTransactionWithoutReturn, Scm_sdkRuntimeTransactionWithReturn, Scm_sdkRuntimeTransacter, Scm_sdkAccountQueries, Scm_sdkAppSettingsQueries, Scm_sdkFeaturesQueries, Scm_sdkSubsidiariesQueries, Scm_sdkUserPermissionsQueries, Scm_sdkUserQueries, Scm_sdkScmSdkDatabase, Scm_sdkRuntimeSqlDriver, Scm_sdkRuntimeSqlDriverSchema, Scm_sdkRuntimeColumnAdapter, Scm_sdkKotlinx_serialization_coreEncoder, Scm_sdkKotlinx_serialization_coreSerialDescriptor, Scm_sdkKotlinx_serialization_coreSerializationStrategy, Scm_sdkKotlinx_serialization_coreDecoder, Scm_sdkKotlinx_serialization_coreDeserializationStrategy, Scm_sdkKotlinIterator, Scm_sdkKotlinCoroutineContextElement, Scm_sdkKotlinCoroutineContextKey, Scm_sdkKodein_diDIContainer, Scm_sdkKodein_diDIContext, Scm_sdkKodein_diDIAware, Scm_sdkRuntimeSqlCursor, Scm_sdkRuntimeQueryListener, Scm_sdkRuntimeTransactionCallbacks, Scm_sdkRuntimeSqlPreparedStatement, Scm_sdkRuntimeCloseable, Scm_sdkKotlinx_serialization_coreCompositeEncoder, Scm_sdkKotlinAnnotation, Scm_sdkKotlinx_serialization_coreCompositeDecoder, Scm_sdkKodein_diDITree, Scm_sdkKodein_typeTypeToken, Scm_sdkKotlinLazy, Scm_sdkKotlinx_serialization_coreSerializersModuleCollector, Scm_sdkKotlinKClass, Scm_sdkKodein_diContextTranslator, Scm_sdkKodein_diExternalSource, Scm_sdkKotlinKDeclarationContainer, Scm_sdkKotlinKAnnotatedElement, Scm_sdkKotlinKClassifier, Scm_sdkKodein_diDIBinding, Scm_sdkKodein_diDirectDI, Scm_sdkKodein_diBindingDI, Scm_sdkKodein_diDIBindingCopier, Scm_sdkKodein_diScope, Scm_sdkKodein_diBinding, Scm_sdkKodein_diDirectDIAware, Scm_sdkKodein_diDirectDIBase, Scm_sdkKodein_diWithContext, Scm_sdkKodein_diDIContainerBuilder, Scm_sdkKodein_diScopeCloseable;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface Scm_sdkBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface Scm_sdkBase (Scm_sdkBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface Scm_sdkMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface Scm_sdkMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorScm_sdkKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface Scm_sdkNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface Scm_sdkByte : Scm_sdkNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface Scm_sdkUByte : Scm_sdkNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface Scm_sdkShort : Scm_sdkNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface Scm_sdkUShort : Scm_sdkNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface Scm_sdkInt : Scm_sdkNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface Scm_sdkUInt : Scm_sdkNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface Scm_sdkLong : Scm_sdkNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface Scm_sdkULong : Scm_sdkNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface Scm_sdkFloat : Scm_sdkNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface Scm_sdkDouble : Scm_sdkNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface Scm_sdkBoolean : Scm_sdkNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosScmSdk")))
@interface Scm_sdkIosScmSdk : Scm_sdkBase
- (instancetype)initWithEnableLogging:(BOOL)enableLogging appVersion:(NSString *)appVersion authorizationToken:(NSString *)authorizationToken deviceDescription:(NSString *)deviceDescription __attribute__((swift_name("init(enableLogging:appVersion:authorizationToken:deviceDescription:)"))) __attribute__((objc_designated_initializer));
- (Scm_sdkScmAuthInteractor *)provideAuthInteractor __attribute__((swift_name("provideAuthInteractor()")));
- (Scm_sdkScmAuthorizedUserInteractor *)provideAuthorizedUserInteractor __attribute__((swift_name("provideAuthorizedUserInteractor()")));
- (Scm_sdkScmMigrationInteractor *)provideMigrationInteractor __attribute__((swift_name("provideMigrationInteractor()")));
- (Scm_sdkScmTokenInteractor *)provideTokenInteractor __attribute__((swift_name("provideTokenInteractor()")));
- (Scm_sdkScmToolsInteractor *)provideToolsInteractor __attribute__((swift_name("provideToolsInteractor()")));
- (Scm_sdkScmUnauthorizedUserInteractor *)provideUnauthorizedUserInteractor __attribute__((swift_name("provideUnauthorizedUserInteractor()")));
- (Scm_sdkScmUserAccessInteractor *)provideUserAccessInteractor __attribute__((swift_name("provideUserAccessInteractor()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DashboardDataLocal")))
@interface Scm_sdkDashboardDataLocal : Scm_sdkBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (Scm_sdkDashboardDataLocal *)doCopyId:(int32_t)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DashboardDataLocal.Companion")))
@interface Scm_sdkDashboardDataLocalCompanion : Scm_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Scm_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthTokenRemote")))
@interface Scm_sdkAuthTokenRemote : Scm_sdkBase
- (instancetype)initWithToken:(NSString *)token tokenType:(NSString *)tokenType refreshToken:(NSString *)refreshToken __attribute__((swift_name("init(token:tokenType:refreshToken:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *refreshToken __attribute__((swift_name("refreshToken")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@property (readonly) NSString *tokenType __attribute__((swift_name("tokenType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthTokenRemote.Companion")))
@interface Scm_sdkAuthTokenRemoteCompanion : Scm_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Scm_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SsoClientRegisterRemoteParams")))
@interface Scm_sdkSsoClientRegisterRemoteParams : Scm_sdkBase
- (instancetype)initWithInvitationKey:(NSString *)invitationKey clientIdentifier:(NSString *)clientIdentifier clientDescription:(NSString *)clientDescription __attribute__((swift_name("init(invitationKey:clientIdentifier:clientDescription:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (Scm_sdkSsoClientRegisterRemoteParams *)doCopyInvitationKey:(NSString *)invitationKey clientIdentifier:(NSString *)clientIdentifier clientDescription:(NSString *)clientDescription __attribute__((swift_name("doCopy(invitationKey:clientIdentifier:clientDescription:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clientDescription __attribute__((swift_name("clientDescription")));
@property (readonly) NSString *clientIdentifier __attribute__((swift_name("clientIdentifier")));
@property (readonly) NSString *invitationKey __attribute__((swift_name("invitationKey")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SsoClientRegisterRemoteParams.Companion")))
@interface Scm_sdkSsoClientRegisterRemoteParamsCompanion : Scm_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Scm_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("UrlProvider")))
@protocol Scm_sdkUrlProvider
@required
- (NSArray<NSString *> *)provideAuthorizationUrls __attribute__((swift_name("provideAuthorizationUrls()")));
- (NSString *)provideDashboardSettings __attribute__((swift_name("provideDashboardSettings()")));
- (NSString *)provideDashboardUserSettings __attribute__((swift_name("provideDashboardUserSettings()")));
- (NSString *)provideFeatures __attribute__((swift_name("provideFeatures()")));
- (NSString *)provideRefreshJwtToken __attribute__((swift_name("provideRefreshJwtToken()")));
- (NSString *)provideRefreshToken __attribute__((swift_name("provideRefreshToken()")));
- (NSString *)provideRequestSetup __attribute__((swift_name("provideRequestSetup()")));
- (NSString *)provideRetrieveAccessToken __attribute__((swift_name("provideRetrieveAccessToken()")));
- (NSString *)provideRetrieveJwtToken __attribute__((swift_name("provideRetrieveJwtToken()")));
- (NSString *)provideSso __attribute__((swift_name("provideSso()")));
- (NSString *)provideSsoClientRegistration __attribute__((swift_name("provideSsoClientRegistration()")));
- (NSString *)provideStoreListForSubscriber __attribute__((swift_name("provideStoreListForSubscriber()")));
- (NSString *)provideSubsidiaries __attribute__((swift_name("provideSubsidiaries()")));
- (NSArray<NSString *> *)provideUnAuthorizationUrls __attribute__((swift_name("provideUnAuthorizationUrls()")));
- (NSString *)provideUserPermissions __attribute__((swift_name("provideUserPermissions()")));
- (NSString *)provideUserProfile __attribute__((swift_name("provideUserProfile()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScResult")))
@interface Scm_sdkScResult<__covariant T> : Scm_sdkBase
- (Scm_sdkScResult<T> *)doCopyValue:(id _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (Scm_sdkKotlinThrowable * _Nullable)exceptionOrNull __attribute__((swift_name("exceptionOrNull()")));
- (T _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isFailure __attribute__((swift_name("isFailure")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScResultCompanion")))
@interface Scm_sdkScResultCompanion : Scm_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (Scm_sdkScResult<id> *)failureException:(Scm_sdkKotlinThrowable *)exception __attribute__((swift_name("failure(exception:)")));
- (Scm_sdkScResult<id> *)successValue:(id _Nullable)value __attribute__((swift_name("success(value:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface Scm_sdkKotlinThrowable : Scm_sdkBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Scm_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Scm_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (Scm_sdkKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Scm_sdkKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("SdkException")))
@interface Scm_sdkSdkException : Scm_sdkKotlinThrowable
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(Scm_sdkKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(Scm_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Scm_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) Scm_sdkKotlinThrowable * _Nullable throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((swift_name("FeatureException")))
@interface Scm_sdkFeatureException : Scm_sdkSdkException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(Scm_sdkKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("AuthException")))
@interface Scm_sdkAuthException : Scm_sdkFeatureException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthException.AuthNotSuccessfulException")))
@interface Scm_sdkAuthExceptionAuthNotSuccessfulException : Scm_sdkAuthException
- (instancetype)initWithInternalCode:(int32_t)internalCode message:(NSString *)message throwable:(Scm_sdkKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(internalCode:message:throwable:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (Scm_sdkKotlinThrowable * _Nullable)component3 __attribute__((swift_name("component3()")));
- (Scm_sdkAuthExceptionAuthNotSuccessfulException *)doCopyInternalCode:(int32_t)internalCode message:(NSString *)message throwable:(Scm_sdkKotlinThrowable * _Nullable)throwable __attribute__((swift_name("doCopy(internalCode:message:throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t internalCode __attribute__((swift_name("internalCode")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) Scm_sdkKotlinThrowable * _Nullable throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((swift_name("AuthException.SsoException")))
@interface Scm_sdkAuthExceptionSsoException : Scm_sdkAuthException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthException.SsoExceptionClientRegisteredException")))
@interface Scm_sdkAuthExceptionSsoExceptionClientRegisteredException : Scm_sdkAuthException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)clientRegisteredException __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthException.SsoExceptionEmptySsoIdentifierException")))
@interface Scm_sdkAuthExceptionSsoExceptionEmptySsoIdentifierException : Scm_sdkAuthException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)emptySsoIdentifierException __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthException.SsoExceptionInvalidClientIdentifierException")))
@interface Scm_sdkAuthExceptionSsoExceptionInvalidClientIdentifierException : Scm_sdkAuthException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)invalidClientIdentifierException __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthException.SsoExceptionSsoAccessCodeNotFoundOrExpiredException")))
@interface Scm_sdkAuthExceptionSsoExceptionSsoAccessCodeNotFoundOrExpiredException : Scm_sdkAuthException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)ssoAccessCodeNotFoundOrExpiredException __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("AuthException.UserIdException")))
@interface Scm_sdkAuthExceptionUserIdException : Scm_sdkAuthException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthException.UserIdExceptionAccountLocked")))
@interface Scm_sdkAuthExceptionUserIdExceptionAccountLocked : Scm_sdkAuthException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)accountLocked __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthException.UserIdExceptionNotConfiguredUserRoleException")))
@interface Scm_sdkAuthExceptionUserIdExceptionNotConfiguredUserRoleException : Scm_sdkAuthException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)notConfiguredUserRoleException __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthException.UserIdExceptionNotSupportLoginException")))
@interface Scm_sdkAuthExceptionUserIdExceptionNotSupportLoginException : Scm_sdkAuthException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)notSupportLoginException __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthException.UserIdExceptionUserAccessException")))
@interface Scm_sdkAuthExceptionUserIdExceptionUserAccessException : Scm_sdkAuthException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)userAccessException __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("SdkException.CacheException")))
@interface Scm_sdkSdkExceptionCacheException : Scm_sdkSdkException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(Scm_sdkKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkException.CacheExceptionNoDataException")))
@interface Scm_sdkSdkExceptionCacheExceptionNoDataException : Scm_sdkSdkExceptionCacheException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)noDataException __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("SdkException.NetworkException")))
@interface Scm_sdkSdkExceptionNetworkException : Scm_sdkSdkException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(Scm_sdkKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkException.NetworkExceptionConnectionException")))
@interface Scm_sdkSdkExceptionNetworkExceptionConnectionException : Scm_sdkSdkExceptionNetworkException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)connectionException __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkException.NetworkExceptionEmptyResponseException")))
@interface Scm_sdkSdkExceptionNetworkExceptionEmptyResponseException : Scm_sdkSdkExceptionNetworkException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)emptyResponseException __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkException.NetworkExceptionHttpStatusException")))
@interface Scm_sdkSdkExceptionNetworkExceptionHttpStatusException : Scm_sdkSdkExceptionNetworkException
- (instancetype)initWithHttpStatus:(int32_t)httpStatus __attribute__((swift_name("init(httpStatus:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (Scm_sdkSdkExceptionNetworkExceptionHttpStatusException *)doCopyHttpStatus:(int32_t)httpStatus __attribute__((swift_name("doCopy(httpStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t httpStatus __attribute__((swift_name("httpStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkException.NetworkExceptionResponseException")))
@interface Scm_sdkSdkExceptionNetworkExceptionResponseException : Scm_sdkSdkExceptionNetworkException
- (instancetype)initWithHttpStatus:(int32_t)httpStatus internalCode:(int32_t)internalCode message:(NSString *)message __attribute__((swift_name("init(httpStatus:internalCode:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (Scm_sdkSdkExceptionNetworkExceptionResponseException *)doCopyHttpStatus:(int32_t)httpStatus internalCode:(int32_t)internalCode message:(NSString *)message __attribute__((swift_name("doCopy(httpStatus:internalCode:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t httpStatus __attribute__((swift_name("httpStatus")));
@property (readonly) int32_t internalCode __attribute__((swift_name("internalCode")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkException.NetworkExceptionTimeoutException")))
@interface Scm_sdkSdkExceptionNetworkExceptionTimeoutException : Scm_sdkSdkExceptionNetworkException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)timeoutException __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkException.NetworkExceptionUnauthorized")))
@interface Scm_sdkSdkExceptionNetworkExceptionUnauthorized : Scm_sdkSdkException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(Scm_sdkKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)unauthorized __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkException.UnknownException")))
@interface Scm_sdkSdkExceptionUnknownException : Scm_sdkSdkException
- (instancetype)initWithMessage:(NSString *)message throwable:(Scm_sdkKotlinThrowable *)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (Scm_sdkKotlinThrowable *)component2 __attribute__((swift_name("component2()")));
- (Scm_sdkSdkExceptionUnknownException *)doCopyMessage:(NSString *)message throwable:(Scm_sdkKotlinThrowable *)throwable __attribute__((swift_name("doCopy(message:throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) Scm_sdkKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((swift_name("UserFeatureException")))
@interface Scm_sdkUserFeatureException : Scm_sdkFeatureException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserFeatureException.AuthorizedUserOnlyException")))
@interface Scm_sdkUserFeatureExceptionAuthorizedUserOnlyException : Scm_sdkUserFeatureException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)authorizedUserOnlyException __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserFeatureException.UniversalUserOnlyException")))
@interface Scm_sdkUserFeatureExceptionUniversalUserOnlyException : Scm_sdkUserFeatureException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)universalUserOnlyException __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("ValidationParamsException")))
@interface Scm_sdkValidationParamsException : Scm_sdkSdkException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(Scm_sdkKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationParamsException.EmptyParamsException")))
@interface Scm_sdkValidationParamsExceptionEmptyParamsException : Scm_sdkValidationParamsException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)emptyParamsException __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("ScmAuthorizedUser")))
@protocol Scm_sdkScmAuthorizedUser
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDefaultUserSetupIdWithCompletionHandler:(void (^)(Scm_sdkInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDefaultUserSetupId(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserIdWithCompletionHandler:(void (^)(Scm_sdkInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserId(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)isQuestionOptionalWithCompletionHandler:(void (^)(Scm_sdkBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isQuestionOptional(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)logoutWithCompletionHandler:(void (^)(Scm_sdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("logout(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshUserProfileWithCompletionHandler:(void (^)(Scm_sdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshUserProfile(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)setCurrentSubscriberSubscriberId:(int32_t)subscriberId completionHandler:(void (^)(Scm_sdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setCurrentSubscriber(subscriberId:completionHandler:)")));
- (id<Scm_sdkKotlinx_coroutines_coreFlow>)subscribeSubsidiaries __attribute__((swift_name("subscribeSubsidiaries()")));
- (id<Scm_sdkKotlinx_coroutines_coreFlow>)subscribeUser __attribute__((swift_name("subscribeUser()")));
@end;

__attribute__((swift_name("ScmUnauthorizedUser")))
@protocol Scm_sdkScmUnauthorizedUser
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)isAuthorizedWithCompletionHandler:(void (^)(Scm_sdkBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isAuthorized(completionHandler:)")));
@end;

__attribute__((swift_name("ScmUserAccess")))
@protocol Scm_sdkScmUserAccess
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)isAppSettingsEnabledSetting:(Scm_sdkAppSettingParams *)setting completionHandler:(void (^)(Scm_sdkBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isAppSettingsEnabled(setting:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)isFeatureEnabledFeature:(Scm_sdkFeatureParams *)feature completionHandler:(void (^)(Scm_sdkBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isFeatureEnabled(feature:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)isPermissionGrantedPermission:(Scm_sdkUserPermissionParams *)permission completionHandler:(void (^)(Scm_sdkBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isPermissionGranted(permission:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dashboard")))
@interface Scm_sdkDashboard : Scm_sdkBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (Scm_sdkDashboard *)doCopyId:(int32_t)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Subscriber")))
@interface Scm_sdkSubscriber : Scm_sdkBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name description:(NSString *)description isCurrent:(BOOL)isCurrent __attribute__((swift_name("init(id:name:description:isCurrent:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (Scm_sdkSubscriber *)doCopyId:(int32_t)id name:(NSString *)name description:(NSString *)description isCurrent:(BOOL)isCurrent __attribute__((swift_name("doCopy(id:name:description:isCurrent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) BOOL isCurrent __attribute__((swift_name("isCurrent")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface Scm_sdkUser : Scm_sdkBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name fullName:(NSString *)fullName email:(NSString *)email dashboards:(NSArray<Scm_sdkDashboard *> *)dashboards isAccountPayableManager:(BOOL)isAccountPayableManager proposalLimit:(float)proposalLimit proposalCurrencyId:(int32_t)proposalCurrencyId subscriberId:(int32_t)subscriberId defaultScUserSetupId:(int32_t)defaultScUserSetupId __attribute__((swift_name("init(id:name:fullName:email:dashboards:isAccountPayableManager:proposalLimit:proposalCurrencyId:subscriberId:defaultScUserSetupId:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSArray<Scm_sdkDashboard *> *)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (float)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int32_t)component9 __attribute__((swift_name("component9()")));
- (Scm_sdkUser *)doCopyId:(int32_t)id name:(NSString *)name fullName:(NSString *)fullName email:(NSString *)email dashboards:(NSArray<Scm_sdkDashboard *> *)dashboards isAccountPayableManager:(BOOL)isAccountPayableManager proposalLimit:(float)proposalLimit proposalCurrencyId:(int32_t)proposalCurrencyId subscriberId:(int32_t)subscriberId defaultScUserSetupId:(int32_t)defaultScUserSetupId __attribute__((swift_name("doCopy(id:name:fullName:email:dashboards:isAccountPayableManager:proposalLimit:proposalCurrencyId:subscriberId:defaultScUserSetupId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Scm_sdkDashboard *> *dashboards __attribute__((swift_name("dashboards")));
@property (readonly) int32_t defaultScUserSetupId __attribute__((swift_name("defaultScUserSetupId")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *fullName __attribute__((swift_name("fullName")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) BOOL isAccountPayableManager __attribute__((swift_name("isAccountPayableManager")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t proposalCurrencyId __attribute__((swift_name("proposalCurrencyId")));
@property (readonly) float proposalLimit __attribute__((swift_name("proposalLimit")));
@property (readonly) int32_t subscriberId __attribute__((swift_name("subscriberId")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol Scm_sdkKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface Scm_sdkKotlinEnum<E> : Scm_sdkBase <Scm_sdkKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppSettingParams")))
@interface Scm_sdkAppSettingParams : Scm_sdkKotlinEnum<Scm_sdkAppSettingParams *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Scm_sdkAppSettingParams *assetFirstWorkOrderCreation __attribute__((swift_name("assetFirstWorkOrderCreation")));
+ (Scm_sdkKotlinArray<Scm_sdkAppSettingParams *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureParams")))
@interface Scm_sdkFeatureParams : Scm_sdkKotlinEnum<Scm_sdkFeatureParams *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Scm_sdkFeatureParams *universal __attribute__((swift_name("universal")));
@property (class, readonly) Scm_sdkFeatureParams *accountPayableManager __attribute__((swift_name("accountPayableManager")));
@property (class, readonly) Scm_sdkFeatureParams *mlpInfo __attribute__((swift_name("mlpInfo")));
@property (class, readonly) Scm_sdkFeatureParams *dashboard __attribute__((swift_name("dashboard")));
@property (class, readonly) Scm_sdkFeatureParams *proposals __attribute__((swift_name("proposals")));
@property (class, readonly) Scm_sdkFeatureParams *alerts __attribute__((swift_name("alerts")));
@property (class, readonly) Scm_sdkFeatureParams *decisionEngine __attribute__((swift_name("decisionEngine")));
@property (class, readonly) Scm_sdkFeatureParams *feedback __attribute__((swift_name("feedback")));
@property (class, readonly) Scm_sdkFeatureParams *assetTagging __attribute__((swift_name("assetTagging")));
@property (class, readonly) Scm_sdkFeatureParams *createWoByAssetTag __attribute__((swift_name("createWoByAssetTag")));
@property (class, readonly) Scm_sdkFeatureParams *sendAudit __attribute__((swift_name("sendAudit")));
@property (class, readonly) Scm_sdkFeatureParams *proposalsApproveReason __attribute__((swift_name("proposalsApproveReason")));
@property (class, readonly) Scm_sdkFeatureParams *videoCapability __attribute__((swift_name("videoCapability")));
@property (class, readonly) Scm_sdkFeatureParams *decisionTreeDash __attribute__((swift_name("decisionTreeDash")));
@property (class, readonly) Scm_sdkFeatureParams *proposalsAssignReason __attribute__((swift_name("proposalsAssignReason")));
@property (class, readonly) Scm_sdkFeatureParams *providerFeedback __attribute__((swift_name("providerFeedback")));
@property (class, readonly) Scm_sdkFeatureParams *showReviewsCounter __attribute__((swift_name("showReviewsCounter")));
@property (class, readonly) Scm_sdkFeatureParams *inventoryManagement __attribute__((swift_name("inventoryManagement")));
@property (class, readonly) Scm_sdkFeatureParams *eulaLogin __attribute__((swift_name("eulaLogin")));
@property (class, readonly) Scm_sdkFeatureParams *showAssignedTechnicians __attribute__((swift_name("showAssignedTechnicians")));
@property (class, readonly) Scm_sdkFeatureParams *appTutorial __attribute__((swift_name("appTutorial")));
@property (class, readonly) Scm_sdkFeatureParams *sitePlanningV2 __attribute__((swift_name("sitePlanningV2")));
@property (class, readonly) Scm_sdkFeatureParams *doNotDispatch __attribute__((swift_name("doNotDispatch")));
@property (class, readonly) Scm_sdkFeatureParams *feedbackCustomQuestions __attribute__((swift_name("feedbackCustomQuestions")));
@property (class, readonly) Scm_sdkFeatureParams *badgeScanning __attribute__((swift_name("badgeScanning")));
@property (class, readonly) Scm_sdkFeatureParams *weatherType __attribute__((swift_name("weatherType")));
@property (class, readonly) Scm_sdkFeatureParams *badge __attribute__((swift_name("badge")));
@property (class, readonly) Scm_sdkFeatureParams *checkListAssetTasks __attribute__((swift_name("checkListAssetTasks")));
@property (class, readonly) Scm_sdkFeatureParams *proposalsFunctionality __attribute__((swift_name("proposalsFunctionality")));
@property (class, readonly) Scm_sdkFeatureParams *ignoreAssetTypeId __attribute__((swift_name("ignoreAssetTypeId")));
@property (class, readonly) Scm_sdkFeatureParams *powerUserLight __attribute__((swift_name("powerUserLight")));
@property (class, readonly) Scm_sdkFeatureParams *eulaSignOff __attribute__((swift_name("eulaSignOff")));
@property (class, readonly) Scm_sdkFeatureParams *assetFirstMobile __attribute__((swift_name("assetFirstMobile")));
+ (Scm_sdkKotlinArray<Scm_sdkFeatureParams *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPermissionParams")))
@interface Scm_sdkUserPermissionParams : Scm_sdkKotlinEnum<Scm_sdkUserPermissionParams *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Scm_sdkUserPermissionParams *workOrderStatusChange __attribute__((swift_name("workOrderStatusChange")));
@property (class, readonly) Scm_sdkUserPermissionParams *workOrderChange __attribute__((swift_name("workOrderChange")));
@property (class, readonly) Scm_sdkUserPermissionParams *nteChange __attribute__((swift_name("nteChange")));
@property (class, readonly) Scm_sdkUserPermissionParams *maskMoney __attribute__((swift_name("maskMoney")));
@property (class, readonly) Scm_sdkUserPermissionParams *workOrderCreate __attribute__((swift_name("workOrderCreate")));
@property (class, readonly) Scm_sdkUserPermissionParams *siteAudit __attribute__((swift_name("siteAudit")));
@property (class, readonly) Scm_sdkUserPermissionParams *proposalProcess __attribute__((swift_name("proposalProcess")));
+ (Scm_sdkKotlinArray<Scm_sdkUserPermissionParams *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("ScmAuth")))
@protocol Scm_sdkScmAuth
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)authWithAuthenticationCodeAuthenticationCode:(NSString *)authenticationCode completionHandler:(void (^)(Scm_sdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authWithAuthenticationCode(authenticationCode:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)authWithClientIdWithCompletionHandler:(void (^)(Scm_sdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authWithClientId(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)authWithSSOIdSsoId:(NSString *)ssoId completionHandler:(void (^)(Scm_sdkSsoAuthState * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authWithSSOId(ssoId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)authWithUserIdUserId:(NSString *)userId password:(NSString *)password completionHandler:(void (^)(Scm_sdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authWithUserId(userId:password:completionHandler:)")));
@end;

__attribute__((swift_name("SsoAuthState")))
@interface Scm_sdkSsoAuthState : Scm_sdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SsoAuthState.SsoClientRegistrationSuccessful")))
@interface Scm_sdkSsoAuthStateSsoClientRegistrationSuccessful : Scm_sdkSsoAuthState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)ssoClientRegistrationSuccessful __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SsoAuthState.SsoUrl")))
@interface Scm_sdkSsoAuthStateSsoUrl : Scm_sdkSsoAuthState
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (Scm_sdkSsoAuthStateSsoUrl *)doCopyUrl:(NSString *)url __attribute__((swift_name("doCopy(url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScmSdkToken")))
@interface Scm_sdkScmSdkToken : Scm_sdkBase
- (instancetype)initWithToken:(NSString *)token authorization:(NSString *)authorization __attribute__((swift_name("init(token:authorization:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (Scm_sdkScmSdkToken *)doCopyToken:(NSString *)token authorization:(NSString *)authorization __attribute__((swift_name("doCopy(token:authorization:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authorization __attribute__((swift_name("authorization")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@end;

__attribute__((swift_name("ScmToken")))
@protocol Scm_sdkScmToken
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTokenWithCompletionHandler:(void (^)(Scm_sdkScmSdkToken * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getToken(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshTokenWithCompletionHandler:(void (^)(Scm_sdkScmSdkToken * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshToken(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationMigrationParams")))
@interface Scm_sdkConfigurationMigrationParams : Scm_sdkBase
- (instancetype)initWithMigrationType:(Scm_sdkMigrationTokenTypeParams *)migrationType token:(NSString *)token tokenType:(NSString *)tokenType refreshToken:(NSString *)refreshToken defaultSubscribeId:(int32_t)defaultSubscribeId __attribute__((swift_name("init(migrationType:token:tokenType:refreshToken:defaultSubscribeId:)"))) __attribute__((objc_designated_initializer));
- (Scm_sdkMigrationTokenTypeParams *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (Scm_sdkConfigurationMigrationParams *)doCopyMigrationType:(Scm_sdkMigrationTokenTypeParams *)migrationType token:(NSString *)token tokenType:(NSString *)tokenType refreshToken:(NSString *)refreshToken defaultSubscribeId:(int32_t)defaultSubscribeId __attribute__((swift_name("doCopy(migrationType:token:tokenType:refreshToken:defaultSubscribeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultSubscribeId __attribute__((swift_name("defaultSubscribeId")));
@property (readonly) Scm_sdkMigrationTokenTypeParams *migrationType __attribute__((swift_name("migrationType")));
@property (readonly) NSString *refreshToken __attribute__((swift_name("refreshToken")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@property (readonly) NSString *tokenType __attribute__((swift_name("tokenType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MigrationTokenTypeParams")))
@interface Scm_sdkMigrationTokenTypeParams : Scm_sdkKotlinEnum<Scm_sdkMigrationTokenTypeParams *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Scm_sdkMigrationTokenTypeParams *accessToken __attribute__((swift_name("accessToken")));
@property (class, readonly) Scm_sdkMigrationTokenTypeParams *jwtToken __attribute__((swift_name("jwtToken")));
+ (Scm_sdkKotlinArray<Scm_sdkMigrationTokenTypeParams *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("ScmMigration")))
@protocol Scm_sdkScmMigration
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)migrationParams:(Scm_sdkConfigurationMigrationParams *)params completionHandler:(void (^)(Scm_sdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("migration(params:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationBaseUrlsParams")))
@interface Scm_sdkConfigurationBaseUrlsParams : Scm_sdkBase
- (instancetype)initWithScUnAuthorizedUrl:(NSString *)scUnAuthorizedUrl scAuthorizationUrl:(NSString *)scAuthorizationUrl scAuthorizedUrl:(NSString *)scAuthorizedUrl jwtAuthorizationUrl:(NSString *)jwtAuthorizationUrl __attribute__((swift_name("init(scUnAuthorizedUrl:scAuthorizationUrl:scAuthorizedUrl:jwtAuthorizationUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (Scm_sdkConfigurationBaseUrlsParams *)doCopyScUnAuthorizedUrl:(NSString *)scUnAuthorizedUrl scAuthorizationUrl:(NSString *)scAuthorizationUrl scAuthorizedUrl:(NSString *)scAuthorizedUrl jwtAuthorizationUrl:(NSString *)jwtAuthorizationUrl __attribute__((swift_name("doCopy(scUnAuthorizedUrl:scAuthorizationUrl:scAuthorizedUrl:jwtAuthorizationUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *jwtAuthorizationUrl __attribute__((swift_name("jwtAuthorizationUrl")));
@property (readonly) NSString *scAuthorizationUrl __attribute__((swift_name("scAuthorizationUrl")));
@property (readonly) NSString *scAuthorizedUrl __attribute__((swift_name("scAuthorizedUrl")));
@property (readonly) NSString *scUnAuthorizedUrl __attribute__((swift_name("scUnAuthorizedUrl")));
@end;

__attribute__((swift_name("ScmTools")))
@protocol Scm_sdkScmTools
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)setupUrlsBaseUrls:(Scm_sdkConfigurationBaseUrlsParams *)baseUrls completionHandler:(void (^)(Scm_sdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setupUrls(baseUrls:completionHandler:)")));
@end;

__attribute__((swift_name("Closeable")))
@protocol Scm_sdkCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol Scm_sdkKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<Scm_sdkKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(Scm_sdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScFlow")))
@interface Scm_sdkScFlow<T> : Scm_sdkBase <Scm_sdkKotlinx_coroutines_coreFlow>

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<Scm_sdkKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(Scm_sdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<Scm_sdkCloseable>)watchBlock:(void (^)(T))block __attribute__((swift_name("watch(block:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol Scm_sdkKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<Scm_sdkKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScmAuthInteractor")))
@interface Scm_sdkScmAuthInteractor : Scm_sdkBase <Scm_sdkKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithScAuth:(id<Scm_sdkScmAuth>)scAuth __attribute__((swift_name("init(scAuth:)"))) __attribute__((objc_designated_initializer));
- (void)authWithAuthenticationCodeAuthenticationCode:(NSString *)authenticationCode callback:(void (^)(Scm_sdkScResult<id> *))callback __attribute__((swift_name("authWithAuthenticationCode(authenticationCode:callback:)")));
- (void)authWithClientIdCallback:(void (^)(Scm_sdkScResult<id> *))callback __attribute__((swift_name("authWithClientId(callback:)")));
- (void)authWithSSOIdSsoId:(NSString *)ssoId callback:(void (^)(Scm_sdkScResult<Scm_sdkSsoAuthState *> *))callback __attribute__((swift_name("authWithSSOId(ssoId:callback:)")));
- (void)authWithUserIdUserId:(NSString *)userId password:(NSString *)password callback:(void (^)(Scm_sdkScResult<id> *))callback __attribute__((swift_name("authWithUserId(userId:password:callback:)")));
@property (readonly) id<Scm_sdkKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScmAuthorizedUserInteractor")))
@interface Scm_sdkScmAuthorizedUserInteractor : Scm_sdkBase <Scm_sdkKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithScUser:(id<Scm_sdkScmAuthorizedUser>)scUser __attribute__((swift_name("init(scUser:)"))) __attribute__((objc_designated_initializer));
- (void)getDefaultUserSetupIdCallback:(void (^)(Scm_sdkScResult<Scm_sdkInt *> *))callback __attribute__((swift_name("getDefaultUserSetupId(callback:)")));
- (void)getUserIdCallback:(void (^)(Scm_sdkScResult<Scm_sdkInt *> *))callback __attribute__((swift_name("getUserId(callback:)")));
- (void)isQuestionOptionalCallback:(void (^)(Scm_sdkScResult<Scm_sdkBoolean *> *))callback __attribute__((swift_name("isQuestionOptional(callback:)")));
- (void)logoutCallback:(void (^)(Scm_sdkScResult<id> *))callback __attribute__((swift_name("logout(callback:)")));
- (void)refreshUserProfileCallback:(void (^)(Scm_sdkScResult<id> *))callback __attribute__((swift_name("refreshUserProfile(callback:)")));
- (void)setCurrentSubscriberSubscriberId:(int32_t)subscriberId callback:(void (^)(Scm_sdkScResult<id> *))callback __attribute__((swift_name("setCurrentSubscriber(subscriberId:callback:)")));
- (Scm_sdkScFlow<NSArray<Scm_sdkSubscriber *> *> *)subscribeSubsidiaries __attribute__((swift_name("subscribeSubsidiaries()")));
- (Scm_sdkScFlow<Scm_sdkUser *> *)subscribeUser __attribute__((swift_name("subscribeUser()")));
@property (readonly) id<Scm_sdkKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScmMigrationInteractor")))
@interface Scm_sdkScmMigrationInteractor : Scm_sdkBase <Scm_sdkKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithScMigration:(id<Scm_sdkScmMigration>)scMigration __attribute__((swift_name("init(scMigration:)"))) __attribute__((objc_designated_initializer));
- (void)migrationParams:(Scm_sdkConfigurationMigrationParams *)params callback:(void (^)(Scm_sdkScResult<id> *))callback __attribute__((swift_name("migration(params:callback:)")));
@property (readonly) id<Scm_sdkKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScmTokenInteractor")))
@interface Scm_sdkScmTokenInteractor : Scm_sdkBase <Scm_sdkKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithScToken:(id<Scm_sdkScmToken>)scToken __attribute__((swift_name("init(scToken:)"))) __attribute__((objc_designated_initializer));
- (void)getTokenCallback:(void (^)(Scm_sdkScResult<Scm_sdkScmSdkToken *> *))callback __attribute__((swift_name("getToken(callback:)")));
- (void)refreshTokenCallback:(void (^)(Scm_sdkScResult<Scm_sdkScmSdkToken *> *))callback __attribute__((swift_name("refreshToken(callback:)")));
@property (readonly) id<Scm_sdkKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScmToolsInteractor")))
@interface Scm_sdkScmToolsInteractor : Scm_sdkBase <Scm_sdkKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithScmTools:(id<Scm_sdkScmTools>)scmTools __attribute__((swift_name("init(scmTools:)"))) __attribute__((objc_designated_initializer));
- (void)setupUrlsBaseUrls:(Scm_sdkConfigurationBaseUrlsParams *)baseUrls callback:(void (^)(Scm_sdkScResult<id> *))callback __attribute__((swift_name("setupUrls(baseUrls:callback:)")));
@property (readonly) id<Scm_sdkKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScmUnauthorizedUserInteractor")))
@interface Scm_sdkScmUnauthorizedUserInteractor : Scm_sdkBase <Scm_sdkKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithScUser:(id<Scm_sdkScmUnauthorizedUser>)scUser __attribute__((swift_name("init(scUser:)"))) __attribute__((objc_designated_initializer));
- (void)isAuthorizedCallback:(void (^)(Scm_sdkScResult<Scm_sdkBoolean *> *))callback __attribute__((swift_name("isAuthorized(callback:)")));
@property (readonly) id<Scm_sdkKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScmUserAccessInteractor")))
@interface Scm_sdkScmUserAccessInteractor : Scm_sdkBase <Scm_sdkKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithScmUserAccess:(id<Scm_sdkScmUserAccess>)scmUserAccess __attribute__((swift_name("init(scmUserAccess:)"))) __attribute__((objc_designated_initializer));
- (void)isAppSettingsEnabledSetting:(Scm_sdkAppSettingParams *)setting callback:(void (^)(Scm_sdkScResult<Scm_sdkBoolean *> *))callback __attribute__((swift_name("isAppSettingsEnabled(setting:callback:)")));
- (void)isFeatureEnabledFeature:(Scm_sdkFeatureParams *)feature callback:(void (^)(Scm_sdkScResult<Scm_sdkBoolean *> *))callback __attribute__((swift_name("isFeatureEnabled(feature:callback:)")));
- (void)isPermissionGrantedPermission:(Scm_sdkUserPermissionParams *)permission callback:(void (^)(Scm_sdkScResult<Scm_sdkBoolean *> *))callback __attribute__((swift_name("isPermissionGranted(permission:callback:)")));
@property (readonly) id<Scm_sdkKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MigrationComponent")))
@interface Scm_sdkMigrationComponent : Scm_sdkBase
- (instancetype)initWithRootScope:(id<Scm_sdkKodein_diDI>)rootScope __attribute__((swift_name("init(rootScope:)"))) __attribute__((objc_designated_initializer));
- (id<Scm_sdkScmMigration>)provideMigration __attribute__((swift_name("provideMigration()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountLocal")))
@interface Scm_sdkAccountLocal : Scm_sdkBase
- (instancetype)initWithId:(int32_t)id isUniversalUser:(BOOL)isUniversalUser __attribute__((swift_name("init(id:isUniversalUser:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (Scm_sdkAccountLocal *)doCopyId:(int32_t)id isUniversalUser:(BOOL)isUniversalUser __attribute__((swift_name("doCopy(id:isUniversalUser:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) BOOL isUniversalUser __attribute__((swift_name("isUniversalUser")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol Scm_sdkRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<Scm_sdkRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<Scm_sdkRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("AccountQueries")))
@protocol Scm_sdkAccountQueries <Scm_sdkRuntimeTransacter>
@required
- (void)deleteAll __attribute__((swift_name("deleteAll()")));
- (Scm_sdkRuntimeQuery<Scm_sdkAccountLocal *> *)getAccount __attribute__((swift_name("getAccount()")));
- (Scm_sdkRuntimeQuery<id> *)getAccountMapper:(id (^)(Scm_sdkInt *, Scm_sdkBoolean *))mapper __attribute__((swift_name("getAccount(mapper:)")));
- (void)insertAccountAccountLocal:(Scm_sdkAccountLocal *)AccountLocal __attribute__((swift_name("insertAccount(AccountLocal:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppSettingsLocal")))
@interface Scm_sdkAppSettingsLocal : Scm_sdkBase
- (instancetype)initWithId:(int32_t)id isAssetFirstWorkOrderCreation:(BOOL)isAssetFirstWorkOrderCreation __attribute__((swift_name("init(id:isAssetFirstWorkOrderCreation:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (Scm_sdkAppSettingsLocal *)doCopyId:(int32_t)id isAssetFirstWorkOrderCreation:(BOOL)isAssetFirstWorkOrderCreation __attribute__((swift_name("doCopy(id:isAssetFirstWorkOrderCreation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) BOOL isAssetFirstWorkOrderCreation __attribute__((swift_name("isAssetFirstWorkOrderCreation")));
@end;

__attribute__((swift_name("AppSettingsQueries")))
@protocol Scm_sdkAppSettingsQueries <Scm_sdkRuntimeTransacter>
@required
- (void)delete __attribute__((swift_name("delete()")));
- (Scm_sdkRuntimeQuery<Scm_sdkAppSettingsLocal *> *)getAppSettings __attribute__((swift_name("getAppSettings()")));
- (Scm_sdkRuntimeQuery<id> *)getAppSettingsMapper:(id (^)(Scm_sdkInt *, Scm_sdkBoolean *))mapper __attribute__((swift_name("getAppSettings(mapper:)")));
- (void)insertAppSettingsAppSettingsLocal:(Scm_sdkAppSettingsLocal *)AppSettingsLocal __attribute__((swift_name("insertAppSettings(AppSettingsLocal:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturesLocal")))
@interface Scm_sdkFeaturesLocal : Scm_sdkBase
- (instancetype)initWithIsProposalsEnabled:(BOOL)isProposalsEnabled isAlertsEnabled:(BOOL)isAlertsEnabled isDecisionEngineEnabled:(BOOL)isDecisionEngineEnabled isFeedbackEnabled:(BOOL)isFeedbackEnabled isAssetTaggingEnabled:(BOOL)isAssetTaggingEnabled isCreateWObyAssetTagEnabled:(BOOL)isCreateWObyAssetTagEnabled isSiteAuditEmailReportEnabled:(BOOL)isSiteAuditEmailReportEnabled isProposalApproveReasonEnabled:(BOOL)isProposalApproveReasonEnabled isVideoCapabilityEnabled:(BOOL)isVideoCapabilityEnabled isDecisionTreeDashEnabled:(BOOL)isDecisionTreeDashEnabled isProposalAssignReasonEnabled:(BOOL)isProposalAssignReasonEnabled isProviderFeedbackEnabled:(BOOL)isProviderFeedbackEnabled isShowReviewsCounterEnabled:(BOOL)isShowReviewsCounterEnabled isInventoryManagementEnabled:(BOOL)isInventoryManagementEnabled isEulaLoginEnabled:(BOOL)isEulaLoginEnabled isSitePlanningEnabled:(BOOL)isSitePlanningEnabled isShowAssignedTechniciansEnabled:(BOOL)isShowAssignedTechniciansEnabled isShowInAppTutorialEnabled:(BOOL)isShowInAppTutorialEnabled isSitePlanningV2Enabled:(BOOL)isSitePlanningV2Enabled isDoNotDispatchEnabled:(BOOL)isDoNotDispatchEnabled isFeedbackCustomQuestionsEnabled:(BOOL)isFeedbackCustomQuestionsEnabled isBadgeScanningEnabled:(BOOL)isBadgeScanningEnabled isShowWeatherTypeEnabled:(BOOL)isShowWeatherTypeEnabled isSiteAccessRulesAdministrationEnabled:(BOOL)isSiteAccessRulesAdministrationEnabled isChecklistAssetTasksEnabled:(BOOL)isChecklistAssetTasksEnabled isIgnoreAssetTypeIdEnabled:(BOOL)isIgnoreAssetTypeIdEnabled isAssetFirstMobileEnabled:(BOOL)isAssetFirstMobileEnabled __attribute__((swift_name("init(isProposalsEnabled:isAlertsEnabled:isDecisionEngineEnabled:isFeedbackEnabled:isAssetTaggingEnabled:isCreateWObyAssetTagEnabled:isSiteAuditEmailReportEnabled:isProposalApproveReasonEnabled:isVideoCapabilityEnabled:isDecisionTreeDashEnabled:isProposalAssignReasonEnabled:isProviderFeedbackEnabled:isShowReviewsCounterEnabled:isInventoryManagementEnabled:isEulaLoginEnabled:isSitePlanningEnabled:isShowAssignedTechniciansEnabled:isShowInAppTutorialEnabled:isSitePlanningV2Enabled:isDoNotDispatchEnabled:isFeedbackCustomQuestionsEnabled:isBadgeScanningEnabled:isShowWeatherTypeEnabled:isSiteAccessRulesAdministrationEnabled:isChecklistAssetTasksEnabled:isIgnoreAssetTypeIdEnabled:isAssetFirstMobileEnabled:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (BOOL)component11 __attribute__((swift_name("component11()")));
- (BOOL)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (BOOL)component14 __attribute__((swift_name("component14()")));
- (BOOL)component15 __attribute__((swift_name("component15()")));
- (BOOL)component16 __attribute__((swift_name("component16()")));
- (BOOL)component17 __attribute__((swift_name("component17()")));
- (BOOL)component18 __attribute__((swift_name("component18()")));
- (BOOL)component19 __attribute__((swift_name("component19()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component20 __attribute__((swift_name("component20()")));
- (BOOL)component21 __attribute__((swift_name("component21()")));
- (BOOL)component22 __attribute__((swift_name("component22()")));
- (BOOL)component23 __attribute__((swift_name("component23()")));
- (BOOL)component24 __attribute__((swift_name("component24()")));
- (BOOL)component25 __attribute__((swift_name("component25()")));
- (BOOL)component26 __attribute__((swift_name("component26()")));
- (BOOL)component27 __attribute__((swift_name("component27()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (Scm_sdkFeaturesLocal *)doCopyIsProposalsEnabled:(BOOL)isProposalsEnabled isAlertsEnabled:(BOOL)isAlertsEnabled isDecisionEngineEnabled:(BOOL)isDecisionEngineEnabled isFeedbackEnabled:(BOOL)isFeedbackEnabled isAssetTaggingEnabled:(BOOL)isAssetTaggingEnabled isCreateWObyAssetTagEnabled:(BOOL)isCreateWObyAssetTagEnabled isSiteAuditEmailReportEnabled:(BOOL)isSiteAuditEmailReportEnabled isProposalApproveReasonEnabled:(BOOL)isProposalApproveReasonEnabled isVideoCapabilityEnabled:(BOOL)isVideoCapabilityEnabled isDecisionTreeDashEnabled:(BOOL)isDecisionTreeDashEnabled isProposalAssignReasonEnabled:(BOOL)isProposalAssignReasonEnabled isProviderFeedbackEnabled:(BOOL)isProviderFeedbackEnabled isShowReviewsCounterEnabled:(BOOL)isShowReviewsCounterEnabled isInventoryManagementEnabled:(BOOL)isInventoryManagementEnabled isEulaLoginEnabled:(BOOL)isEulaLoginEnabled isSitePlanningEnabled:(BOOL)isSitePlanningEnabled isShowAssignedTechniciansEnabled:(BOOL)isShowAssignedTechniciansEnabled isShowInAppTutorialEnabled:(BOOL)isShowInAppTutorialEnabled isSitePlanningV2Enabled:(BOOL)isSitePlanningV2Enabled isDoNotDispatchEnabled:(BOOL)isDoNotDispatchEnabled isFeedbackCustomQuestionsEnabled:(BOOL)isFeedbackCustomQuestionsEnabled isBadgeScanningEnabled:(BOOL)isBadgeScanningEnabled isShowWeatherTypeEnabled:(BOOL)isShowWeatherTypeEnabled isSiteAccessRulesAdministrationEnabled:(BOOL)isSiteAccessRulesAdministrationEnabled isChecklistAssetTasksEnabled:(BOOL)isChecklistAssetTasksEnabled isIgnoreAssetTypeIdEnabled:(BOOL)isIgnoreAssetTypeIdEnabled isAssetFirstMobileEnabled:(BOOL)isAssetFirstMobileEnabled __attribute__((swift_name("doCopy(isProposalsEnabled:isAlertsEnabled:isDecisionEngineEnabled:isFeedbackEnabled:isAssetTaggingEnabled:isCreateWObyAssetTagEnabled:isSiteAuditEmailReportEnabled:isProposalApproveReasonEnabled:isVideoCapabilityEnabled:isDecisionTreeDashEnabled:isProposalAssignReasonEnabled:isProviderFeedbackEnabled:isShowReviewsCounterEnabled:isInventoryManagementEnabled:isEulaLoginEnabled:isSitePlanningEnabled:isShowAssignedTechniciansEnabled:isShowInAppTutorialEnabled:isSitePlanningV2Enabled:isDoNotDispatchEnabled:isFeedbackCustomQuestionsEnabled:isBadgeScanningEnabled:isShowWeatherTypeEnabled:isSiteAccessRulesAdministrationEnabled:isChecklistAssetTasksEnabled:isIgnoreAssetTypeIdEnabled:isAssetFirstMobileEnabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isAlertsEnabled __attribute__((swift_name("isAlertsEnabled")));
@property (readonly) BOOL isAssetFirstMobileEnabled __attribute__((swift_name("isAssetFirstMobileEnabled")));
@property (readonly) BOOL isAssetTaggingEnabled __attribute__((swift_name("isAssetTaggingEnabled")));
@property (readonly) BOOL isBadgeScanningEnabled __attribute__((swift_name("isBadgeScanningEnabled")));
@property (readonly) BOOL isChecklistAssetTasksEnabled __attribute__((swift_name("isChecklistAssetTasksEnabled")));
@property (readonly) BOOL isCreateWObyAssetTagEnabled __attribute__((swift_name("isCreateWObyAssetTagEnabled")));
@property (readonly) BOOL isDecisionEngineEnabled __attribute__((swift_name("isDecisionEngineEnabled")));
@property (readonly) BOOL isDecisionTreeDashEnabled __attribute__((swift_name("isDecisionTreeDashEnabled")));
@property (readonly) BOOL isDoNotDispatchEnabled __attribute__((swift_name("isDoNotDispatchEnabled")));
@property (readonly) BOOL isEulaLoginEnabled __attribute__((swift_name("isEulaLoginEnabled")));
@property (readonly) BOOL isFeedbackCustomQuestionsEnabled __attribute__((swift_name("isFeedbackCustomQuestionsEnabled")));
@property (readonly) BOOL isFeedbackEnabled __attribute__((swift_name("isFeedbackEnabled")));
@property (readonly) BOOL isIgnoreAssetTypeIdEnabled __attribute__((swift_name("isIgnoreAssetTypeIdEnabled")));
@property (readonly) BOOL isInventoryManagementEnabled __attribute__((swift_name("isInventoryManagementEnabled")));
@property (readonly) BOOL isProposalApproveReasonEnabled __attribute__((swift_name("isProposalApproveReasonEnabled")));
@property (readonly) BOOL isProposalAssignReasonEnabled __attribute__((swift_name("isProposalAssignReasonEnabled")));
@property (readonly) BOOL isProposalsEnabled __attribute__((swift_name("isProposalsEnabled")));
@property (readonly) BOOL isProviderFeedbackEnabled __attribute__((swift_name("isProviderFeedbackEnabled")));
@property (readonly) BOOL isShowAssignedTechniciansEnabled __attribute__((swift_name("isShowAssignedTechniciansEnabled")));
@property (readonly) BOOL isShowInAppTutorialEnabled __attribute__((swift_name("isShowInAppTutorialEnabled")));
@property (readonly) BOOL isShowReviewsCounterEnabled __attribute__((swift_name("isShowReviewsCounterEnabled")));
@property (readonly) BOOL isShowWeatherTypeEnabled __attribute__((swift_name("isShowWeatherTypeEnabled")));
@property (readonly) BOOL isSiteAccessRulesAdministrationEnabled __attribute__((swift_name("isSiteAccessRulesAdministrationEnabled")));
@property (readonly) BOOL isSiteAuditEmailReportEnabled __attribute__((swift_name("isSiteAuditEmailReportEnabled")));
@property (readonly) BOOL isSitePlanningEnabled __attribute__((swift_name("isSitePlanningEnabled")));
@property (readonly) BOOL isSitePlanningV2Enabled __attribute__((swift_name("isSitePlanningV2Enabled")));
@property (readonly) BOOL isVideoCapabilityEnabled __attribute__((swift_name("isVideoCapabilityEnabled")));
@end;

__attribute__((swift_name("FeaturesQueries")))
@protocol Scm_sdkFeaturesQueries <Scm_sdkRuntimeTransacter>
@required
- (void)deleteFeatures __attribute__((swift_name("deleteFeatures()")));
- (Scm_sdkRuntimeQuery<Scm_sdkFeaturesLocal *> *)getFeatures __attribute__((swift_name("getFeatures()")));
- (Scm_sdkRuntimeQuery<id> *)getFeaturesMapper:(id (^)(Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *))mapper __attribute__((swift_name("getFeatures(mapper:)")));
- (void)insertFeaturesFeaturesLocal:(Scm_sdkFeaturesLocal *)FeaturesLocal __attribute__((swift_name("insertFeatures(FeaturesLocal:)")));
@end;

__attribute__((swift_name("ScmSdkDatabase")))
@protocol Scm_sdkScmSdkDatabase <Scm_sdkRuntimeTransacter>
@required
@property (readonly) id<Scm_sdkAccountQueries> accountQueries __attribute__((swift_name("accountQueries")));
@property (readonly) id<Scm_sdkAppSettingsQueries> appSettingsQueries __attribute__((swift_name("appSettingsQueries")));
@property (readonly) id<Scm_sdkFeaturesQueries> featuresQueries __attribute__((swift_name("featuresQueries")));
@property (readonly) id<Scm_sdkSubsidiariesQueries> subsidiariesQueries __attribute__((swift_name("subsidiariesQueries")));
@property (readonly) id<Scm_sdkUserPermissionsQueries> userPermissionsQueries __attribute__((swift_name("userPermissionsQueries")));
@property (readonly) id<Scm_sdkUserQueries> userQueries __attribute__((swift_name("userQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScmSdkDatabaseCompanion")))
@interface Scm_sdkScmSdkDatabaseCompanion : Scm_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Scm_sdkScmSdkDatabase>)invokeDriver:(id<Scm_sdkRuntimeSqlDriver>)driver UserLocalAdapter:(Scm_sdkUserLocalAdapter *)UserLocalAdapter __attribute__((swift_name("invoke(driver:UserLocalAdapter:)")));
@property (readonly) id<Scm_sdkRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriberLocal")))
@interface Scm_sdkSubscriberLocal : Scm_sdkBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name description:(NSString *)description isCurrent:(BOOL)isCurrent __attribute__((swift_name("init(id:name:description:isCurrent:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (Scm_sdkSubscriberLocal *)doCopyId:(int32_t)id name:(NSString *)name description:(NSString *)description isCurrent:(BOOL)isCurrent __attribute__((swift_name("doCopy(id:name:description:isCurrent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) BOOL isCurrent __attribute__((swift_name("isCurrent")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("SubsidiariesQueries")))
@protocol Scm_sdkSubsidiariesQueries <Scm_sdkRuntimeTransacter>
@required
- (void)deleteAll __attribute__((swift_name("deleteAll()")));
- (void)insertSubscriberLocal:(Scm_sdkSubscriberLocal *)SubscriberLocal __attribute__((swift_name("insert(SubscriberLocal:)")));
- (void)removeOldCurrentId:(int32_t)id __attribute__((swift_name("removeOldCurrent(id:)")));
- (Scm_sdkRuntimeQuery<Scm_sdkSubscriberLocal *> *)selectAll __attribute__((swift_name("selectAll()")));
- (Scm_sdkRuntimeQuery<id> *)selectAllMapper:(id (^)(Scm_sdkInt *, NSString *, NSString *, Scm_sdkBoolean *))mapper __attribute__((swift_name("selectAll(mapper:)")));
- (void)setCurrentIsCurrent:(BOOL)isCurrent id:(int32_t)id __attribute__((swift_name("setCurrent(isCurrent:id:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserLocal")))
@interface Scm_sdkUserLocal : Scm_sdkBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name fullName:(NSString *)fullName email:(NSString *)email roles:(NSArray<Scm_sdkInt *> *)roles dashboards:(NSArray<Scm_sdkDashboardDataLocal *> *)dashboards isDashboard:(BOOL)isDashboard isUniversalUser:(BOOL)isUniversalUser proposalLimit:(float)proposalLimit proposalCurrencyId:(int32_t)proposalCurrencyId isAccountPayableManager:(BOOL)isAccountPayableManager isMlpUser:(BOOL)isMlpUser eulaSigned:(BOOL)eulaSigned subscriberId:(int32_t)subscriberId defaultScUserSetupId:(int32_t)defaultScUserSetupId __attribute__((swift_name("init(id:name:fullName:email:roles:dashboards:isDashboard:isUniversalUser:proposalLimit:proposalCurrencyId:isAccountPayableManager:isMlpUser:eulaSigned:subscriberId:defaultScUserSetupId:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component10 __attribute__((swift_name("component10()")));
- (BOOL)component11 __attribute__((swift_name("component11()")));
- (BOOL)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (int32_t)component14 __attribute__((swift_name("component14()")));
- (int32_t)component15 __attribute__((swift_name("component15()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSArray<Scm_sdkInt *> *)component5 __attribute__((swift_name("component5()")));
- (NSArray<Scm_sdkDashboardDataLocal *> *)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (float)component9 __attribute__((swift_name("component9()")));
- (Scm_sdkUserLocal *)doCopyId:(int32_t)id name:(NSString *)name fullName:(NSString *)fullName email:(NSString *)email roles:(NSArray<Scm_sdkInt *> *)roles dashboards:(NSArray<Scm_sdkDashboardDataLocal *> *)dashboards isDashboard:(BOOL)isDashboard isUniversalUser:(BOOL)isUniversalUser proposalLimit:(float)proposalLimit proposalCurrencyId:(int32_t)proposalCurrencyId isAccountPayableManager:(BOOL)isAccountPayableManager isMlpUser:(BOOL)isMlpUser eulaSigned:(BOOL)eulaSigned subscriberId:(int32_t)subscriberId defaultScUserSetupId:(int32_t)defaultScUserSetupId __attribute__((swift_name("doCopy(id:name:fullName:email:roles:dashboards:isDashboard:isUniversalUser:proposalLimit:proposalCurrencyId:isAccountPayableManager:isMlpUser:eulaSigned:subscriberId:defaultScUserSetupId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Scm_sdkDashboardDataLocal *> *dashboards __attribute__((swift_name("dashboards")));
@property (readonly) int32_t defaultScUserSetupId __attribute__((swift_name("defaultScUserSetupId")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) BOOL eulaSigned __attribute__((swift_name("eulaSigned")));
@property (readonly) NSString *fullName __attribute__((swift_name("fullName")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) BOOL isAccountPayableManager __attribute__((swift_name("isAccountPayableManager")));
@property (readonly) BOOL isDashboard __attribute__((swift_name("isDashboard")));
@property (readonly) BOOL isMlpUser __attribute__((swift_name("isMlpUser")));
@property (readonly) BOOL isUniversalUser __attribute__((swift_name("isUniversalUser")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t proposalCurrencyId __attribute__((swift_name("proposalCurrencyId")));
@property (readonly) float proposalLimit __attribute__((swift_name("proposalLimit")));
@property (readonly) NSArray<Scm_sdkInt *> *roles __attribute__((swift_name("roles")));
@property (readonly) int32_t subscriberId __attribute__((swift_name("subscriberId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserLocal.Adapter")))
@interface Scm_sdkUserLocalAdapter : Scm_sdkBase
- (instancetype)initWithRolesAdapter:(id<Scm_sdkRuntimeColumnAdapter>)rolesAdapter dashboardsAdapter:(id<Scm_sdkRuntimeColumnAdapter>)dashboardsAdapter __attribute__((swift_name("init(rolesAdapter:dashboardsAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<Scm_sdkRuntimeColumnAdapter> dashboardsAdapter __attribute__((swift_name("dashboardsAdapter")));
@property (readonly) id<Scm_sdkRuntimeColumnAdapter> rolesAdapter __attribute__((swift_name("rolesAdapter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPermissionsLocal")))
@interface Scm_sdkUserPermissionsLocal : Scm_sdkBase
- (instancetype)initWithIsEnableCreateWorkOrder:(BOOL)isEnableCreateWorkOrder isEnableSiteAudit:(BOOL)isEnableSiteAudit isSiteAudit:(BOOL)isSiteAudit isCreateWorkOrder:(BOOL)isCreateWorkOrder isViewWorkOrder:(BOOL)isViewWorkOrder isEditWorkOrder:(BOOL)isEditWorkOrder isWorkOrderStatusChange:(BOOL)isWorkOrderStatusChange isChangeableNte:(BOOL)isChangeableNte isMaskMoney:(BOOL)isMaskMoney isBadgeReviewer:(BOOL)isBadgeReviewer isProposalProcess:(BOOL)isProposalProcess isProposalRead:(BOOL)isProposalRead isProposalEnabled:(BOOL)isProposalEnabled __attribute__((swift_name("init(isEnableCreateWorkOrder:isEnableSiteAudit:isSiteAudit:isCreateWorkOrder:isViewWorkOrder:isEditWorkOrder:isWorkOrderStatusChange:isChangeableNte:isMaskMoney:isBadgeReviewer:isProposalProcess:isProposalRead:isProposalEnabled:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (BOOL)component11 __attribute__((swift_name("component11()")));
- (BOOL)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (Scm_sdkUserPermissionsLocal *)doCopyIsEnableCreateWorkOrder:(BOOL)isEnableCreateWorkOrder isEnableSiteAudit:(BOOL)isEnableSiteAudit isSiteAudit:(BOOL)isSiteAudit isCreateWorkOrder:(BOOL)isCreateWorkOrder isViewWorkOrder:(BOOL)isViewWorkOrder isEditWorkOrder:(BOOL)isEditWorkOrder isWorkOrderStatusChange:(BOOL)isWorkOrderStatusChange isChangeableNte:(BOOL)isChangeableNte isMaskMoney:(BOOL)isMaskMoney isBadgeReviewer:(BOOL)isBadgeReviewer isProposalProcess:(BOOL)isProposalProcess isProposalRead:(BOOL)isProposalRead isProposalEnabled:(BOOL)isProposalEnabled __attribute__((swift_name("doCopy(isEnableCreateWorkOrder:isEnableSiteAudit:isSiteAudit:isCreateWorkOrder:isViewWorkOrder:isEditWorkOrder:isWorkOrderStatusChange:isChangeableNte:isMaskMoney:isBadgeReviewer:isProposalProcess:isProposalRead:isProposalEnabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isBadgeReviewer __attribute__((swift_name("isBadgeReviewer")));
@property (readonly) BOOL isChangeableNte __attribute__((swift_name("isChangeableNte")));
@property (readonly) BOOL isCreateWorkOrder __attribute__((swift_name("isCreateWorkOrder")));
@property (readonly) BOOL isEditWorkOrder __attribute__((swift_name("isEditWorkOrder")));
@property (readonly) BOOL isEnableCreateWorkOrder __attribute__((swift_name("isEnableCreateWorkOrder")));
@property (readonly) BOOL isEnableSiteAudit __attribute__((swift_name("isEnableSiteAudit")));
@property (readonly) BOOL isMaskMoney __attribute__((swift_name("isMaskMoney")));
@property (readonly) BOOL isProposalEnabled __attribute__((swift_name("isProposalEnabled")));
@property (readonly) BOOL isProposalProcess __attribute__((swift_name("isProposalProcess")));
@property (readonly) BOOL isProposalRead __attribute__((swift_name("isProposalRead")));
@property (readonly) BOOL isSiteAudit __attribute__((swift_name("isSiteAudit")));
@property (readonly) BOOL isViewWorkOrder __attribute__((swift_name("isViewWorkOrder")));
@property (readonly) BOOL isWorkOrderStatusChange __attribute__((swift_name("isWorkOrderStatusChange")));
@end;

__attribute__((swift_name("UserPermissionsQueries")))
@protocol Scm_sdkUserPermissionsQueries <Scm_sdkRuntimeTransacter>
@required
- (void)deletePermissions __attribute__((swift_name("deletePermissions()")));
- (Scm_sdkRuntimeQuery<Scm_sdkUserPermissionsLocal *> *)getPermissions __attribute__((swift_name("getPermissions()")));
- (Scm_sdkRuntimeQuery<id> *)getPermissionsMapper:(id (^)(Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *))mapper __attribute__((swift_name("getPermissions(mapper:)")));
- (void)insertPermissionsUserPermissionsLocal:(Scm_sdkUserPermissionsLocal *)UserPermissionsLocal __attribute__((swift_name("insertPermissions(UserPermissionsLocal:)")));
@end;

__attribute__((swift_name("UserQueries")))
@protocol Scm_sdkUserQueries <Scm_sdkRuntimeTransacter>
@required
- (void)deleteUser __attribute__((swift_name("deleteUser()")));
- (Scm_sdkRuntimeQuery<Scm_sdkUserLocal *> *)getUser __attribute__((swift_name("getUser()")));
- (Scm_sdkRuntimeQuery<id> *)getUserMapper:(id (^)(Scm_sdkInt *, NSString *, NSString *, NSString *, NSArray<Scm_sdkInt *> *, NSArray<Scm_sdkDashboardDataLocal *> *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkFloat *, Scm_sdkInt *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkBoolean *, Scm_sdkInt *, Scm_sdkInt *))mapper __attribute__((swift_name("getUser(mapper:)")));
- (Scm_sdkRuntimeQuery<Scm_sdkInt *> *)getUserId __attribute__((swift_name("getUserId()")));
- (void)insertUserUserLocal:(Scm_sdkUserLocal *)UserLocal __attribute__((swift_name("insertUser(UserLocal:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScmSdk")))
@interface Scm_sdkScmSdk : Scm_sdkBase
- (id<Scm_sdkScmAuth>)provideAuth __attribute__((swift_name("provideAuth()")));
- (id<Scm_sdkScmAuthorizedUser>)provideAuthorizedUser __attribute__((swift_name("provideAuthorizedUser()")));
- (id<Scm_sdkScmMigration>)provideMigration __attribute__((swift_name("provideMigration()")));
- (id<Scm_sdkScmToken>)provideToken __attribute__((swift_name("provideToken()")));
- (id<Scm_sdkScmTools>)provideTools __attribute__((swift_name("provideTools()")));
- (id<Scm_sdkScmUnauthorizedUser>)provideUnauthorizedUser __attribute__((swift_name("provideUnauthorizedUser()")));
- (id<Scm_sdkScmUserAccess>)provideUserAccess __attribute__((swift_name("provideUserAccess()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScmSdk.Companion")))
@interface Scm_sdkScmSdkCompanion : Scm_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

@interface Scm_sdkScResult (Extensions)
- (id _Nullable)getOrDefaultDefaultValue:(id _Nullable)defaultValue __attribute__((swift_name("getOrDefault(defaultValue:)")));
- (id _Nullable)getOrThrow __attribute__((swift_name("getOrThrow()")));
- (Scm_sdkScResult<id> *)onFailureAction:(void (^)(Scm_sdkKotlinThrowable *))action __attribute__((swift_name("onFailure(action:)")));
- (Scm_sdkScResult<id> *)onSuccessAction:(void (^)(id _Nullable))action __attribute__((swift_name("onSuccess(action:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol Scm_sdkKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<Scm_sdkKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<Scm_sdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol Scm_sdkKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<Scm_sdkKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<Scm_sdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol Scm_sdkKotlinx_serialization_coreKSerializer <Scm_sdkKotlinx_serialization_coreSerializationStrategy, Scm_sdkKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Scm_sdkKotlinArray<T> : Scm_sdkBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(Scm_sdkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Scm_sdkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinException")))
@interface Scm_sdkKotlinException : Scm_sdkKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Scm_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Scm_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface Scm_sdkKotlinRuntimeException : Scm_sdkKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Scm_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Scm_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface Scm_sdkKotlinIllegalStateException : Scm_sdkKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Scm_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Scm_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface Scm_sdkKotlinCancellationException : Scm_sdkKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Scm_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Scm_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface Scm_sdkKotlinUnit : Scm_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol Scm_sdkKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(Scm_sdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol Scm_sdkKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<Scm_sdkKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<Scm_sdkKotlinCoroutineContextElement> _Nullable)getKey:(id<Scm_sdkKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<Scm_sdkKotlinCoroutineContext>)minusKeyKey:(id<Scm_sdkKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<Scm_sdkKotlinCoroutineContext>)plusContext:(id<Scm_sdkKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Kodein_diDIAware")))
@protocol Scm_sdkKodein_diDIAware
@required
@property (readonly) id<Scm_sdkKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<Scm_sdkKodein_diDIContext> diContext __attribute__((swift_name("diContext")));
@property (readonly) Scm_sdkKodein_diDITrigger * _Nullable diTrigger __attribute__((swift_name("diTrigger")));
@end;

__attribute__((swift_name("Kodein_diDI")))
@protocol Scm_sdkKodein_diDI <Scm_sdkKodein_diDIAware>
@required
@property (readonly) id<Scm_sdkKodein_diDIContainer> container __attribute__((swift_name("container")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface Scm_sdkRuntimeQuery<__covariant RowType> : Scm_sdkBase
- (instancetype)initWithQueries:(NSMutableArray<Scm_sdkRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<Scm_sdkRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<Scm_sdkRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<Scm_sdkRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<Scm_sdkRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<Scm_sdkRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol Scm_sdkRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol Scm_sdkRuntimeTransactionWithoutReturn <Scm_sdkRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<Scm_sdkRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol Scm_sdkRuntimeTransactionWithReturn <Scm_sdkRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<Scm_sdkRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol Scm_sdkRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol Scm_sdkRuntimeSqlDriver <Scm_sdkRuntimeCloseable>
@required
- (Scm_sdkRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(Scm_sdkInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<Scm_sdkRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<Scm_sdkRuntimeSqlCursor>)executeQueryIdentifier:(Scm_sdkInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<Scm_sdkRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (Scm_sdkRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol Scm_sdkRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<Scm_sdkRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<Scm_sdkRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeColumnAdapter")))
@protocol Scm_sdkRuntimeColumnAdapter
@required
- (id)decodeDatabaseValue:(id _Nullable)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (id _Nullable)encodeValue:(id)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol Scm_sdkKotlinx_serialization_coreEncoder
@required
- (id<Scm_sdkKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<Scm_sdkKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<Scm_sdkKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<Scm_sdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<Scm_sdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) Scm_sdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol Scm_sdkKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<Scm_sdkKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<Scm_sdkKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) Scm_sdkKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol Scm_sdkKotlinx_serialization_coreDecoder
@required
- (id<Scm_sdkKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<Scm_sdkKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (Scm_sdkKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<Scm_sdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<Scm_sdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) Scm_sdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol Scm_sdkKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol Scm_sdkKotlinCoroutineContextElement <Scm_sdkKotlinCoroutineContext>
@required
@property (readonly) id<Scm_sdkKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol Scm_sdkKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Kodein_diDIContainer")))
@protocol Scm_sdkKodein_diDIContainer
@required
- (NSArray<id (^)(id _Nullable)> *)allFactoriesKey:(Scm_sdkKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allFactories(key:context:overrideLevel:)")));
- (NSArray<id (^)(void)> *)allProvidersKey:(Scm_sdkKodein_diDIKey<id, Scm_sdkKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allProviders(key:context:overrideLevel:)")));
- (id (^)(id _Nullable))factoryKey:(Scm_sdkKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factory(key:context:overrideLevel:)")));
- (id (^ _Nullable)(id _Nullable))factoryOrNullKey:(Scm_sdkKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factoryOrNull(key:context:overrideLevel:)")));
- (id (^)(void))providerKey:(Scm_sdkKodein_diDIKey<id, Scm_sdkKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("provider(key:context:overrideLevel:)")));
- (id (^ _Nullable)(void))providerOrNullKey:(Scm_sdkKodein_diDIKey<id, Scm_sdkKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("providerOrNull(key:context:overrideLevel:)")));
@property (readonly) id<Scm_sdkKodein_diDITree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((swift_name("Kodein_diDIContext")))
@protocol Scm_sdkKodein_diDIContext
@required
@property (readonly) id<Scm_sdkKodein_typeTypeToken> type __attribute__((swift_name("type")));
@property (readonly) id value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDITrigger")))
@interface Scm_sdkKodein_diDITrigger : Scm_sdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) NSMutableArray<id<Scm_sdkKotlinLazy>> *properties __attribute__((swift_name("properties")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol Scm_sdkRuntimeSqlCursor <Scm_sdkRuntimeCloseable>
@required
- (Scm_sdkKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (Scm_sdkDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (Scm_sdkLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol Scm_sdkRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface Scm_sdkRuntimeTransacterTransaction : Scm_sdkBase <Scm_sdkRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) Scm_sdkRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol Scm_sdkRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(Scm_sdkKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(Scm_sdkDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(Scm_sdkLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol Scm_sdkKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<Scm_sdkKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<Scm_sdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<Scm_sdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) Scm_sdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface Scm_sdkKotlinx_serialization_coreSerializersModule : Scm_sdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<Scm_sdkKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<Scm_sdkKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<Scm_sdkKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<Scm_sdkKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<Scm_sdkKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<Scm_sdkKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<Scm_sdkKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<Scm_sdkKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol Scm_sdkKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface Scm_sdkKotlinx_serialization_coreSerialKind : Scm_sdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol Scm_sdkKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<Scm_sdkKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Scm_sdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Scm_sdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<Scm_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) Scm_sdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface Scm_sdkKotlinNothing : Scm_sdkBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIKey")))
@interface Scm_sdkKodein_diDIKey<__contravariant C, __contravariant A, __covariant T> : Scm_sdkBase
- (instancetype)initWithContextType:(id<Scm_sdkKodein_typeTypeToken>)contextType argType:(id<Scm_sdkKodein_typeTypeToken>)argType type:(id<Scm_sdkKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (id<Scm_sdkKodein_typeTypeToken>)component1 __attribute__((swift_name("component1()")));
- (id<Scm_sdkKodein_typeTypeToken>)component2 __attribute__((swift_name("component2()")));
- (id<Scm_sdkKodein_typeTypeToken>)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (Scm_sdkKodein_diDIKey<C, A, T> *)doCopyContextType:(id<Scm_sdkKodein_typeTypeToken>)contextType argType:(id<Scm_sdkKodein_typeTypeToken>)argType type:(id<Scm_sdkKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("doCopy(contextType:argType:type:tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<Scm_sdkKodein_typeTypeToken> argType __attribute__((swift_name("argType")));
@property (readonly) NSString *bindDescription __attribute__((swift_name("bindDescription")));
@property (readonly) NSString *bindFullDescription __attribute__((swift_name("bindFullDescription")));
@property (readonly) id<Scm_sdkKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) NSString *internalDescription __attribute__((swift_name("internalDescription")));
@property (readonly) id _Nullable tag __attribute__((swift_name("tag")));
@property (readonly) id<Scm_sdkKodein_typeTypeToken> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_diDITree")))
@protocol Scm_sdkKodein_diDITree
@required
- (NSArray<Scm_sdkKotlinTriple<Scm_sdkKodein_diDIKey<id, id, id> *, Scm_sdkKodein_diDIDefinition<id, id, id> *, id<Scm_sdkKodein_diContextTranslator>> *> *)findKey:(Scm_sdkKodein_diDIKey<id, id, id> *)key overrideLevel:(int32_t)overrideLevel all:(BOOL)all __attribute__((swift_name("find(key:overrideLevel:all:)")));
- (NSArray<Scm_sdkKotlinTriple<Scm_sdkKodein_diDIKey<id, id, id> *, NSArray<Scm_sdkKodein_diDIDefinition<id, id, id> *> *, id<Scm_sdkKodein_diContextTranslator>> *> *)findSearch:(Scm_sdkKodein_diSearchSpecs *)search __attribute__((swift_name("find(search:)")));
- (Scm_sdkKotlinTriple<Scm_sdkKodein_diDIKey<id, id, id> *, NSArray<Scm_sdkKodein_diDIDefinition<id, id, id> *> *, id<Scm_sdkKodein_diContextTranslator>> * _Nullable)getKey_:(Scm_sdkKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("get(key_:)")));
@property (readonly) NSDictionary<Scm_sdkKodein_diDIKey<id, id, id> *, NSArray<Scm_sdkKodein_diDIDefinition<id, id, id> *> *> *bindings __attribute__((swift_name("bindings")));
@property (readonly) NSArray<id<Scm_sdkKodein_diExternalSource>> *externalSources __attribute__((swift_name("externalSources")));
@property (readonly) NSArray<id<Scm_sdkKodein_diContextTranslator>> *registeredTranslators __attribute__((swift_name("registeredTranslators")));
@end;

__attribute__((swift_name("Kodein_typeTypeToken")))
@protocol Scm_sdkKodein_typeTypeToken
@required
- (Scm_sdkKotlinArray<id<Scm_sdkKodein_typeTypeToken>> *)getGenericParameters __attribute__((swift_name("getGenericParameters()")));
- (id<Scm_sdkKodein_typeTypeToken>)getRaw __attribute__((swift_name("getRaw()")));
- (NSArray<id<Scm_sdkKodein_typeTypeToken>> *)getSuper __attribute__((swift_name("getSuper()")));
- (BOOL)isAssignableFromTypeToken:(id<Scm_sdkKodein_typeTypeToken>)typeToken __attribute__((swift_name("isAssignableFrom(typeToken:)")));
- (BOOL)isGeneric __attribute__((swift_name("isGeneric()")));
- (BOOL)isWildcard __attribute__((swift_name("isWildcard()")));
- (NSString *)qualifiedDispString __attribute__((swift_name("qualifiedDispString()")));
- (NSString *)qualifiedErasedDispString __attribute__((swift_name("qualifiedErasedDispString()")));
- (NSString *)simpleDispString __attribute__((swift_name("simpleDispString()")));
- (NSString *)simpleErasedDispString __attribute__((swift_name("simpleErasedDispString()")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol Scm_sdkKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface Scm_sdkKotlinByteArray : Scm_sdkBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(Scm_sdkByte *(^)(Scm_sdkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (Scm_sdkKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol Scm_sdkKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<Scm_sdkKotlinKClass>)kClass provider:(id<Scm_sdkKotlinx_serialization_coreKSerializer> (^)(NSArray<id<Scm_sdkKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<Scm_sdkKotlinKClass>)kClass serializer:(id<Scm_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<Scm_sdkKotlinKClass>)baseClass actualClass:(id<Scm_sdkKotlinKClass>)actualClass actualSerializer:(id<Scm_sdkKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<Scm_sdkKotlinKClass>)baseClass defaultSerializerProvider:(id<Scm_sdkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol Scm_sdkKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol Scm_sdkKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol Scm_sdkKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol Scm_sdkKotlinKClass <Scm_sdkKotlinKDeclarationContainer, Scm_sdkKotlinKAnnotatedElement, Scm_sdkKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Kodein_diDIDefining")))
@interface Scm_sdkKodein_diDIDefining<C, A, T> : Scm_sdkBase
- (instancetype)initWithBinding:(id<Scm_sdkKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<Scm_sdkKodein_diDIBinding> binding __attribute__((swift_name("binding")));
@property (readonly) NSString * _Nullable fromModule __attribute__((swift_name("fromModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIDefinition")))
@interface Scm_sdkKodein_diDIDefinition<C, A, T> : Scm_sdkKodein_diDIDefining<C, A, T>
- (instancetype)initWithBinding:(id<Scm_sdkKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule tree:(id<Scm_sdkKodein_diDITree>)tree __attribute__((swift_name("init(binding:fromModule:tree:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBinding:(id<Scm_sdkKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<Scm_sdkKodein_diDITree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((swift_name("Kodein_diContextTranslator")))
@protocol Scm_sdkKodein_diContextTranslator
@required
- (id _Nullable)translateDi:(id<Scm_sdkKodein_diDirectDI>)di ctx:(id)ctx __attribute__((swift_name("translate(di:ctx:)")));
@property (readonly) id<Scm_sdkKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) id<Scm_sdkKodein_typeTypeToken> scopeType __attribute__((swift_name("scopeType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinTriple")))
@interface Scm_sdkKotlinTriple<__covariant A, __covariant B, __covariant C> : Scm_sdkBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("init(first:second:third:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (C _Nullable)component3 __attribute__((swift_name("component3()")));
- (Scm_sdkKotlinTriple<A, B, C> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("doCopy(first:second:third:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@property (readonly) C _Nullable third __attribute__((swift_name("third")));
@end;

__attribute__((swift_name("Kodein_diSearchSpecs")))
@interface Scm_sdkKodein_diSearchSpecs : Scm_sdkBase
- (instancetype)initWithContextType:(id<Scm_sdkKodein_typeTypeToken> _Nullable)contextType argType:(id<Scm_sdkKodein_typeTypeToken> _Nullable)argType type:(id<Scm_sdkKodein_typeTypeToken> _Nullable)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property id<Scm_sdkKodein_typeTypeToken> _Nullable argType __attribute__((swift_name("argType")));
@property id<Scm_sdkKodein_typeTypeToken> _Nullable contextType __attribute__((swift_name("contextType")));
@property id _Nullable tag __attribute__((swift_name("tag")));
@property id<Scm_sdkKodein_typeTypeToken> _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_diExternalSource")))
@protocol Scm_sdkKodein_diExternalSource
@required
- (id (^ _Nullable)(id _Nullable))getFactoryDi:(id<Scm_sdkKodein_diBindingDI>)di key:(Scm_sdkKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("getFactory(di:key:)")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface Scm_sdkKotlinByteIterator : Scm_sdkBase <Scm_sdkKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Scm_sdkByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kodein_diBinding")))
@protocol Scm_sdkKodein_diBinding
@required
- (id (^)(id _Nullable))getFactoryKey:(Scm_sdkKodein_diDIKey<id, id, id> *)key di:(id<Scm_sdkKodein_diBindingDI>)di __attribute__((swift_name("getFactory(key:di:)")));
@end;

__attribute__((swift_name("Kodein_diDIBinding")))
@protocol Scm_sdkKodein_diDIBinding <Scm_sdkKodein_diBinding>
@required
- (NSString *)factoryFullName __attribute__((swift_name("factoryFullName()")));
- (NSString *)factoryName __attribute__((swift_name("factoryName()")));
@property (readonly) id<Scm_sdkKodein_typeTypeToken> argType __attribute__((swift_name("argType")));
@property (readonly) id<Scm_sdkKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) id<Scm_sdkKodein_diDIBindingCopier> _Nullable copier __attribute__((swift_name("copier")));
@property (readonly) id<Scm_sdkKodein_typeTypeToken> createdType __attribute__((swift_name("createdType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) id<Scm_sdkKodein_diScope> _Nullable scope __attribute__((swift_name("scope")));
@property (readonly) BOOL supportSubTypes __attribute__((swift_name("supportSubTypes")));
@end;

__attribute__((swift_name("Kodein_diDirectDIAware")))
@protocol Scm_sdkKodein_diDirectDIAware
@required
@property (readonly) id<Scm_sdkKodein_diDirectDI> directDI __attribute__((swift_name("directDI")));
@end;

__attribute__((swift_name("Kodein_diDirectDIBase")))
@protocol Scm_sdkKodein_diDirectDIBase <Scm_sdkKodein_diDirectDIAware>
@required
- (id (^)(id _Nullable))FactoryArgType:(id<Scm_sdkKodein_typeTypeToken>)argType type:(id<Scm_sdkKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Factory(argType:type:tag:)")));
- (id (^ _Nullable)(id _Nullable))FactoryOrNullArgType:(id<Scm_sdkKodein_typeTypeToken>)argType type:(id<Scm_sdkKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("FactoryOrNull(argType:type:tag:)")));
- (id)InstanceType:(id<Scm_sdkKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Instance(type:tag:)")));
- (id)InstanceArgType:(id<Scm_sdkKodein_typeTypeToken>)argType type:(id<Scm_sdkKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("Instance(argType:type:tag:arg:)")));
- (id _Nullable)InstanceOrNullType:(id<Scm_sdkKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("InstanceOrNull(type:tag:)")));
- (id _Nullable)InstanceOrNullArgType:(id<Scm_sdkKodein_typeTypeToken>)argType type:(id<Scm_sdkKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("InstanceOrNull(argType:type:tag:arg:)")));
- (id<Scm_sdkKodein_diDirectDI>)OnContext:(id<Scm_sdkKodein_diDIContext>)context __attribute__((swift_name("On(context:)")));
- (id (^)(void))ProviderType:(id<Scm_sdkKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Provider(type:tag:)")));
- (id (^)(void))ProviderArgType:(id<Scm_sdkKodein_typeTypeToken>)argType type:(id<Scm_sdkKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("Provider(argType:type:tag:arg:)")));
- (id (^ _Nullable)(void))ProviderOrNullType:(id<Scm_sdkKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("ProviderOrNull(type:tag:)")));
- (id (^ _Nullable)(void))ProviderOrNullArgType:(id<Scm_sdkKodein_typeTypeToken>)argType type:(id<Scm_sdkKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("ProviderOrNull(argType:type:tag:arg:)")));
@property (readonly) id<Scm_sdkKodein_diDIContainer> container __attribute__((swift_name("container")));
@property (readonly) id<Scm_sdkKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<Scm_sdkKodein_diDI> lazy __attribute__((swift_name("lazy")));
@end;

__attribute__((swift_name("Kodein_diDirectDI")))
@protocol Scm_sdkKodein_diDirectDI <Scm_sdkKodein_diDirectDIBase>
@required
@end;

__attribute__((swift_name("Kodein_diWithContext")))
@protocol Scm_sdkKodein_diWithContext
@required
@property (readonly) id context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kodein_diBindingDI")))
@protocol Scm_sdkKodein_diBindingDI <Scm_sdkKodein_diDirectDI, Scm_sdkKodein_diWithContext>
@required
- (id<Scm_sdkKodein_diBindingDI>)onErasedContext __attribute__((swift_name("onErasedContext()")));
- (id (^)(id _Nullable))overriddenFactory __attribute__((swift_name("overriddenFactory()")));
- (id (^ _Nullable)(id _Nullable))overriddenFactoryOrNull __attribute__((swift_name("overriddenFactoryOrNull()")));
@end;

__attribute__((swift_name("Kodein_diDIBindingCopier")))
@protocol Scm_sdkKodein_diDIBindingCopier
@required
- (id<Scm_sdkKodein_diDIBinding>)doCopyBuilder:(id<Scm_sdkKodein_diDIContainerBuilder>)builder __attribute__((swift_name("doCopy(builder:)")));
@end;

__attribute__((swift_name("Kodein_diScope")))
@protocol Scm_sdkKodein_diScope
@required
- (Scm_sdkKodein_diScopeRegistry *)getRegistryContext:(id _Nullable)context __attribute__((swift_name("getRegistry(context:)")));
@end;

__attribute__((swift_name("Kodein_diDIContainerBuilder")))
@protocol Scm_sdkKodein_diDIContainerBuilder
@required
- (void)bindKey:(Scm_sdkKodein_diDIKey<id, id, id> *)key binding:(id<Scm_sdkKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule overrides:(Scm_sdkBoolean * _Nullable)overrides __attribute__((swift_name("bind(key:binding:fromModule:overrides:)")));
- (void)extendContainer:(id<Scm_sdkKodein_diDIContainer>)container allowOverride:(BOOL)allowOverride copy:(NSSet<Scm_sdkKodein_diDIKey<id, id, id> *> *)copy __attribute__((swift_name("extend(container:allowOverride:copy:)")));
- (void)onReadyCb:(void (^)(id<Scm_sdkKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
- (void)registerContextTranslatorTranslator:(id<Scm_sdkKodein_diContextTranslator>)translator __attribute__((swift_name("registerContextTranslator(translator:)")));
- (id<Scm_sdkKodein_diDIContainerBuilder>)subBuilderAllowOverride:(BOOL)allowOverride silentOverride:(BOOL)silentOverride __attribute__((swift_name("subBuilder(allowOverride:silentOverride:)")));
@end;

__attribute__((swift_name("Kodein_diScopeCloseable")))
@protocol Scm_sdkKodein_diScopeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Kodein_diScopeRegistry")))
@interface Scm_sdkKodein_diScopeRegistry : Scm_sdkBase <Scm_sdkKodein_diScopeCloseable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (id)getOrCreateKey:(id)key sync:(BOOL)sync creator:(Scm_sdkKodein_diReference<id> *(^)(void))creator __attribute__((swift_name("getOrCreate(key:sync:creator:)")));
- (id _Nullable (^ _Nullable)(void))getOrNullKey:(id)key __attribute__((swift_name("getOrNull(key:)")));
- (void)removeKey:(id)key __attribute__((swift_name("remove(key:)")));
- (id)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diReference")))
@interface Scm_sdkKodein_diReference<__covariant T> : Scm_sdkBase
- (instancetype)initWithCurrent:(T)current next:(T _Nullable (^)(void))next __attribute__((swift_name("init(current:next:)"))) __attribute__((objc_designated_initializer));
- (T)component1 __attribute__((swift_name("component1()")));
- (T _Nullable (^)(void))component2 __attribute__((swift_name("component2()")));
- (Scm_sdkKodein_diReference<T> *)doCopyCurrent:(T)current next:(T _Nullable (^)(void))next __attribute__((swift_name("doCopy(current:next:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T current __attribute__((swift_name("current")));
@property (readonly) T _Nullable (^next)(void) __attribute__((swift_name("next")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
