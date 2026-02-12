
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipelineRunDetailResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipelineRunDetailResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/RunPipelineSource.h>
#include <huaweicloud/codeartspipeline/v2/model/StageRun.h>
#include <string>
#include <vector>
#include <huaweicloud/codeartspipeline/v2/model/PackageInfo.h>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowPipelineRunDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPipelineRunDetailResponse();
    virtual ~ShowPipelineRunDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPipelineRunDetailResponse members

    /// <summary>
    /// **参数解释**： 流水线运行实例ID，[启动流水线](RunPipeline.xml)接口的返回值即为流水线运行实例ID。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线ID。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线版本。 **取值范围**： 默认3.0。 
    /// </summary>

    std::string getManifestVersion() const;
    bool manifestVersionIsSet() const;
    void unsetmanifestVersion();
    void setManifestVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线名称。 **取值范围**： 仅包含中文、大小写英文字母、数字、&#39;-&#39;和&#39;_&#39;，且长度为[1,128]个字符。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线运行描述。 **取值范围**： 最长1024字符。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否为变更流水线。 **取值范围**： - true：是变更流水线。 - false：不是变更流水线。 
    /// </summary>

    bool isIsPublish() const;
    bool isPublishIsSet() const;
    void unsetisPublish();
    void setIsPublish(bool value);

    /// <summary>
    /// **参数解释**： 运行人ID，用户的userId。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getExecutorId() const;
    bool executorIdIsSet() const;
    void unsetexecutorId();
    void setExecutorId(const std::string& value);

    /// <summary>
    /// **参数解释**： 运行人名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getExecutorName() const;
    bool executorNameIsSet() const;
    void unsetexecutorName();
    void setExecutorName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线运行实例状态。 **取值范围**： - COMPLETED：已完成。 - RUNNING：运行中。 - FAILED：失败。 - CANCELED：取消。 - PAUSED：暂停。 - SUSPEND：挂起。 - IGNORED：忽略。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线触发类型。 - Manual：手动触发。 - Scheduler：定时任务。 - MR：MR触发。 - Push：Push事件触发。 - CreateTag：Tag事件触发。 - Issue：Issue触发。 - Note：评论触发。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getTriggerType() const;
    bool triggerTypeIsSet() const;
    void unsettriggerType();
    void setTriggerType(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线运行序号。 **取值范围**： 大于等于 1。 
    /// </summary>

    int32_t getRunNumber() const;
    bool runNumberIsSet() const;
    void unsetrunNumber();
    void setRunNumber(int32_t value);

    /// <summary>
    /// **参数解释**： 流水线中断时间，单位毫秒。 **取值范围**： 大于等于 0。 
    /// </summary>

    int64_t getPauseTime() const;
    bool pauseTimeIsSet() const;
    void unsetpauseTime();
    void setPauseTime(int64_t value);

    /// <summary>
    /// **参数解释**： 流水线开始时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**： 流水线结束时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**： 阶段运行信息列表，包含各个阶段的详细运行信息。 **约束限制**： 不涉及。 
    /// </summary>

    std::vector<StageRun>& getStages();
    bool stagesIsSet() const;
    void unsetstages();
    void setStages(const std::vector<StageRun>& value);

    /// <summary>
    /// **参数解释**： 租户ID，用户账号的domainId。 **取值范围**： 32位字符，仅由数字和字母组成。 
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
    /// **参数解释**： 局点。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释**： 微服务ID。可以通过[查询微服务列表](ListMicroservice.xml)接口获取，其中data.id即为微服务ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getComponentId() const;
    bool componentIdIsSet() const;
    void unsetcomponentId();
    void setComponentId(const std::string& value);

    /// <summary>
    /// **参数解释**： 语言，暂时仅包含中英文。 **取值范围**： zh-cn, en-us。 
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线执行源信息。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<RunPipelineSource>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<RunPipelineSource>& value);

    /// <summary>
    /// **参数解释**： 流水线运行产物。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<PackageInfo>& getArtifacts();
    bool artifactsIsSet() const;
    void unsetartifacts();
    void setArtifacts(const std::vector<PackageInfo>& value);

    /// <summary>
    /// **参数解释**： 流水线运行实例ID，[启动流水线](RunPipeline.xml)接口的返回值即为流水线运行实例ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getSubjectId() const;
    bool subjectIdIsSet() const;
    void unsetsubjectId();
    void setSubjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 分组ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**： 分组名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// **参数解释**： 详情页地址。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDetailUrl() const;
    bool detailUrlIsSet() const;
    void unsetdetailUrl();
    void setDetailUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 当前系统时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getCurrentSystemTime() const;
    bool currentSystemTimeIsSet() const;
    void unsetcurrentSystemTime();
    void setCurrentSystemTime(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string manifestVersion_;
    bool manifestVersionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool isPublish_;
    bool isPublishIsSet_;
    std::string executorId_;
    bool executorIdIsSet_;
    std::string executorName_;
    bool executorNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string triggerType_;
    bool triggerTypeIsSet_;
    int32_t runNumber_;
    bool runNumberIsSet_;
    int64_t pauseTime_;
    bool pauseTimeIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::vector<StageRun> stages_;
    bool stagesIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string componentId_;
    bool componentIdIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::vector<RunPipelineSource> sources_;
    bool sourcesIsSet_;
    std::vector<PackageInfo> artifacts_;
    bool artifactsIsSet_;
    std::string subjectId_;
    bool subjectIdIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::string detailUrl_;
    bool detailUrlIsSet_;
    int64_t currentSystemTime_;
    bool currentSystemTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipelineRunDetailResponse_H_
