

#include "huaweicloud/cfw/v1/model/DeleteScheduleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteScheduleResponse::DeleteScheduleResponse()
{
    dataIsSet_ = false;
}

DeleteScheduleResponse::~DeleteScheduleResponse() = default;

void DeleteScheduleResponse::validate()
{
}

web::json::value DeleteScheduleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool DeleteScheduleResponse::fromJson(const web::json::value& val)
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


ScheduleResp_data DeleteScheduleResponse::getData() const
{
    return data_;
}

void DeleteScheduleResponse::setData(const ScheduleResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteScheduleResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteScheduleResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


