
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateNetworkOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateNetworkOption_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建network对象
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreateNetworkOption
    : public ModelBase
{
public:
    NeutronCreateNetworkOption();
    virtual ~NeutronCreateNetworkOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronCreateNetworkOption members

    /// <summary>
    /// 功能说明：网络名称 取值范围：0-255个字符 约束：不能为admin_external_net
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：资源的管理状态 取值范围：true、false 约束：只支持true
    /// </summary>

    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);

    /// <summary>
    /// 功能说明：是否支持跨租户共享 取值范围：true、false
    /// </summary>

    bool isShared() const;
    bool sharedIsSet() const;
    void unsetshared();
    void setShared(bool value);

    /// <summary>
    /// 功能说明：扩展属性：网络类型。管理员属性，普通租户不可见，允许 geneve类型租户执行操作。 取值范围：vxlan, geneve
    /// </summary>

    std::string getProvidernetworkType() const;
    bool providernetworkTypeIsSet() const;
    void unsetprovidernetworkType();
    void setProvidernetworkType(const std::string& value);

    /// <summary>
    /// 功能说明：端口安全使能标记 取值范围：true(启用)、false(禁用) 约束：如果不使能，则network下所有虚机的安全组和dhcp防欺骗不生效
    /// </summary>

    bool isPortSecurityEnabled() const;
    bool portSecurityEnabledIsSet() const;
    void unsetportSecurityEnabled();
    void setPortSecurityEnabled(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool adminStateUp_;
    bool adminStateUpIsSet_;
    bool shared_;
    bool sharedIsSet_;
    std::string providernetworkType_;
    bool providernetworkTypeIsSet_;
    bool portSecurityEnabled_;
    bool portSecurityEnabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateNetworkOption_H_
