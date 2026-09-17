
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipelineDetailResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipelineDetailResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineSource.h>
#include <string>
#include <huaweicloud/codeartspipeline/v2/model/PipelineSchedule.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineTrigger.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineConcurrencyMgmt.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineVariable.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowPipelineDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPipelineDetailResponse();
    virtual ~ShowPipelineDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPipelineDetailResponse members

    /// <summary>
    /// **参数解释**： 流水线ID，可以通过[查询流水线列表](ListPipelines.xml)接口，其中pipelines.pipelineId即为流水线ID。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线名称。 **取值范围**： 仅包含中文、大小写英文字母、数字、&#39;-&#39;和&#39;_&#39;，且长度为[1,128]个字符。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 对流水线的补充描述。 **取值范围**： 不超过1024字符。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线版本，默认为3.0。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getManifestVersion() const;
    bool manifestVersionIsSet() const;
    void unsetmanifestVersion();
    void setManifestVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 当前环境所属局点。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释**： 所属租户ID。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目ID。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 所属微服务ID。可以通过[查询微服务列表](ListMicroservice.xml)接口获取，其中data.id即为微服务ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getComponentId() const;
    bool componentIdIsSet() const;
    void unsetcomponentId();
    void setComponentId(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否为变更流水线。 **取值范围**： - true：是变更流水线。 - false：不是变更流水线。 
    /// </summary>

    bool isIsPublish() const;
    bool isPublishIsSet() const;
    void unsetisPublish();
    void setIsPublish(bool value);

    /// <summary>
    /// **参数解释**： 流水线创建人ID。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线创建人名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线上次更新人ID。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getUpdaterId() const;
    bool updaterIdIsSet() const;
    void unsetupdaterId();
    void setUpdaterId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线创建时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// **参数解释**： 流水线更新时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// **参数解释**： 流水线是否被当前用户收藏。 **取值范围**： - true：流水线已被收藏。 - false：流水线未被收藏。 
    /// </summary>

    bool isIsCollect() const;
    bool isCollectIsSet() const;
    void unsetisCollect();
    void setIsCollect(bool value);

    /// <summary>
    /// **参数解释**： 流水线源列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<PipelineSource>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<PipelineSource>& value);

    /// <summary>
    /// **参数解释**： 流水线自定义参数。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<PipelineVariable>& getVariables();
    bool variablesIsSet() const;
    void unsetvariables();
    void setVariables(const std::vector<PipelineVariable>& value);

    /// <summary>
    /// **参数解释**： 流水线定时任务设置。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<PipelineSchedule>& getSchedules();
    bool schedulesIsSet() const;
    void unsetschedules();
    void setSchedules(const std::vector<PipelineSchedule>& value);

    /// <summary>
    /// **参数解释**： 流水线事件触发设置。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<PipelineTrigger>& getTriggers();
    bool triggersIsSet() const;
    void unsettriggers();
    void setTriggers(const std::vector<PipelineTrigger>& value);

    /// <summary>
    /// **参数解释**： 流水线所属分组ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线定义JSON。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDefinition() const;
    bool definitionIsSet() const;
    void unsetdefinition();
    void setDefinition(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线涉密等级。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getSecurityLevel() const;
    bool securityLevelIsSet() const;
    void unsetsecurityLevel();
    void setSecurityLevel(int32_t value);

    /// <summary>
    /// **参数解释**： 复制流水线场景下，原流水线ID。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getOriginId() const;
    bool originIdIsSet() const;
    void unsetoriginId();
    void setOriginId(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否禁用发布分支管理。 **取值范围**： - true：禁用发布分支管理。 - false：不禁用发布分支管理。 
    /// </summary>

    bool isDisableReleaseBranchManagement() const;
    bool disableReleaseBranchManagementIsSet() const;
    void unsetdisableReleaseBranchManagement();
    void setDisableReleaseBranchManagement(bool value);

    /// <summary>
    /// **参数解释**： 流水线是否已被删除。 **取值范围**： - true：已删除。 - false：未删除。 
    /// </summary>

    bool isDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(bool value);

    /// <summary>
    /// **参数解释**： 流水线是否被禁用。 **取值范围**： - true：已禁用。 - false：未禁用。 
    /// </summary>

    bool isBanned() const;
    bool bannedIsSet() const;
    void unsetbanned();
    void setBanned(bool value);

    /// <summary>
    /// **参数解释**： 是否来自CodeHub代码仓。 **取值范围**： - true：来自CodeHub代码仓。 - false：非来自CodeHub代码仓。 
    /// </summary>

    bool isFromGitCode() const;
    bool fromGitCodeIsSet() const;
    void unsetfromGitCode();
    void setFromGitCode(bool value);

    /// <summary>
    /// **参数解释**： 是否来自CodeHub代码仓库。 **取值范围**： - true：来自CodeHub代码仓库。 - false：非来自CodeHub代码仓库。 
    /// </summary>

    bool isFromGitCodeRepo() const;
    bool fromGitCodeRepoIsSet() const;
    void unsetfromGitCodeRepo();
    void setFromGitCodeRepo(bool value);

    /// <summary>
    /// **参数解释**： CodeHub代码仓库ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getGitCodeRepoId() const;
    bool gitCodeRepoIdIsSet() const;
    void unsetgitCodeRepoId();
    void setGitCodeRepoId(const std::string& value);

    /// <summary>
    /// **参数解释**： YAML格式流水线定义。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getYamlDefinition() const;
    bool yamlDefinitionIsSet() const;
    void unsetyamlDefinition();
    void setYamlDefinition(const std::string& value);

    /// <summary>
    /// **参数解释**： PAC代码仓关联信息。 **取值范围**： 不涉及。 
    /// </summary>

    Object getPacRepoRelation() const;
    bool pacRepoRelationIsSet() const;
    void unsetpacRepoRelation();
    void setPacRepoRelation(const Object& value);

    /// <summary>
    /// **参数解释**： YAML流水线文件内容。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getYamlContent() const;
    bool yamlContentIsSet() const;
    void unsetyamlContent();
    void setYamlContent(const std::string& value);

    /// <summary>
    /// **参数解释**： 委托名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// **参数解释**： 执行计划列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<Object>& getExecutionPlans();
    bool executionPlansIsSet() const;
    void unsetexecutionPlans();
    void setExecutionPlans(const std::vector<Object>& value);

    /// <summary>
    /// **参数解释**： 流水线来源。 **取值范围**： - 0：默认。 - 1：普通模板创建。 - 2：老数据转换。 - 3：CloudInit凤凰商城触发模板创建。 - 4：CloudInit其他触发模板创建。 - 5：创建模板。 
    /// </summary>

    int32_t getFromSource() const;
    bool fromSourceIsSet() const;
    void unsetfromSource();
    void setFromSource(int32_t value);

    /// <summary>
    /// **参数解释**： 项目名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线所属分组名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PipelineConcurrencyMgmt getConcurrencyControl() const;
    bool concurrencyControlIsSet() const;
    void unsetconcurrencyControl();
    void setConcurrencyControl(const PipelineConcurrencyMgmt& value);

    /// <summary>
    /// **参数解释**： 流水线取消运行策略。 **取值范围**： 不涉及。 
    /// </summary>

    Object getCancelStrategy() const;
    bool cancelStrategyIsSet() const;
    void unsetcancelStrategy();
    void setCancelStrategy(const Object& value);

    /// <summary>
    /// **参数解释**： 流水线标签ID列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getTagIds();
    bool tagIdsIsSet() const;
    void unsettagIds();
    void setTagIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 流水线变量组列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getVariableGroups();
    bool variableGroupsIsSet() const;
    void unsetvariableGroups();
    void setVariableGroups(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 流水线密级代码。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getSecurityLevelCode() const;
    bool securityLevelCodeIsSet() const;
    void unsetsecurityLevelCode();
    void setSecurityLevelCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线权限信息。 **取值范围**： 不涉及。 
    /// </summary>

    Object getPermissions() const;
    bool permissionsIsSet() const;
    void unsetpermissions();
    void setPermissions(const Object& value);

    /// <summary>
    /// **参数解释**： 主体ID，即流水线ID。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getSubjectId() const;
    bool subjectIdIsSet() const;
    void unsetsubjectId();
    void setSubjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线详情页URL。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDetailUrl() const;
    bool detailUrlIsSet() const;
    void unsetdetailUrl();
    void setDetailUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线编辑页URL。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getModifyUrl() const;
    bool modifyUrlIsSet() const;
    void unsetmodifyUrl();
    void setModifyUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线标签列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<Object>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Object>& value);

    /// <summary>
    /// **参数解释**： 是否为CR（变更）模型流水线。 **取值范围**： - true：是CR模型流水线。 - false：非CR模型流水线。 
    /// </summary>

    bool isIsCrModel() const;
    bool isCrModelIsSet() const;
    void unsetisCrModel();
    void setIsCrModel(bool value);

    /// <summary>
    /// **参数解释**： PAC归档源信息。 **取值范围**： 不涉及。 
    /// </summary>

    Object getArchiveSource() const;
    bool archiveSourceIsSet() const;
    void unsetarchiveSource();
    void setArchiveSource(const Object& value);

    /// <summary>
    /// **参数解释**： V2 YAML流水线的代码仓相关信息。 **取值范围**： 不涉及。 
    /// </summary>

    Object getYamlRepoProperties() const;
    bool yamlRepoPropertiesIsSet() const;
    void unsetyamlRepoProperties();
    void setYamlRepoProperties(const Object& value);

    /// <summary>
    /// **参数解释**： 关联的通用参数组ID列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getVariableGroupIds();
    bool variableGroupIdsIsSet() const;
    void unsetvariableGroupIds();
    void setVariableGroupIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： PAC代码源别名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPacSourceAlias() const;
    bool pacSourceAliasIsSet() const;
    void unsetpacSourceAlias();
    void setPacSourceAlias(const std::string& value);

    /// <summary>
    /// **参数解释**： PAC代码源CodeHub仓库的HTTPS端点ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPacSourceRepoHttpsEndpoint() const;
    bool pacSourceRepoHttpsEndpointIsSet() const;
    void unsetpacSourceRepoHttpsEndpoint();
    void setPacSourceRepoHttpsEndpoint(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string manifestVersion_;
    bool manifestVersionIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string componentId_;
    bool componentIdIsSet_;
    bool isPublish_;
    bool isPublishIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string updaterId_;
    bool updaterIdIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    bool isCollect_;
    bool isCollectIsSet_;
    std::vector<PipelineSource> sources_;
    bool sourcesIsSet_;
    std::vector<PipelineVariable> variables_;
    bool variablesIsSet_;
    std::vector<PipelineSchedule> schedules_;
    bool schedulesIsSet_;
    std::vector<PipelineTrigger> triggers_;
    bool triggersIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string definition_;
    bool definitionIsSet_;
    int32_t securityLevel_;
    bool securityLevelIsSet_;
    std::string originId_;
    bool originIdIsSet_;
    bool disableReleaseBranchManagement_;
    bool disableReleaseBranchManagementIsSet_;
    bool deleted_;
    bool deletedIsSet_;
    bool banned_;
    bool bannedIsSet_;
    bool fromGitCode_;
    bool fromGitCodeIsSet_;
    bool fromGitCodeRepo_;
    bool fromGitCodeRepoIsSet_;
    std::string gitCodeRepoId_;
    bool gitCodeRepoIdIsSet_;
    std::string yamlDefinition_;
    bool yamlDefinitionIsSet_;
    Object pacRepoRelation_;
    bool pacRepoRelationIsSet_;
    std::string yamlContent_;
    bool yamlContentIsSet_;
    std::string agencyName_;
    bool agencyNameIsSet_;
    std::vector<Object> executionPlans_;
    bool executionPlansIsSet_;
    int32_t fromSource_;
    bool fromSourceIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    PipelineConcurrencyMgmt concurrencyControl_;
    bool concurrencyControlIsSet_;
    Object cancelStrategy_;
    bool cancelStrategyIsSet_;
    std::vector<std::string> tagIds_;
    bool tagIdsIsSet_;
    std::vector<std::string> variableGroups_;
    bool variableGroupsIsSet_;
    std::string securityLevelCode_;
    bool securityLevelCodeIsSet_;
    Object permissions_;
    bool permissionsIsSet_;
    std::string subjectId_;
    bool subjectIdIsSet_;
    std::string detailUrl_;
    bool detailUrlIsSet_;
    std::string modifyUrl_;
    bool modifyUrlIsSet_;
    std::vector<Object> tags_;
    bool tagsIsSet_;
    bool isCrModel_;
    bool isCrModelIsSet_;
    Object archiveSource_;
    bool archiveSourceIsSet_;
    Object yamlRepoProperties_;
    bool yamlRepoPropertiesIsSet_;
    std::vector<std::string> variableGroupIds_;
    bool variableGroupIdsIsSet_;
    std::string pacSourceAlias_;
    bool pacSourceAliasIsSet_;
    std::string pacSourceRepoHttpsEndpoint_;
    bool pacSourceRepoHttpsEndpointIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipelineDetailResponse_H_
