
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskCmetricsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskCmetricsResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartscheck/v2/model/MetricInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ShowTaskCmetricsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTaskCmetricsResponse();
    virtual ~ShowTaskCmetricsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaskCmetricsResponse members

    /// <summary>
    /// **参数解释：** 旧版任务ID。即新建检查任务接口的返回值，每个代码检查任务及其下的分支任务、通过API创建的增量任务都有唯一的任务ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务创建者用户ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓地址。 **取值范围：** 不涉及。
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓分支。 **取值范围：** 不涉及。
    /// </summary>

    std::string getGitBranch() const;
    bool gitBranchIsSet() const;
    void unsetgitBranch();
    void setGitBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 上一次检查时间。使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ。例如：2020-09-25T12:05:00Z。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastCheckTime() const;
    bool lastCheckTimeIsSet() const;
    void unsetlastCheckTime();
    void setLastCheckTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 上一次执行时间。使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ。例如：2020-09-25T12:05:00Z。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastExecTime() const;
    bool lastExecTimeIsSet() const;
    void unsetlastExecTime();
    void setLastExecTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 上次执行结束时间。使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ。例如：2020-09-25T12:05:00Z。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastCheckFinishTime() const;
    bool lastCheckFinishTimeIsSet() const;
    void unsetlastCheckFinishTime();
    void setLastCheckFinishTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 废弃字段。 **约束限制：** 不涉及。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCheckType() const;
    bool checkTypeIsSet() const;
    void unsetcheckType();
    void setCheckType(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务创建时间。使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ。例如：2020-09-25T12:05:00Z。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MetricInfo getMetricInfo() const;
    bool metricInfoIsSet() const;
    void unsetmetricInfo();
    void setMetricInfo(const MetricInfo& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string gitUrl_;
    bool gitUrlIsSet_;
    std::string gitBranch_;
    bool gitBranchIsSet_;
    std::string lastCheckTime_;
    bool lastCheckTimeIsSet_;
    std::string lastExecTime_;
    bool lastExecTimeIsSet_;
    std::string lastCheckFinishTime_;
    bool lastCheckFinishTimeIsSet_;
    std::string checkType_;
    bool checkTypeIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    MetricInfo metricInfo_;
    bool metricInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskCmetricsResponse_H_
