

#include "huaweicloud/cloudtest/v1/model/ListAlarmStatisticsUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAlarmStatisticsUsingRequest::ListAlarmStatisticsUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAlarmStatisticsUsingRequest::~ListAlarmStatisticsUsingRequest() = default;

void ListAlarmStatisticsUsingRequest::validate()
{
}

web::json::value ListAlarmStatisticsUsingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListAlarmStatisticsUsingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AlarmStatisticsQuery refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListAlarmStatisticsUsingRequest::getServiceId() const
{
    return serviceId_;
}

void ListAlarmStatisticsUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListAlarmStatisticsUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListAlarmStatisticsUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

AlarmStatisticsQuery ListAlarmStatisticsUsingRequest::getBody() const
{
    return body_;
}

void ListAlarmStatisticsUsingRequest::setBody(const AlarmStatisticsQuery& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAlarmStatisticsUsingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAlarmStatisticsUsingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


