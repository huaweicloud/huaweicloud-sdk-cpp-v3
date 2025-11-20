
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDbAgentJobHistoryStepsResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDbAgentJobHistoryStepsResult_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库代理作业执行历史步骤。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListDbAgentJobHistoryStepsResult
    : public ModelBase
{
public:
    ListDbAgentJobHistoryStepsResult();
    virtual ~ListDbAgentJobHistoryStepsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDbAgentJobHistoryStepsResult members

    /// <summary>
    /// 步骤id。
    /// </summary>

    std::string getStepId() const;
    bool stepIdIsSet() const;
    void unsetstepId();
    void setStepId(const std::string& value);

    /// <summary>
    /// 步骤名。
    /// </summary>

    std::string getStepName() const;
    bool stepNameIsSet() const;
    void unsetstepName();
    void setStepName(const std::string& value);

    /// <summary>
    /// 作业执行状态。取值如下:  failed:失败。 succeeded:成功。 retrying:重试中。 canceled:已取消。 in_progress:正在运行。
    /// </summary>

    std::string getRunStatus() const;
    bool runStatusIsSet() const;
    void unsetrunStatus();
    void setRunStatus(const std::string& value);

    /// <summary>
    /// 作业执行开始时间。格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getRunTime() const;
    bool runTimeIsSet() const;
    void unsetrunTime();
    void setRunTime(const std::string& value);

    /// <summary>
    /// 作业执行时长。格式为hh:mm:ss
    /// </summary>

    std::string getRunDuration() const;
    bool runDurationIsSet() const;
    void unsetrunDuration();
    void setRunDuration(const std::string& value);

    /// <summary>
    /// 执行信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string stepId_;
    bool stepIdIsSet_;
    std::string stepName_;
    bool stepNameIsSet_;
    std::string runStatus_;
    bool runStatusIsSet_;
    std::string runTime_;
    bool runTimeIsSet_;
    std::string runDuration_;
    bool runDurationIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDbAgentJobHistoryStepsResult_H_
