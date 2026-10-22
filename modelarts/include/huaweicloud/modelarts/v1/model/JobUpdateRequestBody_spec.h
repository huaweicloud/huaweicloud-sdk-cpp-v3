
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobUpdateRequestBody_spec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobUpdateRequestBody_spec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/JobUpdateRequestBody_spec_schedule_policy.h>
#include <huaweicloud/modelarts/v1/model/Notification.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：训练作业规格参数。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobUpdateRequestBody_spec
    : public ModelBase
{
public:
    JobUpdateRequestBody_spec();
    virtual ~JobUpdateRequestBody_spec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobUpdateRequestBody_spec members

    /// <summary>
    /// 
    /// </summary>

    Notification getNotification() const;
    bool notificationIsSet() const;
    void unsetnotification();
    void setNotification(const Notification& value);

    /// <summary>
    /// 
    /// </summary>

    JobUpdateRequestBody_spec_schedule_policy getSchedulePolicy() const;
    bool schedulePolicyIsSet() const;
    void unsetschedulePolicy();
    void setSchedulePolicy(const JobUpdateRequestBody_spec_schedule_policy& value);


protected:
    Notification notification_;
    bool notificationIsSet_;
    JobUpdateRequestBody_spec_schedule_policy schedulePolicy_;
    bool schedulePolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobUpdateRequestBody_spec_H_
