

#include "huaweicloud/csms/v1/model/ListResourceInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListResourceInstancesRequest::ListResourceInstancesRequest()
{
    resourceInstances_ = "";
    resourceInstancesIsSet_ = false;
    bodyIsSet_ = false;
}

ListResourceInstancesRequest::~ListResourceInstancesRequest() = default;

void ListResourceInstancesRequest::validate()
{
}

web::json::value ListResourceInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceInstancesIsSet_) {
        val[utility::conversions::to_string_t("resource_instances")] = ModelBase::toJson(resourceInstances_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListResourceInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_instances"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListResourceInstancesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListResourceInstancesRequest::getResourceInstances() const
{
    return resourceInstances_;
}

void ListResourceInstancesRequest::setResourceInstances(const std::string& value)
{
    resourceInstances_ = value;
    resourceInstancesIsSet_ = true;
}

bool ListResourceInstancesRequest::resourceInstancesIsSet() const
{
    return resourceInstancesIsSet_;
}

void ListResourceInstancesRequest::unsetresourceInstances()
{
    resourceInstancesIsSet_ = false;
}

ListResourceInstancesRequestBody ListResourceInstancesRequest::getBody() const
{
    return body_;
}

void ListResourceInstancesRequest::setBody(const ListResourceInstancesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListResourceInstancesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListResourceInstancesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


