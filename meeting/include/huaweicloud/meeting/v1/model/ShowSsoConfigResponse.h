
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowSsoConfigResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowSsoConfigResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowSsoConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSsoConfigResponse();
    virtual ~ShowSsoConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSsoConfigResponse members

    /// <summary>
    /// 是否开启SSO登录。
    /// </summary>

    bool isEnableSSO() const;
    bool enableSSOIsSet() const;
    void unsetenableSSO();
    void setEnableSSO(bool value);

    /// <summary>
    /// 企业域名。
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 鉴权中心URL。
    /// </summary>

    std::string getAuthorizeUrl() const;
    bool authorizeUrlIsSet() const;
    void unsetauthorizeUrl();
    void setAuthorizeUrl(const std::string& value);

    /// <summary>
    /// 获取Token URL。
    /// </summary>

    std::string getGetTokenUrl() const;
    bool getTokenUrlIsSet() const;
    void unsetgetTokenUrl();
    void setGetTokenUrl(const std::string& value);

    /// <summary>
    /// APP ID。
    /// </summary>

    std::string getClientId() const;
    bool clientIdIsSet() const;
    void unsetclientId();
    void setClientId(const std::string& value);

    /// <summary>
    /// APP秘钥。
    /// </summary>

    std::string getClientSecret() const;
    bool clientSecretIsSet() const;
    void unsetclientSecret();
    void setClientSecret(const std::string& value);

    /// <summary>
    /// 授权范围。 * openid：OAuth2.0的OIDC 
    /// </summary>

    std::string getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::string& value);

    /// <summary>
    /// 第三方帐号的字段名称。
    /// </summary>

    std::string getAccFieldName() const;
    bool accFieldNameIsSet() const;
    void unsetaccFieldName();
    void setAccFieldName(const std::string& value);

    /// <summary>
    /// 用户信息查询URL。
    /// </summary>

    std::string getGetUserInfoUrl() const;
    bool getUserInfoUrlIsSet() const;
    void unsetgetUserInfoUrl();
    void setGetUserInfoUrl(const std::string& value);

    /// <summary>
    /// 鉴权类型。OAuth2.0鉴权时取0。 * 0：OAuth2.0鉴权 
    /// </summary>

    int32_t getOauth2ServerType() const;
    bool oauth2ServerTypeIsSet() const;
    void unsetoauth2ServerType();
    void setOauth2ServerType(int32_t value);

    /// <summary>
    /// 拉起PC端终端的schema。
    /// </summary>

    std::string getPcSchemaUrl() const;
    bool pcSchemaUrlIsSet() const;
    void unsetpcSchemaUrl();
    void setPcSchemaUrl(const std::string& value);

    /// <summary>
    /// 拉起安卓端终端的schema。
    /// </summary>

    std::string getAndroidSchemaUrl() const;
    bool androidSchemaUrlIsSet() const;
    void unsetandroidSchemaUrl();
    void setAndroidSchemaUrl(const std::string& value);

    /// <summary>
    /// 拉起ios端终端的schema。
    /// </summary>

    std::string getIosSchemaUrl() const;
    bool iosSchemaUrlIsSet() const;
    void unsetiosSchemaUrl();
    void setIosSchemaUrl(const std::string& value);

    /// <summary>
    /// 第三方名称的字段名称。
    /// </summary>

    std::string getThirdName() const;
    bool thirdNameIsSet() const;
    void unsetthirdName();
    void setThirdName(const std::string& value);

    /// <summary>
    /// 第三方邮箱的字段名称。
    /// </summary>

    std::string getThirdEmail() const;
    bool thirdEmailIsSet() const;
    void unsetthirdEmail();
    void setThirdEmail(const std::string& value);

    /// <summary>
    /// 第三方手机号的字段名称。
    /// </summary>

    std::string getThirdMobile() const;
    bool thirdMobileIsSet() const;
    void unsetthirdMobile();
    void setThirdMobile(const std::string& value);

    /// <summary>
    /// 第三方accessToken的字段名称。
    /// </summary>

    std::string getThirdAccessToken() const;
    bool thirdAccessTokenIsSet() const;
    void unsetthirdAccessToken();
    void setThirdAccessToken(const std::string& value);

    /// <summary>
    /// 第三方头像链接的字段名称。
    /// </summary>

    std::string getThirdHeadImgUrl() const;
    bool thirdHeadImgUrlIsSet() const;
    void unsetthirdHeadImgUrl();
    void setThirdHeadImgUrl(const std::string& value);


protected:
    bool enableSSO_;
    bool enableSSOIsSet_;
    std::string domain_;
    bool domainIsSet_;
    std::string authorizeUrl_;
    bool authorizeUrlIsSet_;
    std::string getTokenUrl_;
    bool getTokenUrlIsSet_;
    std::string clientId_;
    bool clientIdIsSet_;
    std::string clientSecret_;
    bool clientSecretIsSet_;
    std::string scope_;
    bool scopeIsSet_;
    std::string accFieldName_;
    bool accFieldNameIsSet_;
    std::string getUserInfoUrl_;
    bool getUserInfoUrlIsSet_;
    int32_t oauth2ServerType_;
    bool oauth2ServerTypeIsSet_;
    std::string pcSchemaUrl_;
    bool pcSchemaUrlIsSet_;
    std::string androidSchemaUrl_;
    bool androidSchemaUrlIsSet_;
    std::string iosSchemaUrl_;
    bool iosSchemaUrlIsSet_;
    std::string thirdName_;
    bool thirdNameIsSet_;
    std::string thirdEmail_;
    bool thirdEmailIsSet_;
    std::string thirdMobile_;
    bool thirdMobileIsSet_;
    std::string thirdAccessToken_;
    bool thirdAccessTokenIsSet_;
    std::string thirdHeadImgUrl_;
    bool thirdHeadImgUrlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowSsoConfigResponse_H_
