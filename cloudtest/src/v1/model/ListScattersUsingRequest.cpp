

#include "huaweicloud/cloudtest/v1/model/ListScattersUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListScattersUsingRequest::ListScattersUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListScattersUsingRequest::~ListScattersUsingRequest() = default;

void ListScattersUsingRequest::validate()
{
}

web::json::value ListScattersUsingRequest::toJson() const
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
bool ListScattersUsingRequest::fromJson(const web::json::value& val)
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


std::string ListScattersUsingRequest::getServiceId() const
{
    return serviceId_;
}

void ListScattersUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListScattersUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListScattersUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

DashboardDataQuery ListScattersUsingRequest::getBody() const
{
    return body_;
}

void ListScattersUsingRequest::setBody(const DashboardDataQuery& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListScattersUsingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListScattersUsingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


