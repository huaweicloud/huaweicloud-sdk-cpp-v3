

#include "huaweicloud/cloudtest/v1/model/ListSubTasksByPostUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListSubTasksByPostUsingRequest::ListSubTasksByPostUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListSubTasksByPostUsingRequest::~ListSubTasksByPostUsingRequest() = default;

void ListSubTasksByPostUsingRequest::validate()
{
}

web::json::value ListSubTasksByPostUsingRequest::toJson() const
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
bool ListSubTasksByPostUsingRequest::fromJson(const web::json::value& val)
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
            SubTaskQueryByPageParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListSubTasksByPostUsingRequest::getServiceId() const
{
    return serviceId_;
}

void ListSubTasksByPostUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListSubTasksByPostUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListSubTasksByPostUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

SubTaskQueryByPageParams ListSubTasksByPostUsingRequest::getBody() const
{
    return body_;
}

void ListSubTasksByPostUsingRequest::setBody(const SubTaskQueryByPageParams& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSubTasksByPostUsingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSubTasksByPostUsingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


