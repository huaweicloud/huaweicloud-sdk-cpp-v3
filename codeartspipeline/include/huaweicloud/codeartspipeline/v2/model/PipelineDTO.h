
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineDTO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineDTO_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/codeartspipeline/v2/model/CodeSource.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineSchedule.h>
#include <huaweicloud/codeartspipeline/v2/model/CustomVariable.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineTrigger.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineConcurrencyMgmt.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineDTO
    : public ModelBase
{
public:
    PipelineDTO();
    virtual ~PipelineDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineDTO members

    /// <summary>
    /// **参数解释**： 流水线名称。 **约束限制**： 不涉及。 **取值范围**： 仅包含中文、大小写英文字母、数字、&#39;-&#39;和&#39;_&#39;，且长度为[1,128]个字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线描述。 **约束限制**： 不涉及。 **取值范围**： 不超过1024字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否为变更流水线。 **约束限制**： 不涉及。 **取值范围**： - true：变更流水线。 - false：非变更流水线。 **默认取值**： 不涉及。 
    /// </summary>

    bool isIsPublish() const;
    bool isPublishIsSet() const;
    void unsetisPublish();
    void setIsPublish(bool value);

    /// <summary>
    /// **参数解释**： 流水线源信息。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<CodeSource>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<CodeSource>& value);

    /// <summary>
    /// **参数解释**： 流水线自定义全局变量列表。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<CustomVariable>& getVariables();
    bool variablesIsSet() const;
    void unsetvariables();
    void setVariables(const std::vector<CustomVariable>& value);

    /// <summary>
    /// **参数解释**： 流水线定时执行配置列表。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<PipelineSchedule>& getSchedules();
    bool schedulesIsSet() const;
    void unsetschedules();
    void setSchedules(const std::vector<PipelineSchedule>& value);

    /// <summary>
    /// **参数解释**： 流水线代码事件触发配置。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<PipelineTrigger>& getTriggers();
    bool triggersIsSet() const;
    void unsettriggers();
    void setTriggers(const std::vector<PipelineTrigger>& value);

    /// <summary>
    /// **参数解释**： 流水线结构定义版本。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 3.0。 
    /// </summary>

    std::string getManifestVersion() const;
    bool manifestVersionIsSet() const;
    void unsetmanifestVersion();
    void setManifestVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线结构定义JSON。该字段结构复杂，建议使用页面编辑流水线后，从[查询流水线详情](ShowPipelineDetail.xml)接口获取。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDefinition() const;
    bool definitionIsSet() const;
    void unsetdefinition();
    void setDefinition(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线组ID。 **约束限制**： 不涉及。 **取值范围**： 32位字符，仅由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**： 复制场景使用，为原流水线ID。 **约束限制**： 不涉及。 **取值范围**： 32位字符，仅由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PipelineConcurrencyMgmt getConcurrencyControl() const;
    bool concurrencyControlIsSet() const;
    void unsetconcurrencyControl();
    void setConcurrencyControl(const PipelineConcurrencyMgmt& value);

    /// <summary>
    /// **参数解释**： 流水线涉密等级。 **约束限制**： 非涉密场景不涉及，涉密场景必填。 **取值范围**： 正整数（1为最低密级）。 **默认取值**： 不涉及。 
    /// </summary>

    int32_t getSecurityLevel() const;
    bool securityLevelIsSet() const;
    void unsetsecurityLevel();
    void setSecurityLevel(int32_t value);

    /// <summary>
    /// **参数解释**： 是否禁用自动生成阶段，仅变更流水线适用。默认值为false，即默认启用自动生成阶段。 **约束限制**： 不涉及。 **取值范围**： - true：禁用自动生成阶段。 - false：启用自动生成阶段。 **默认取值**： false。 
    /// </summary>

    bool isDisableReleaseBranchManagement() const;
    bool disableReleaseBranchManagementIsSet() const;
    void unsetdisableReleaseBranchManagement();
    void setDisableReleaseBranchManagement(bool value);

    /// <summary>
    /// **参数解释**： 流水线执行计划列表。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<Object>& getExecutionPlans();
    bool executionPlansIsSet() const;
    void unsetexecutionPlans();
    void setExecutionPlans(const std::vector<Object>& value);

    /// <summary>
    /// **参数解释**： 项目ID。 **约束限制**： 不涉及。 **取值范围**： 32位字符，仅由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线取消运行策略。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    Object getCancelStrategy() const;
    bool cancelStrategyIsSet() const;
    void unsetcancelStrategy();
    void setCancelStrategy(const Object& value);

    /// <summary>
    /// **参数解释**： 流水线密级code。 **约束限制**： 非涉密场景不涉及，涉密场景必填。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getConfidentialityCode() const;
    bool confidentialityCodeIsSet() const;
    void unsetconfidentialityCode();
    void setConfidentialityCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 委托名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// **参数解释**： 关联的通用参数组ID列表。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getVariableGroupIds();
    bool variableGroupIdsIsSet() const;
    void unsetvariableGroupIds();
    void setVariableGroupIds(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool isPublish_;
    bool isPublishIsSet_;
    std::vector<CodeSource> sources_;
    bool sourcesIsSet_;
    std::vector<CustomVariable> variables_;
    bool variablesIsSet_;
    std::vector<PipelineSchedule> schedules_;
    bool schedulesIsSet_;
    std::vector<PipelineTrigger> triggers_;
    bool triggersIsSet_;
    std::string manifestVersion_;
    bool manifestVersionIsSet_;
    std::string definition_;
    bool definitionIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string id_;
    bool idIsSet_;
    PipelineConcurrencyMgmt concurrencyControl_;
    bool concurrencyControlIsSet_;
    int32_t securityLevel_;
    bool securityLevelIsSet_;
    bool disableReleaseBranchManagement_;
    bool disableReleaseBranchManagementIsSet_;
    std::vector<Object> executionPlans_;
    bool executionPlansIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    Object cancelStrategy_;
    bool cancelStrategyIsSet_;
    std::string confidentialityCode_;
    bool confidentialityCodeIsSet_;
    std::string agencyName_;
    bool agencyNameIsSet_;
    std::vector<std::string> variableGroupIds_;
    bool variableGroupIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineDTO_H_
