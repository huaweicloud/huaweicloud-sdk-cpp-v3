
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RunningRecord_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RunningRecord_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/RecoverRecord.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业运行及故障恢复记录。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RunningRecord
    : public ModelBase
{
public:
    RunningRecord();
    virtual ~RunningRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunningRecord members

    /// <summary>
    /// 本次运行开始时间的unix时间戳，单位为秒(s)。
    /// </summary>

    int64_t getStartAt() const;
    bool startAtIsSet() const;
    void unsetstartAt();
    void setStartAt(int64_t value);

    /// <summary>
    /// 本次运行结束时间的unix时间戳，单位为秒(s)。
    /// </summary>

    int64_t getEndAt() const;
    bool endAtIsSet() const;
    void unsetendAt();
    void setEndAt(int64_t value);

    /// <summary>
    /// **参数解释**：本次运行加速卡启动时间的unix时间戳，单位为秒(s)。 **取值范围**：不涉及。
    /// </summary>

    int64_t getXpuStartAt() const;
    bool xpuStartAtIsSet() const;
    void unsetxpuStartAt();
    void setXpuStartAt(int64_t value);

    /// <summary>
    /// 本地运行的启动方式： - init_or_rescheduled：代表本次启动为被调度后的首次运行，包括初次启动及调度恢复后的运行。 - restarted：代表本次启动非被调度后的首次运行，为进程重启后的运行。
    /// </summary>

    std::string getStartType() const;
    bool startTypeIsSet() const;
    void unsetstartType();
    void setStartType(const std::string& value);

    /// <summary>
    /// 本次运行结束原因。
    /// </summary>

    std::string getEndReason() const;
    bool endReasonIsSet() const;
    void unsetendReason();
    void setEndReason(const std::string& value);

    /// <summary>
    /// 引发本次运行结束的task worker ID(如worker-0)。
    /// </summary>

    std::string getEndRelatedTask() const;
    bool endRelatedTaskIsSet() const;
    void unsetendRelatedTask();
    void setEndRelatedTask(const std::string& value);

    /// <summary>
    /// 本次运行结束后所采取的故障容忍策略，枚举值如下： - npu_proc_restart: NPU原地热恢复 - gpu_proc_restart: GPU原地热恢复 - proc_restart: 进程原地重启 - pod_reschedule: Pod级重调度 - job_reschedule: Job级重调度 - job_reschedule_with_taint: 隔离式Job重调度
    /// </summary>

    std::string getEndRecover() const;
    bool endRecoverIsSet() const;
    void unsetendRecover();
    void setEndRecover(const std::string& value);

    /// <summary>
    /// 本次运行结束后在故障容忍策略降级前所采取的容忍策略，取值范围同end_recover。
    /// </summary>

    std::string getEndRecoverBeforeDowngrade() const;
    bool endRecoverBeforeDowngradeIsSet() const;
    void unsetendRecoverBeforeDowngrade();
    void setEndRecoverBeforeDowngrade(const std::string& value);

    /// <summary>
    /// **参数解释**：本次运行异常结束时采取的所有故障容忍策略详情。
    /// </summary>

    std::vector<RecoverRecord>& getRecoverRecords();
    bool recoverRecordsIsSet() const;
    void unsetrecoverRecords();
    void setRecoverRecords(const std::vector<RecoverRecord>& value);


protected:
    int64_t startAt_;
    bool startAtIsSet_;
    int64_t endAt_;
    bool endAtIsSet_;
    int64_t xpuStartAt_;
    bool xpuStartAtIsSet_;
    std::string startType_;
    bool startTypeIsSet_;
    std::string endReason_;
    bool endReasonIsSet_;
    std::string endRelatedTask_;
    bool endRelatedTaskIsSet_;
    std::string endRecover_;
    bool endRecoverIsSet_;
    std::string endRecoverBeforeDowngrade_;
    bool endRecoverBeforeDowngradeIsSet_;
    std::vector<RecoverRecord> recoverRecords_;
    bool recoverRecordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RunningRecord_H_
