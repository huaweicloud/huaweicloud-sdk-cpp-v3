

#include "huaweicloud/cloudtest/v1/model/ListLinesUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListLinesUsingRequest::ListLinesUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListLinesUsingRequest::~ListLinesUsingRequest() = default;

void ListLinesUsingRequest::validate()
{
}

web::json::value ListLinesUsingRequest::toJson() const
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
bool ListLinesUsingRequest::fromJson(const web::json::value& val)
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
            DashboardDataQuery refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListLinesUsingRequest::getServiceId() const
{
    return serviceId_;
}

void ListLinesUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListLinesUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListLinesUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

DashboardDataQuery ListLinesUsingRequest::getBody() const
{
    return body_;
}

void ListLinesUsingRequest::setBody(const DashboardDataQuery& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListLinesUsingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListLinesUsingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


