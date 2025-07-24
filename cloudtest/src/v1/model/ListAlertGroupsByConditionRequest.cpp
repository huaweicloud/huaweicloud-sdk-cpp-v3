

#include "huaweicloud/cloudtest/v1/model/ListAlertGroupsByConditionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAlertGroupsByConditionRequest::ListAlertGroupsByConditionRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAlertGroupsByConditionRequest::~ListAlertGroupsByConditionRequest() = default;

void ListAlertGroupsByConditionRequest::validate()
{
}

web::json::value ListAlertGroupsByConditionRequest::toJson() const
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
bool ListAlertGroupsByConditionRequest::fromJson(const web::json::value& val)
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
            ListAlertGroupsByConditionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListAlertGroupsByConditionRequest::getServiceId() const
{
    return serviceId_;
}

void ListAlertGroupsByConditionRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListAlertGroupsByConditionRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListAlertGroupsByConditionRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

ListAlertGroupsByConditionRequestBody ListAlertGroupsByConditionRequest::getBody() const
{
    return body_;
}

void ListAlertGroupsByConditionRequest::setBody(const ListAlertGroupsByConditionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAlertGroupsByConditionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAlertGroupsByConditionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


