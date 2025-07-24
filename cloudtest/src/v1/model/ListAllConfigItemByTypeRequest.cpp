

#include "huaweicloud/cloudtest/v1/model/ListAllConfigItemByTypeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAllConfigItemByTypeRequest::ListAllConfigItemByTypeRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAllConfigItemByTypeRequest::~ListAllConfigItemByTypeRequest() = default;

void ListAllConfigItemByTypeRequest::validate()
{
}

web::json::value ListAllConfigItemByTypeRequest::toJson() const
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
bool ListAllConfigItemByTypeRequest::fromJson(const web::json::value& val)
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
            ListAllConfigItemByTypeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListAllConfigItemByTypeRequest::getServiceId() const
{
    return serviceId_;
}

void ListAllConfigItemByTypeRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListAllConfigItemByTypeRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListAllConfigItemByTypeRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

ListAllConfigItemByTypeRequestBody ListAllConfigItemByTypeRequest::getBody() const
{
    return body_;
}

void ListAllConfigItemByTypeRequest::setBody(const ListAllConfigItemByTypeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAllConfigItemByTypeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAllConfigItemByTypeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


