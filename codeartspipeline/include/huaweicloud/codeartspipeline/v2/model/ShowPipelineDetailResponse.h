
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipelineDetailResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipelineDetailResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/PipelineSource.h>
#include <string>
#include <huaweicloud/codeartspipeline/v2/model/PipelineSchedule.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineTrigger.h>
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
