
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallReq_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallReq_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/CreateFirewallReq_tags.h>
#include <string>
#include <huaweicloud/cfw/v1/model/CreateFirewallReq_charge_info.h>
#include <vector>
#include <huaweicloud/cfw/v1/model/CreateFirewallReq_flavor.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 按需防火墙实体
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  CreateFirewallReq
    : public ModelBase
{
public:
    CreateFirewallReq();
    virtual ~CreateFirewallReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFirewallReq members

    /// <summary>
    /// **参数解释**： 防火墙名称 约束限制： 不涉及 **取值范围**： 不涉及 默认取值： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 企业项目ID，用户根据组织规划企业项目，对应的ID为企业项目ID，可通过[如何获取企业项目ID](cfw_02_0027.xml)获取 约束限制： 不涉及 **取值范围**： 不涉及 默认取值： 0
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 服务资源标签列表，防火墙资源添加标签后，可根据键、值组合查询资源，同时可根据键、值组合进行话单合并统计 **约束限制**： 不涉及
    /// </summary>

    std::vector<CreateFirewallReq_tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<CreateFirewallReq_tags>& value);

    /// <summary>
    /// 
    /// </summary>

    CreateFirewallReq_flavor getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const CreateFirewallReq_flavor& value);

    /// <summary>
    /// 
    /// </summary>

    CreateFirewallReq_charge_info getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const CreateFirewallReq_charge_info& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<CreateFirewallReq_tags> tags_;
    bool tagsIsSet_;
    CreateFirewallReq_flavor flavor_;
    bool flavorIsSet_;
    CreateFirewallReq_charge_info chargeInfo_;
    bool chargeInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallReq_H_
