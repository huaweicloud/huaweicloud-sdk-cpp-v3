

#include "huaweicloud/vpc/model/UpdateVpcRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateVpcRequest::UpdateVpcRequest()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateVpcRequest::~UpdateVpcRequest() = default;

void UpdateVpcRequest::validate()
{
}

web::json::value UpdateVpcRequest::toJson() const
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

bool UpdateVpcRequest::fromJson(const web::json::value& val)
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
            UpdateVpcRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateVpcRequest::getVpcId() const
{
    return vpcId_;
}

void UpdateVpcRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool UpdateVpcRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void UpdateVpcRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

UpdateVpcRequestBody UpdateVpcRequest::getBody() const
{
    return body_;
}

void UpdateVpcRequest::setBody(const UpdateVpcRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateVpcRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateVpcRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


