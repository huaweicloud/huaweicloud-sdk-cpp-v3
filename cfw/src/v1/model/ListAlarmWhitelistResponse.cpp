

#include "huaweicloud/cfw/v1/model/ListAlarmWhitelistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAlarmWhitelistResponse::ListAlarmWhitelistResponse()
{
    dataIsSet_ = false;
}

ListAlarmWhitelistResponse::~ListAlarmWhitelistResponse() = default;

void ListAlarmWhitelistResponse::validate()
{
}

web::json::value ListAlarmWhitelistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListAlarmWhitelistResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            HttpListAlarmWhiteListResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


HttpListAlarmWhiteListResponseData ListAlarmWhitelistResponse::getData() const
{
    return data_;
}

void ListAlarmWhitelistResponse::setData(const HttpListAlarmWhiteListResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAlarmWhitelistResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAlarmWhitelistResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


