
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_AlertConfigResp_warn_config_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_AlertConfigResp_warn_config_H_


#include <huaweicloud/antiddos/v2/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 告警配置信息
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V2_EXPORT  AlertConfigResp_warn_config
    : public ModelBase
{
public:
    AlertConfigResp_warn_config();
    virtual ~AlertConfigResp_warn_config();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlertConfigResp_warn_config members

    /// <summary>
    /// DDoS攻击
    /// </summary>

    bool isAntiDDoS() const;
    bool antiDDoSIsSet() const;
    void unsetantiDDoS();
    void setAntiDDoS(bool value);

    /// <summary>
    /// 网页后门
    /// </summary>

    bool isBackDoors() const;
    bool backDoorsIsSet() const;
    void unsetbackDoors();
    void setBackDoors(bool value);

    /// <summary>
    /// 暴力破解（系统登录，FTP，DB）
    /// </summary>

    bool isBruceForce() const;
    bool bruceForceIsSet() const;
    void unsetbruceForce();
    void setBruceForce(bool value);

    /// <summary>
    /// 数据库进程权限过高
    /// </summary>

    bool isHighPrivilege() const;
    bool highPrivilegeIsSet() const;
    void unsethighPrivilege();
    void setHighPrivilege(bool value);

    /// <summary>
    /// 异地登录提醒
    /// </summary>

    bool isRemoteLogin() const;
    bool remoteLoginIsSet() const;
    void unsetremoteLogin();
    void setRemoteLogin(bool value);

    /// <summary>
    /// 取值范围： - 0：表示每天一次 - 1：表示半小时一次  对于HID必选。
    /// </summary>

    int32_t getSendFrequency() const;
    bool sendFrequencyIsSet() const;
    void unsetsendFrequency();
    void setSendFrequency(int32_t value);

    /// <summary>
    /// 保留字段
    /// </summary>

    bool isWaf() const;
    bool wafIsSet() const;
    void unsetwaf();
    void setWaf(bool value);

    /// <summary>
    /// 弱口令（系统，数据库）
    /// </summary>

    bool isWeakPassword() const;
    bool weakPasswordIsSet() const;
    void unsetweakPassword();
    void setWeakPassword(bool value);


protected:
    bool antiDDoS_;
    bool antiDDoSIsSet_;
    bool backDoors_;
    bool backDoorsIsSet_;
    bool bruceForce_;
    bool bruceForceIsSet_;
    bool highPrivilege_;
    bool highPrivilegeIsSet_;
    bool remoteLogin_;
    bool remoteLoginIsSet_;
    int32_t sendFrequency_;
    bool sendFrequencyIsSet_;
    bool waf_;
    bool wafIsSet_;
    bool weakPassword_;
    bool weakPasswordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_AlertConfigResp_warn_config_H_
