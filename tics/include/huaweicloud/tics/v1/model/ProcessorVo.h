
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ProcessorVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ProcessorVo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  ProcessorVo
    : public ModelBase
{
public:
    ProcessorVo();
    virtual ~ProcessorVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProcessorVo members

    /// <summary>
    /// 结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 执行时长
    /// </summary>

    int64_t getExecDurationNano() const;
    bool execDurationNanoIsSet() const;
    void unsetexecDurationNano();
    void setExecDurationNano(int64_t value);

    /// <summary>
    /// 执行过程id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 上游子任务id
    /// </summary>

    std::vector<std::string>& getLastStepTaskInsId();
    bool lastStepTaskInsIdIsSet() const;
    void unsetlastStepTaskInsId();
    void setLastStepTaskInsId(const std::vector<std::string>& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 输入个数
    /// </summary>

    int64_t getTaskInRecordCnt() const;
    bool taskInRecordCntIsSet() const;
    void unsettaskInRecordCnt();
    void setTaskInRecordCnt(int64_t value);

    /// <summary>
    /// 执行过程名称
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// 输出个数
    /// </summary>

    int64_t getTaskOutRecordCnt() const;
    bool taskOutRecordCntIsSet() const;
    void unsettaskOutRecordCnt();
    void setTaskOutRecordCnt(int64_t value);

    /// <summary>
    /// processor对外展示信息，k,v
    /// </summary>

    Object getTaskShowInfo() const;
    bool taskShowInfoIsSet() const;
    void unsettaskShowInfo();
    void setTaskShowInfo(const Object& value);

    /// <summary>
    /// 执行状态，作业任务状态，NEW.新建,SUBMITING.提交中,ACCEPTED.已接收,DEPLOYING.部署中,RUNNING.运行中,SUCCEEDED.成功,FAILED.失败,TERMINATED.中止,TERMINATING.中止中,PENDING.等待中
    /// </summary>

    std::string getTaskStatus() const;
    bool taskStatusIsSet() const;
    void unsettaskStatus();
    void setTaskStatus(const std::string& value);


protected:
    int64_t endTime_;
    bool endTimeIsSet_;
    int64_t execDurationNano_;
    bool execDurationNanoIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<std::string> lastStepTaskInsId_;
    bool lastStepTaskInsIdIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t taskInRecordCnt_;
    bool taskInRecordCntIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    int64_t taskOutRecordCnt_;
    bool taskOutRecordCntIsSet_;
    Object taskShowInfo_;
    bool taskShowInfoIsSet_;
    std::string taskStatus_;
    bool taskStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ProcessorVo_H_
