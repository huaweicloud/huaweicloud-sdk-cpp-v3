
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateTokenResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateTokenResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/ProxyTokenDTO.h>
#include <string>
#include <huaweicloud/meeting/v1/model/UserInfo.h>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  UpdateTokenResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateTokenResponse();
    virtual ~UpdateTokenResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTokenResponse members

    /// <summary>
    /// Access Token字符串。
    /// </summary>

    std::string getAccessToken() const;
    bool accessTokenIsSet() const;
    void unsetaccessToken();
    void setAccessToken(const std::string& value);

    /// <summary>
    /// 用户IP。
    /// </summary>

    std::string getTokenIp() const;
    bool tokenIpIsSet() const;
    void unsettokenIp();
    void setTokenIp(const std::string& value);

    /// <summary>
    /// Access Token有效时长，单位：秒。
    /// </summary>

    int64_t getValidPeriod() const;
    bool validPeriodIsSet() const;
    void unsetvalidPeriod();
    void setValidPeriod(int64_t value);

    /// <summary>
    /// Access Token的失效时间戳，单位：秒。
    /// </summary>

    int64_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int64_t value);

    /// <summary>
    /// Access Token的创建时间戳，单位：毫秒。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    UserInfo getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const UserInfo& value);

    /// <summary>
    /// 登录帐号类型。 * 72：API调用类型 
    /// </summary>

    int32_t getClientType() const;
    bool clientTypeIsSet() const;
    void unsetclientType();
    void setClientType(int32_t value);

    /// <summary>
    /// 抢占登录标识。 * 0： 非抢占 * 1： 抢占 
    /// </summary>

    int32_t getForceLoginInd() const;
    bool forceLoginIndIsSet() const;
    void unsetforceLoginInd();
    void setForceLoginInd(int32_t value);

    /// <summary>
    /// 是否首次登录。 &gt; 首次登录表示尚未修改过密码。首次登录时，系统会提醒用户需要修改密码。 默认值：false。 
    /// </summary>

    bool isFirstLogin() const;
    bool firstLoginIsSet() const;
    void unsetfirstLogin();
    void setFirstLogin(bool value);

    /// <summary>
    /// 密码是否过期，默认值：false。
    /// </summary>

    bool isPwdExpired() const;
    bool pwdExpiredIsSet() const;
    void unsetpwdExpired();
    void setPwdExpired(bool value);

    /// <summary>
    /// 密码有效天数。
    /// </summary>

    int32_t getDaysPwdAvailable() const;
    bool daysPwdAvailableIsSet() const;
    void unsetdaysPwdAvailable();
    void setDaysPwdAvailable(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ProxyTokenDTO getProxyToken() const;
    bool proxyTokenIsSet() const;
    void unsetproxyToken();
    void setProxyToken(const ProxyTokenDTO& value);

    /// <summary>
    /// 是否延时删除状态。
    /// </summary>

    bool isDelayDelete() const;
    bool delayDeleteIsSet() const;
    void unsetdelayDelete();
    void setDelayDelete(bool value);

    /// <summary>
    /// Token类型。 * 0：用户Access Token * 1：会控TOKEN * 2：一次性TOKEN 
    /// </summary>

    int32_t getTokenType() const;
    bool tokenTypeIsSet() const;
    void unsettokenType();
    void setTokenType(int32_t value);

    /// <summary>
    /// Refresh Token字符串。
    /// </summary>

    std::string getRefreshToken() const;
    bool refreshTokenIsSet() const;
    void unsetrefreshToken();
    void setRefreshToken(const std::string& value);

    /// <summary>
    /// Refresh Token有效时长，单位：秒。
    /// </summary>

    int64_t getRefreshValidPeriod() const;
    bool refreshValidPeriodIsSet() const;
    void unsetrefreshValidPeriod();
    void setRefreshValidPeriod(int64_t value);

    /// <summary>
    /// Refresh Token的失效时间戳，单位：秒。
    /// </summary>

    int64_t getRefreshExpireTime() const;
    bool refreshExpireTimeIsSet() const;
    void unsetrefreshExpireTime();
    void setRefreshExpireTime(int64_t value);

    /// <summary>
    /// Refresh Token的创建时间戳，单位：毫秒。
    /// </summary>

    int64_t getRefreshCreateTime() const;
    bool refreshCreateTimeIsSet() const;
    void unsetrefreshCreateTime();
    void setRefreshCreateTime(int64_t value);


protected:
    std::string accessToken_;
    bool accessTokenIsSet_;
    std::string tokenIp_;
    bool tokenIpIsSet_;
    int64_t validPeriod_;
    bool validPeriodIsSet_;
    int64_t expireTime_;
    bool expireTimeIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    UserInfo user_;
    bool userIsSet_;
    int32_t clientType_;
    bool clientTypeIsSet_;
    int32_t forceLoginInd_;
    bool forceLoginIndIsSet_;
    bool firstLogin_;
    bool firstLoginIsSet_;
    bool pwdExpired_;
    bool pwdExpiredIsSet_;
    int32_t daysPwdAvailable_;
    bool daysPwdAvailableIsSet_;
    ProxyTokenDTO proxyToken_;
    bool proxyTokenIsSet_;
    bool delayDelete_;
    bool delayDeleteIsSet_;
    int32_t tokenType_;
    bool tokenTypeIsSet_;
    std::string refreshToken_;
    bool refreshTokenIsSet_;
    int64_t refreshValidPeriod_;
    bool refreshValidPeriodIsSet_;
    int64_t refreshExpireTime_;
    bool refreshExpireTimeIsSet_;
    int64_t refreshCreateTime_;
    bool refreshCreateTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateTokenResponse_H_
