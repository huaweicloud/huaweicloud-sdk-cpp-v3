

#include "huaweicloud/kms/v2/model/ListKmsByTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKmsByTagsRequest::ListKmsByTagsRequest()
{
    resourceInstances_ = "";
    resourceInstancesIsSet_ = false;
    bodyIsSet_ = false;
}

ListKmsByTagsRequest::~ListKmsByTagsRequest() = default;

void ListKmsByTagsRequest::validate()
{
}

web::json::value ListKmsByTagsRequest::toJson() const
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

bool ListKmsByTagsRequest::fromJson(const web::json::value& val)
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
            ListKmsByTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ListKmsByTagsRequest::getResourceInstances() const
{
    return resourceInstances_;
}

void ListKmsByTagsRequest::setResourceInstances(const std::string& value)
{
    resourceInstances_ = value;
    resourceInstancesIsSet_ = true;
}

bool ListKmsByTagsRequest::resourceInstancesIsSet() const
{
    return resourceInstancesIsSet_;
}

void ListKmsByTagsRequest::unsetresourceInstances()
{
    resourceInstancesIsSet_ = false;
}

ListKmsByTagsRequestBody ListKmsByTagsRequest::getBody() const
{
    return body_;
}

void ListKmsByTagsRequest::setBody(const ListKmsByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListKmsByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListKmsByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


