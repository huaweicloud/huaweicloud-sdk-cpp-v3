
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_InterpreterAiDigitalInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_InterpreterAiDigitalInfo_H_


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
/// 传译员AI数字资产信息
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  InterpreterAiDigitalInfo
    : public ModelBase
{
public:
    InterpreterAiDigitalInfo();
    virtual ~InterpreterAiDigitalInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InterpreterAiDigitalInfo members

    /// <summary>
    /// 数字资产类型：PUBLIC（系统公共）、PRIVATE（企业专用账号绑定）、LOCAL（企业本地通用）。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// AI传译员场景下绑定使用的数字资产ID（数字人或TTS音色）。
    /// </summary>

    std::string getDigitalAccount() const;
    bool digitalAccountIsSet() const;
    void unsetdigitalAccount();
    void setDigitalAccount(const std::string& value);

    /// <summary>
    /// 数字资产名称。
    /// </summary>

    std::string getDigitalName() const;
    bool digitalNameIsSet() const;
    void unsetdigitalName();
    void setDigitalName(const std::string& value);

    /// <summary>
    /// 专用数字资产绑定的发言人登录账号，翻译对象非匿名必填。
    /// </summary>

    std::string getPresenterAccount() const;
    bool presenterAccountIsSet() const;
    void unsetpresenterAccount();
    void setPresenterAccount(const std::string& value);

    /// <summary>
    /// 专用数字资产绑定的发言人登录账号（匿名时），翻译对象匿名必填。
    /// </summary>

    std::string getPresenterRealNameAccount() const;
    bool presenterRealNameAccountIsSet() const;
    void unsetpresenterRealNameAccount();
    void setPresenterRealNameAccount(const std::string& value);

    /// <summary>
    /// 专用数字资产绑定的发言人名称。
    /// </summary>

    std::string getPresenterName() const;
    bool presenterNameIsSet() const;
    void unsetpresenterName();
    void setPresenterName(const std::string& value);

    /// <summary>
    /// 发言人用户的userUUID。
    /// </summary>

    std::string getPresenterUserID() const;
    bool presenterUserIDIsSet() const;
    void unsetpresenterUserID();
    void setPresenterUserID(const std::string& value);

    /// <summary>
    /// 本地会议的会议id（第三方对接参数），数字资产为LOCAL时必填。
    /// </summary>

    std::string getLocalConfId() const;
    bool localConfIdIsSet() const;
    void unsetlocalConfId();
    void setLocalConfId(const std::string& value);

    /// <summary>
    /// 本地会议对接地址或域名。
    /// </summary>

    std::string getLocalConfAddr() const;
    bool localConfAddrIsSet() const;
    void unsetlocalConfAddr();
    void setLocalConfAddr(const std::string& value);

    /// <summary>
    /// 本地会议对接鉴权信息。
    /// </summary>

    std::string getLocalAuthInfo() const;
    bool localAuthInfoIsSet() const;
    void unsetlocalAuthInfo();
    void setLocalAuthInfo(const std::string& value);

    /// <summary>
    /// true：需要代理 false：不需要代理。
    /// </summary>

    bool isLocalNeedProxy() const;
    bool localNeedProxyIsSet() const;
    void unsetlocalNeedProxy();
    void setLocalNeedProxy(bool value);

    /// <summary>
    /// 本地会议获取动态鉴权信息Url。
    /// </summary>

    std::string getLocalAuthUrl() const;
    bool localAuthUrlIsSet() const;
    void unsetlocalAuthUrl();
    void setLocalAuthUrl(const std::string& value);

    /// <summary>
    /// 本地会议鉴权AppId。
    /// </summary>

    std::string getLocalAuthAppId() const;
    bool localAuthAppIdIsSet() const;
    void unsetlocalAuthAppId();
    void setLocalAuthAppId(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string digitalAccount_;
    bool digitalAccountIsSet_;
    std::string digitalName_;
    bool digitalNameIsSet_;
    std::string presenterAccount_;
    bool presenterAccountIsSet_;
    std::string presenterRealNameAccount_;
    bool presenterRealNameAccountIsSet_;
    std::string presenterName_;
    bool presenterNameIsSet_;
    std::string presenterUserID_;
    bool presenterUserIDIsSet_;
    std::string localConfId_;
    bool localConfIdIsSet_;
    std::string localConfAddr_;
    bool localConfAddrIsSet_;
    std::string localAuthInfo_;
    bool localAuthInfoIsSet_;
    bool localNeedProxy_;
    bool localNeedProxyIsSet_;
    std::string localAuthUrl_;
    bool localAuthUrlIsSet_;
    std::string localAuthAppId_;
    bool localAuthAppIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_InterpreterAiDigitalInfo_H_
