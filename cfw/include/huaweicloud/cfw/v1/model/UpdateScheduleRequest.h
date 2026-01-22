
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateScheduleRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateScheduleRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ScheduleInfoDTO.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateScheduleRequest
    : public ModelBase
{
public:
    UpdateScheduleRequest();
    virtual ~UpdateScheduleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateScheduleRequest members

    /// <summary>
    /// **参数解释**： 时间表ID，可以通过调用[查询时间表列表接口]获得，通过返回值中的data.records.schedule_id获得 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getScheduleId() const;
    bool scheduleIdIsSet() const;
    void unsetscheduleId();
    void setScheduleId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ScheduleInfoDTO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ScheduleInfoDTO& value);


protected:
    std::string scheduleId_;
    bool scheduleIdIsSet_;
    ScheduleInfoDTO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateScheduleRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateScheduleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateScheduleRequest_H_
