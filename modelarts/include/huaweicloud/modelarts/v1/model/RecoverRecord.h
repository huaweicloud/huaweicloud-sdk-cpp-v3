
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RecoverRecord_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RecoverRecord_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RecoverRecord
    : public ModelBase
{
public:
    RecoverRecord();
    virtual ~RecoverRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecoverRecord members

    /// <summary>
    /// **参数描述**：本次故障容忍策略开始执行时间的unix时间戳，单位为秒(s)，同时也是故障发生时间。 **取值范围**：不涉及。
    /// </summary>

    int64_t getRecoverStartAt() const;
    bool recoverStartAtIsSet() const;
    void unsetrecoverStartAt();
    void setRecoverStartAt(int64_t value);

    /// <summary>
    /// **参数描述**：本次故障容忍策略结束时间的unix时间戳，单位为秒(s)。 **取值范围**：不涉及。
    /// </summary>

    int64_t getRecoverEndAt() const;
    bool recoverEndAtIsSet() const;
    void unsetrecoverEndAt();
    void setRecoverEndAt(int64_t value);

    /// <summary>
    /// **参数描述**：本次故障容忍策略。 **取值范围**：枚举值如下： - npu_step_retry: Step重计算 - npu_proc_restart: NPU原地热恢复 - proc_restart: 进程原地重启 - pod_reschedule: Pod级重调度 - job_reschedule: Job级重调度 - job_reschedule_with_taint: 隔离式Job重调度
    /// </summary>

    std::string getRecover() const;
    bool recoverIsSet() const;
    void unsetrecover();
    void setRecover(const std::string& value);

    /// <summary>
    /// **参数描述**：本次故障场景。 **取值范围**：枚举值如下： - chip_fault: 芯片故障 - node_fault: 节点故障 - job_failed: 作业失败退出 - job_hanged: 作业卡死 - job_subhealth: 作业亚健康 - error_in_log: 日志异常
    /// </summary>

    std::string getFaultScenario() const;
    bool faultScenarioIsSet() const;
    void unsetfaultScenario();
    void setFaultScenario(const std::string& value);

    /// <summary>
    /// **参数描述**：本次故障原因。 **取值范围**：不涉及。
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// **参数描述**：引发本次运行结束的task worker ID(如worker-0)。 **取值范围**：不涉及。
    /// </summary>

    std::string getRelatedTask() const;
    bool relatedTaskIsSet() const;
    void unsetrelatedTask();
    void setRelatedTask(const std::string& value);

    /// <summary>
    /// **参数描述**：本次故障执行结果。 **取值范围**：枚举值如下： - recovering: 执行中 - success: 成功 - failed: 失败 - downgrade: 策略降级 - terminated: 策略被终止 - quotaExceeded: 策略执行次数超限制
    /// </summary>

    std::string getRecoverResult() const;
    bool recoverResultIsSet() const;
    void unsetrecoverResult();
    void setRecoverResult(const std::string& value);


protected:
    int64_t recoverStartAt_;
    bool recoverStartAtIsSet_;
    int64_t recoverEndAt_;
    bool recoverEndAtIsSet_;
    std::string recover_;
    bool recoverIsSet_;
    std::string faultScenario_;
    bool faultScenarioIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::string relatedTask_;
    bool relatedTaskIsSet_;
    std::string recoverResult_;
    bool recoverResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RecoverRecord_H_
