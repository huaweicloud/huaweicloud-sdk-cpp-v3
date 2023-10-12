

#include "huaweicloud/vpc/v2/model/BatchDeleteSubnetTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




BatchDeleteSubnetTagsRequest::BatchDeleteSubnetTagsRequest()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteSubnetTagsRequest::~BatchDeleteSubnetTagsRequest() = default;

void BatchDeleteSubnetTagsRequest::validate()
{
}

web::json::value BatchDeleteSubnetTagsRequest::toJson() const
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
bool BatchDeleteSubnetTagsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteSubnetTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteSubnetTagsRequest::getSubnetId() const
{
    return subnetId_;
}

void BatchDeleteSubnetTagsRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool BatchDeleteSubnetTagsRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void BatchDeleteSubnetTagsRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

BatchDeleteSubnetTagsRequestBody BatchDeleteSubnetTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteSubnetTagsRequest::setBody(const BatchDeleteSubnetTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteSubnetTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteSubnetTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


