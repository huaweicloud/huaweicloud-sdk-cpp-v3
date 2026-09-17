
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FlowsInfoVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FlowsInfoVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/projectman/v4/model/WorkItemFlowRuleConfigVO.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项流转线信息。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  FlowsInfoVO
    : public ModelBase
{
public:
    FlowsInfoVO();
    virtual ~FlowsInfoVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowsInfoVO members

    /// <summary>
    /// **参数解释**： 流转线code。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 流转线名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流转线描述信息。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 流转线扩展配置。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<std::map<std::string, Object>>& getExtraConfig();
    bool extraConfigIsSet() const;
    void unsetextraConfig();
    void setExtraConfig(const std::vector<std::map<std::string, Object>>& value);

    /// <summary>
    /// **参数解释**： 当前工作流节点code。 **取值范围**： 不涉及。
    /// </summary>

    std::string getFromCode() const;
    bool fromCodeIsSet() const;
    void unsetfromCode();
    void setFromCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 目标工作流节点code。 **取值范围**： 不涉及。
    /// </summary>

    std::string getToCode() const;
    bool toCodeIsSet() const;
    void unsettoCode();
    void setToCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 流转前规则配置。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<WorkItemFlowRuleConfigVO>& getBeforeRuleConfigs();
    bool beforeRuleConfigsIsSet() const;
    void unsetbeforeRuleConfigs();
    void setBeforeRuleConfigs(const std::vector<WorkItemFlowRuleConfigVO>& value);

    /// <summary>
    /// **参数解释**： 流转前校验规则。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<std::string>& getBeforeRuleValidator();
    bool beforeRuleValidatorIsSet() const;
    void unsetbeforeRuleValidator();
    void setBeforeRuleValidator(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 流转后规则配置。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<WorkItemFlowRuleConfigVO>& getAfterRuleConfigs();
    bool afterRuleConfigsIsSet() const;
    void unsetafterRuleConfigs();
    void setAfterRuleConfigs(const std::vector<WorkItemFlowRuleConfigVO>& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::map<std::string, Object>> extraConfig_;
    bool extraConfigIsSet_;
    std::string fromCode_;
    bool fromCodeIsSet_;
    std::string toCode_;
    bool toCodeIsSet_;
    std::vector<WorkItemFlowRuleConfigVO> beforeRuleConfigs_;
    bool beforeRuleConfigsIsSet_;
    std::vector<std::string> beforeRuleValidator_;
    bool beforeRuleValidatorIsSet_;
    std::vector<WorkItemFlowRuleConfigVO> afterRuleConfigs_;
    bool afterRuleConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FlowsInfoVO_H_
