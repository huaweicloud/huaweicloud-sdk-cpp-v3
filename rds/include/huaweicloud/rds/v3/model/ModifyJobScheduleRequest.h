
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyJobScheduleRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyJobScheduleRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ModifyJobScheduleRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifyJobScheduleRequest
    : public ModelBase
{
public:
    ModifyJobScheduleRequest();
    virtual ~ModifyJobScheduleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyJobScheduleRequest members

    /// <summary>
    /// 策略ID
    /// </summary>

    std::string getScheduleId() const;
    bool scheduleIdIsSet() const;
    void unsetscheduleId();
    void setScheduleId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ModifyJobScheduleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifyJobScheduleRequestBody& value);


protected:
    std::string scheduleId_;
    bool scheduleIdIsSet_;
    ModifyJobScheduleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifyJobScheduleRequest& dereference_from_shared_ptr(std::shared_ptr<ModifyJobScheduleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyJobScheduleRequest_H_
