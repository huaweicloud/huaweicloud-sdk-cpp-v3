
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_MbTasksReportReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_MbTasksReportReq_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/MbTaskParameter.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  MbTasksReportReq
    : public ModelBase
{
public:
    MbTasksReportReq();
    virtual ~MbTasksReportReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MbTasksReportReq members

    /// <summary>
    /// 任务ID。 如果返回值为200 OK，为接受任务后产生的任务ID。 
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务执行状态。 取值为RUNNING/FINISHED/FAILED。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务名称。 取值为RESET_TRACKS/MERGE_CHANNELS。 
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// 失败任务是否重试。 
    /// </summary>

    bool isRetry() const;
    bool retryIsSet() const;
    void unsetretry();
    void setRetry(bool value);

    /// <summary>
    /// 
    /// </summary>

    MbTaskParameter getParameter() const;
    bool parameterIsSet() const;
    void unsetparameter();
    void setParameter(const MbTaskParameter& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    bool retry_;
    bool retryIsSet_;
    MbTaskParameter parameter_;
    bool parameterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_MbTasksReportReq_H_
