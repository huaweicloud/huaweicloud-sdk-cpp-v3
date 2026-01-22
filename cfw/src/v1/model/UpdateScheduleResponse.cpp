

#include "huaweicloud/cfw/v1/model/UpdateScheduleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateScheduleResponse::UpdateScheduleResponse()
{
    dataIsSet_ = false;
}

UpdateScheduleResponse::~UpdateScheduleResponse() = default;

void UpdateScheduleResponse::validate()
{
}

web::json::value UpdateScheduleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateScheduleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ScheduleResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ScheduleResp_data UpdateScheduleResponse::getData() const
{
    return data_;
}

void UpdateScheduleResponse::setData(const ScheduleResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateScheduleResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateScheduleResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


