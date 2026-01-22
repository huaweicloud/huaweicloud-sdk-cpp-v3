

#include "huaweicloud/cfw/v1/model/ListSchedulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListSchedulesResponse::ListSchedulesResponse()
{
    dataIsSet_ = false;
}

ListSchedulesResponse::~ListSchedulesResponse() = default;

void ListSchedulesResponse::validate()
{
}

web::json::value ListSchedulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListSchedulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            PageDataScheduleVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


PageDataScheduleVO ListSchedulesResponse::getData() const
{
    return data_;
}

void ListSchedulesResponse::setData(const PageDataScheduleVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListSchedulesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListSchedulesResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


