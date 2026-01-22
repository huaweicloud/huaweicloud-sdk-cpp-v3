

#include "huaweicloud/cfw/v1/model/AddEipAlarmWhitelistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddEipAlarmWhitelistResponse::AddEipAlarmWhitelistResponse()
{
    dataIsSet_ = false;
}

AddEipAlarmWhitelistResponse::~AddEipAlarmWhitelistResponse() = default;

void AddEipAlarmWhitelistResponse::validate()
{
}

web::json::value AddEipAlarmWhitelistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool AddEipAlarmWhitelistResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


Object AddEipAlarmWhitelistResponse::getData() const
{
    return data_;
}

void AddEipAlarmWhitelistResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddEipAlarmWhitelistResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddEipAlarmWhitelistResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


