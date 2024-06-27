
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateEWFirewallInspectVpcResp_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateEWFirewallInspectVpcResp_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  CreateEWFirewallInspectVpcResp
    : public ModelBase
{
public:
    CreateEWFirewallInspectVpcResp();
    virtual ~CreateEWFirewallInspectVpcResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEWFirewallInspectVpcResp members

    /// <summary>
    /// vpc id
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网列表
    /// </summary>

    std::vector<std::string>& getSubnetIds();
    bool subnetIdsIsSet() const;
    void unsetsubnetIds();
    void setSubnetIds(const std::vector<std::string>& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::vector<std::string> subnetIds_;
    bool subnetIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateEWFirewallInspectVpcResp_H_
