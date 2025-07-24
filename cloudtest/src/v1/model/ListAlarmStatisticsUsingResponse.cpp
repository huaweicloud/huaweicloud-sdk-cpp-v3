

#include "huaweicloud/cloudtest/v1/model/ListAlarmStatisticsUsingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAlarmStatisticsUsingResponse::ListAlarmStatisticsUsingResponse()
{
    bodyIsSet_ = false;
}

ListAlarmStatisticsUsingResponse::~ListAlarmStatisticsUsingResponse() = default;

void ListAlarmStatisticsUsingResponse::validate()
{
}

web::json::value ListAlarmStatisticsUsingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListAlarmStatisticsUsingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<AlertStatisticsDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<AlertStatisticsDto>& ListAlarmStatisticsUsingResponse::getBody()
{
    return body_;
}

void ListAlarmStatisticsUsingResponse::setBody(const std::vector<AlertStatisticsDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAlarmStatisticsUsingResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAlarmStatisticsUsingResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


