

#include "huaweicloud/vpc/v2/model/BatchCreateVpcTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




BatchCreateVpcTagsRequest::BatchCreateVpcTagsRequest()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateVpcTagsRequest::~BatchCreateVpcTagsRequest() = default;

void BatchCreateVpcTagsRequest::validate()
{
}

web::json::value BatchCreateVpcTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchCreateVpcTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCreateVpcTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateVpcTagsRequest::getVpcId() const
{
    return vpcId_;
}

void BatchCreateVpcTagsRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool BatchCreateVpcTagsRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void BatchCreateVpcTagsRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

BatchCreateVpcTagsRequestBody BatchCreateVpcTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateVpcTagsRequest::setBody(const BatchCreateVpcTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateVpcTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateVpcTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


