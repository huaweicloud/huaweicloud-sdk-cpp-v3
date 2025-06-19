
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BriefRecordItems_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BriefRecordItems_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  BriefRecordItems
    : public ModelBase
{
public:
    BriefRecordItems();
    virtual ~BriefRecordItems();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BriefRecordItems members

    /// <summary>
    /// 构建任务的ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 构建时长
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 构建下发时间
    /// </summary>

    std::string getScheduleTime() const;
    bool scheduleTimeIsSet() const;
    void unsetscheduleTime();
    void setScheduleTime(const std::string& value);

    /// <summary>
    /// 构建排队耗时
    /// </summary>

    std::string getQueuedTime() const;
    bool queuedTimeIsSet() const;
    void unsetqueuedTime();
    void setQueuedTime(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getFinishTime() const;
    bool finishTimeIsSet() const;
    void unsetfinishTime();
    void setFinishTime(const std::string& value);

    /// <summary>
    /// 子任务构建耗时
    /// </summary>

    int32_t getBuildDuration() const;
    bool buildDurationIsSet() const;
    void unsetbuildDuration();
    void setBuildDuration(int32_t value);

    /// <summary>
    /// 等待时间
    /// </summary>

    int32_t getPendingDuration() const;
    bool pendingDurationIsSet() const;
    void unsetpendingDuration();
    void setPendingDuration(int32_t value);

    /// <summary>
    /// 所属的项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 构建任务的构建编号，从1开始，每次构建递增1
    /// </summary>

    int32_t getBuildNo() const;
    bool buildNoIsSet() const;
    void unsetbuildNo();
    void setBuildNo(int32_t value);

    /// <summary>
    /// 代码分支
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// commitId
    /// </summary>

    std::string getRevision() const;
    bool revisionIsSet() const;
    void unsetrevision();
    void setRevision(const std::string& value);

    /// <summary>
    /// 触发者名称
    /// </summary>

    std::string getTriggerName() const;
    bool triggerNameIsSet() const;
    void unsettriggerName();
    void setTriggerName(const std::string& value);

    /// <summary>
    /// 构建编号，每日从1开始
    /// </summary>

    std::string getDailyBuildNumber() const;
    bool dailyBuildNumberIsSet() const;
    void unsetdailyBuildNumber();
    void setDailyBuildNumber(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string scheduleTime_;
    bool scheduleTimeIsSet_;
    std::string queuedTime_;
    bool queuedTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string finishTime_;
    bool finishTimeIsSet_;
    int32_t buildDuration_;
    bool buildDurationIsSet_;
    int32_t pendingDuration_;
    bool pendingDurationIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t buildNo_;
    bool buildNoIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string revision_;
    bool revisionIsSet_;
    std::string triggerName_;
    bool triggerNameIsSet_;
    std::string dailyBuildNumber_;
    bool dailyBuildNumberIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BriefRecordItems_H_
