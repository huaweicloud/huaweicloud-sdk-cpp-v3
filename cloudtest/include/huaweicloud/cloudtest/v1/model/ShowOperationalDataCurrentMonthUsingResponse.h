
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowOperationalDataCurrentMonthUsingResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowOperationalDataCurrentMonthUsingResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowOperationalDataCurrentMonthUsingResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowOperationalDataCurrentMonthUsingResponse();
    virtual ~ShowOperationalDataCurrentMonthUsingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOperationalDataCurrentMonthUsingResponse members

    /// <summary>
    /// 告警成功比率，恒为1
    /// </summary>

    int32_t getAlertSuccessRate() const;
    bool alertSuccessRateIsSet() const;
    void unsetalertSuccessRate();
    void setAlertSuccessRate(int32_t value);

    /// <summary>
    /// 正在运行的任务个数
    /// </summary>

    int32_t getRunningTasks() const;
    bool runningTasksIsSet() const;
    void unsetrunningTasks();
    void setRunningTasks(int32_t value);

    /// <summary>
    /// 总告警数
    /// </summary>

    int32_t getTotalAlerts() const;
    bool totalAlertsIsSet() const;
    void unsettotalAlerts();
    void setTotalAlerts(int32_t value);

    /// <summary>
    /// 总运行天数
    /// </summary>

    int32_t getTotalDays() const;
    bool totalDaysIsSet() const;
    void unsettotalDays();
    void setTotalDays(int32_t value);

    /// <summary>
    /// 总运行个数
    /// </summary>

    int64_t getTotalRuns() const;
    bool totalRunsIsSet() const;
    void unsettotalRuns();
    void setTotalRuns(int64_t value);

    /// <summary>
    /// 总任务个数
    /// </summary>

    int32_t getTotalTasks() const;
    bool totalTasksIsSet() const;
    void unsettotalTasks();
    void setTotalTasks(int32_t value);

    /// <summary>
    /// 工作项个数
    /// </summary>

    int32_t getWorkItemCount() const;
    bool workItemCountIsSet() const;
    void unsetworkItemCount();
    void setWorkItemCount(int32_t value);


protected:
    int32_t alertSuccessRate_;
    bool alertSuccessRateIsSet_;
    int32_t runningTasks_;
    bool runningTasksIsSet_;
    int32_t totalAlerts_;
    bool totalAlertsIsSet_;
    int32_t totalDays_;
    bool totalDaysIsSet_;
    int64_t totalRuns_;
    bool totalRunsIsSet_;
    int32_t totalTasks_;
    bool totalTasksIsSet_;
    int32_t workItemCount_;
    bool workItemCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowOperationalDataCurrentMonthUsingResponse_H_
