
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_JobBasicInfoV3_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_JobBasicInfoV3_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartscheck/v2/model/ConfigTemplateRuleSetInfo.h>
#include <huaweicloud/codeartscheck/v2/model/JobResultInfo.h>
#include <vector>
#include <huaweicloud/codeartscheck/v2/model/ProcessInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 执行记录信息。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  JobBasicInfoV3
    : public ModelBase
{
public:
    JobBasicInfoV3();
    virtual ~JobBasicInfoV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobBasicInfoV3 members

    /// <summary>
    /// **参数解释：** 执行人用户名。 **取值范围：** 长度为[1~255]个字符。
    /// </summary>

    std::string getExecutor() const;
    bool executorIsSet() const;
    void unsetexecutor();
    void setExecutor(const std::string& value);

    /// <summary>
    /// **参数解释：** 执行记录的检查完成时间，使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ，例如\&quot;2025-11-28T06:55:41Z\&quot;。 **取值范围：** 不涉及。
    /// </summary>

    std::string getFinishTime() const;
    bool finishTimeIsSet() const;
    void unsetfinishTime();
    void setFinishTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 执行ID，来自代码检查执行任务接口的返回值，每次执行代码检查任务都有唯一的执行ID。 **取值范围：** 长度为[1~32]个字符。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    JobResultInfo getJobResult() const;
    bool jobResultIsSet() const;
    void unsetjobResult();
    void setJobResult(const JobResultInfo& value);

    /// <summary>
    /// **参数解释:** 任务类型。 **取值范围:** - FULL：版本级任务。 - INC_GIT：门禁级任务。 [- INC_COMMIT：流水线指定commitId增量检查、代码检查任务设置-检查范围-版本级检查模式的最近一次提交检查。](tag:hws,hws_hk) [- INC_COMMIT：代码检查任务设置-检查范围-版本级检查模式的最近一次提交检查。](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs) [- INC_LAST_SUCCESS_COMMIT：流水线指定commitId以及最后一次门禁成功的commitId间的增量检查。](tag:hws,hws_hk)
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProcessInfo getProcess() const;
    bool processIsSet() const;
    void unsetprocess();
    void setProcess(const ProcessInfo& value);

    /// <summary>
    /// **参数解释：** 门禁结果。 **取值范围：** - success：门禁通过。 - error：门禁未通过。
    /// </summary>

    std::string getReviewResult() const;
    bool reviewResultIsSet() const;
    void unsetreviewResult();
    void setReviewResult(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集配置列表。
    /// </summary>

    std::vector<ConfigTemplateRuleSetInfo>& getRuleSets();
    bool ruleSetsIsSet() const;
    void unsetruleSets();
    void setRuleSets(const std::vector<ConfigTemplateRuleSetInfo>& value);

    /// <summary>
    /// **参数解释：** 执行来源。 **取值范围：** - customer：来自页面点击。 - Scheduled：来自定时任务。 - CodeCheckEdge：来自Edge服务。 - CodeArtsPipeline：来自流水线。 - DevCloudWebhook：来自CodeArtsRepo的Webhook。 - GitCodeActionPipeline：来自流水线的GitCodeAction插件。
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// **参数解释：** 源分支的代码仓地址。 **取值范围：** 长度为[1~1024]个字符。
    /// </summary>

    std::string getSourceRepoUrl() const;
    bool sourceRepoUrlIsSet() const;
    void unsetsourceRepoUrl();
    void setSourceRepoUrl(const std::string& value);

    /// <summary>
    /// **参数解释：**  执行记录的检查开始时间，使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ，例如\&quot;2025-11-28T06:55:41Z\&quot;。 **取值范围：** 不涉及。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释:** 任务执行状态。 **取值范围:** - quering：初始状态。 - running：执行中。 - success：检查成功。 - failed：检查失败。 - aborted：任务中止。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 子任务ID，该字段一般返回空数组[]。
    /// </summary>

    std::vector<std::string>& getSubJobIds();
    bool subJobIdsIsSet() const;
    void unsetsubJobIds();
    void setSubJobIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 子任务状态，该字段一般返回空数组[]。
    /// </summary>

    std::vector<std::string>& getSubJobStatuses();
    bool subJobStatusesIsSet() const;
    void unsetsubJobStatuses();
    void setSubJobStatuses(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 目标分支的代码仓地址。 **取值范围：** 长度为[1~1024]个字符。
    /// </summary>

    std::string getTargetRepoUrl() const;
    bool targetRepoUrlIsSet() const;
    void unsettargetRepoUrl();
    void setTargetRepoUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务ID，即新建检查任务接口的返回值，每个代码检查任务及其下的分支任务、通过API创建的增量任务都有唯一的任务ID。即[[查询任务列表](https://support.huaweicloud.com/api-codecheck/ShowTasksList.html)](tag:hws)[[查询任务列表](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/ShowTasksList.html)](tag:hws_hk)[查询任务列表](tag:hcs,hcs_sm)接口响应中的id字段。 **取值范围：** 长度为[1~32]个字符。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务总执行时长，格式为%dm%ds，例如\&quot;6m6s\&quot;。 **取值范围：** 不涉及。
    /// </summary>

    std::string getTotalExecuteTime() const;
    bool totalExecuteTimeIsSet() const;
    void unsettotalExecuteTime();
    void setTotalExecuteTime(const std::string& value);


protected:
    std::string executor_;
    bool executorIsSet_;
    std::string finishTime_;
    bool finishTimeIsSet_;
    std::string id_;
    bool idIsSet_;
    JobResultInfo jobResult_;
    bool jobResultIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    ProcessInfo process_;
    bool processIsSet_;
    std::string reviewResult_;
    bool reviewResultIsSet_;
    std::vector<ConfigTemplateRuleSetInfo> ruleSets_;
    bool ruleSetsIsSet_;
    std::string source_;
    bool sourceIsSet_;
    std::string sourceRepoUrl_;
    bool sourceRepoUrlIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> subJobIds_;
    bool subJobIdsIsSet_;
    std::vector<std::string> subJobStatuses_;
    bool subJobStatusesIsSet_;
    std::string targetRepoUrl_;
    bool targetRepoUrlIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string totalExecuteTime_;
    bool totalExecuteTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_JobBasicInfoV3_H_
