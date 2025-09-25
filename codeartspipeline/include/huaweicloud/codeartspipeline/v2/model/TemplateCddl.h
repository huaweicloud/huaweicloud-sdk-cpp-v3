
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_TemplateCddl_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_TemplateCddl_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/TemplateState.h>
#include <huaweicloud/codeartspipeline/v2/model/Workflow.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建流水线接口入参
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  TemplateCddl
    : public ModelBase
{
public:
    TemplateCddl();
    virtual ~TemplateCddl();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateCddl members

    /// <summary>
    /// **参数解释**： 编排flow详情，描述流水线内各阶段任务的串并行关系。map类型数据，key为阶段名字，默认第一阶段initial，最后阶段为final，其余名字以&#39;state_数字&#39;标识。value为该阶段内任务 (以&#39;Task_数字&#39;标识)以及后续阶段的标识。本字段为描述流水线基础编排数据之一，建议可通过流水线真实界面基于模板创建接口中获取。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::map<std::string, std::map<std::string, std::string>>& getFlow();
    bool flowIsSet() const;
    void unsetflow();
    void setFlow(const std::map<std::string, std::map<std::string, std::string>>& value);

    /// <summary>
    /// **参数解释**： 编排State详情，map类型数据。本字段为描述流水线基础编排数据之一，建议可通过流水线真实界面基于模板创建接口中获取 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::map<std::string, TemplateState>& getStates();
    bool statesIsSet() const;
    void unsetstates();
    void setStates(const std::map<std::string, TemplateState>& value);

    /// <summary>
    /// 
    /// </summary>

    Workflow getWorkflow() const;
    bool workflowIsSet() const;
    void unsetworkflow();
    void setWorkflow(const Workflow& value);


protected:
    std::map<std::string, std::map<std::string, std::string>> flow_;
    bool flowIsSet_;
    std::map<std::string, TemplateState> states_;
    bool statesIsSet_;
    Workflow workflow_;
    bool workflowIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_TemplateCddl_H_
