
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AdvancedIpsRuleListVo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AdvancedIpsRuleListVo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/AdvancedIpsRuleVo.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  AdvancedIpsRuleListVo
    : public ModelBase
{
public:
    AdvancedIpsRuleListVo();
    virtual ~AdvancedIpsRuleListVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AdvancedIpsRuleListVo members

    /// <summary>
    /// 频率ips规则列表
    /// </summary>

    std::vector<AdvancedIpsRuleVo>& getAdvancedIpsRules();
    bool advancedIpsRulesIsSet() const;
    void unsetadvancedIpsRules();
    void setAdvancedIpsRules(const std::vector<AdvancedIpsRuleVo>& value);

    /// <summary>
    /// 频率ips规则总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<AdvancedIpsRuleVo> advancedIpsRules_;
    bool advancedIpsRulesIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AdvancedIpsRuleListVo_H_
