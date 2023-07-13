

#include "huaweicloud/vpc/v2/model/BatchCreateSubnetTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




BatchCreateSubnetTagsRequest::BatchCreateSubnetTagsRequest()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateSubnetTagsRequest::~BatchCreateSubnetTagsRequest() = default;

void BatchCreateSubnetTagsRequest::validate()
{
}

web::json::value BatchCreateSubnetTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchCreateSubnetTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCreateSubnetTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchCreateSubnetTagsRequest::getSubnetId() const
{
    return subnetId_;
}

void BatchCreateSubnetTagsRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool BatchCreateSubnetTagsRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void BatchCreateSubnetTagsRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

BatchCreateSubnetTagsRequestBody BatchCreateSubnetTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateSubnetTagsRequest::setBody(const BatchCreateSubnetTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateSubnetTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateSubnetTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


