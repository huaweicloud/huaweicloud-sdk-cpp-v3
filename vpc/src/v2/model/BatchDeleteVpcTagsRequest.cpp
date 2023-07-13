

#include "huaweicloud/vpc/v2/model/BatchDeleteVpcTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




BatchDeleteVpcTagsRequest::BatchDeleteVpcTagsRequest()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteVpcTagsRequest::~BatchDeleteVpcTagsRequest() = default;

void BatchDeleteVpcTagsRequest::validate()
{
}

web::json::value BatchDeleteVpcTagsRequest::toJson() const
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

bool BatchDeleteVpcTagsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteVpcTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchDeleteVpcTagsRequest::getVpcId() const
{
    return vpcId_;
}

void BatchDeleteVpcTagsRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool BatchDeleteVpcTagsRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void BatchDeleteVpcTagsRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

BatchDeleteVpcTagsRequestBody BatchDeleteVpcTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteVpcTagsRequest::setBody(const BatchDeleteVpcTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteVpcTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteVpcTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


