
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterInformationSpec_hostNetwork_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterInformationSpec_hostNetwork_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点网络参数，包含了Node节点默认安群组设置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterInformationSpec_hostNetwork
    : public ModelBase
{
public:
    ClusterInformationSpec_hostNetwork();
    virtual ~ClusterInformationSpec_hostNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterInformationSpec_hostNetwork members

    /// <summary>
    /// 集群默认Node节点安全组需要放通部分端口来保证正常通信，[详细设置请参考[集群安全组规则配置](https://support.huaweicloud.com/cce_faq/cce_faq_00265.html)。](tag:hws)[详细设置请参考[集群安全组规则配置](https://support.huaweicloud.com/intl/zh-cn/cce_faq/cce_faq_00265.html)。](tag:hws_hk) 修改后的安全组只作用于新创建的节点和新纳管的节点，存量节点的安全组需手动修改。 
    /// </summary>

    std::string getSecurityGroup() const;
    bool securityGroupIsSet() const;
    void unsetsecurityGroup();
    void setSecurityGroup(const std::string& value);


protected:
    std::string securityGroup_;
    bool securityGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterInformationSpec_hostNetwork_H_
