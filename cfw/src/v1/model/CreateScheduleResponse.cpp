

#include "huaweicloud/cfw/v1/model/CreateScheduleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateScheduleResponse::CreateScheduleResponse()
{
    dataIsSet_ = false;
}

CreateScheduleResponse::~CreateScheduleResponse() = default;

void CreateScheduleResponse::validate()
{
}

web::json::value CreateScheduleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool CreateScheduleResponse::fromJson(const web::json::value& val)
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


ScheduleResp_data CreateScheduleResponse::getData() const
{
    return data_;
}

void CreateScheduleResponse::setData(const ScheduleResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CreateScheduleResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CreateScheduleResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


