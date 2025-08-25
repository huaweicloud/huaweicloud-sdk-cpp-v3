
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PointStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PointStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/UpgradeWorkflowTaskStatus.h>
#include <huaweicloud/cce/v3/model/TaskType.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PointStatus
    : public ModelBase
{
public:
    PointStatus();
    virtual ~PointStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PointStatus members

    /// <summary>
    /// 
    /// </summary>

    TaskType getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const TaskType& value);

    /// <summary>
    /// 升级任务项ID
    /// </summary>

    std::string getTaskID() const;
    bool taskIDIsSet() const;
    void unsettaskID();
    void setTaskID(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeWorkflowTaskStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const UpgradeWorkflowTaskStatus& value);

    /// <summary>
    /// 升级任务开始时间
    /// </summary>

    std::string getStartTimeStamp() const;
    bool startTimeStampIsSet() const;
    void unsetstartTimeStamp();
    void setStartTimeStamp(const std::string& value);

    /// <summary>
    /// 升级任务结束时间
    /// </summary>

    std::string getEndTimeStamp() const;
    bool endTimeStampIsSet() const;
    void unsetendTimeStamp();
    void setEndTimeStamp(const std::string& value);

    /// <summary>
    /// 升级任务过期时间（当前仅升级前检查任务适用）
    /// </summary>

    std::string getExpireTimeStamp() const;
    bool expireTimeStampIsSet() const;
    void unsetexpireTimeStamp();
    void setExpireTimeStamp(const std::string& value);


protected:
    TaskType taskType_;
    bool taskTypeIsSet_;
    std::string taskID_;
    bool taskIDIsSet_;
    UpgradeWorkflowTaskStatus status_;
    bool statusIsSet_;
    std::string startTimeStamp_;
    bool startTimeStampIsSet_;
    std::string endTimeStamp_;
    bool endTimeStampIsSet_;
    std::string expireTimeStamp_;
    bool expireTimeStampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PointStatus_H_
