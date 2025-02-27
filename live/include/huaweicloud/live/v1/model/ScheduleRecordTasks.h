
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ScheduleRecordTasks_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ScheduleRecordTasks_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ScheduleRecordTasks
    : public ModelBase
{
public:
    ScheduleRecordTasks();
    virtual ~ScheduleRecordTasks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScheduleRecordTasks members

    /// <summary>
    /// 推流域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 应用名称
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 流名称
    /// </summary>

    std::string getStream() const;
    bool streamIsSet() const;
    void unsetstream();
    void setStream(const std::string& value);

    /// <summary>
    /// 录制任务开始时间，Unix时间戳。如果不填表示立即启动录制。EndTime - StartTime不能超过24小时。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 录制任务结束时间，Unix时间戳。设置时间必须大于StartTime及当前时间，且小于当前时间+7天。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 录制模板ID，对应模板必须存在否则会启动失败。
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 任务停止时间，当前还在生效的任务此值为0，任务未被停止但是超过了end_time后此值为自动停止时间。
    /// </summary>

    int64_t getStopTime() const;
    bool stopTimeIsSet() const;
    void unsetstopTime();
    void setStopTime(int64_t value);

    /// <summary>
    /// 录制任务ID
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);


protected:
    std::string domain_;
    bool domainIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string stream_;
    bool streamIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    int64_t stopTime_;
    bool stopTimeIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ScheduleRecordTasks_H_
