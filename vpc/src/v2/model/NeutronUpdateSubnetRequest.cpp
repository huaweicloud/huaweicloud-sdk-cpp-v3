

#include "huaweicloud/vpc/v2/model/NeutronUpdateSubnetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateSubnetRequest::NeutronUpdateSubnetRequest()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    bodyIsSet_ = false;
}

NeutronUpdateSubnetRequest::~NeutronUpdateSubnetRequest() = default;

void NeutronUpdateSubnetRequest::validate()
{
}

web::json::value NeutronUpdateSubnetRequest::toJson() const
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
bool NeutronUpdateSubnetRequest::fromJson(const web::json::value& val)
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
            NeutronUpdateSubnetRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string NeutronUpdateSubnetRequest::getSubnetId() const
{
    return subnetId_;
}

void NeutronUpdateSubnetRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool NeutronUpdateSubnetRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void NeutronUpdateSubnetRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

NeutronUpdateSubnetRequestBody NeutronUpdateSubnetRequest::getBody() const
{
    return body_;
}

void NeutronUpdateSubnetRequest::setBody(const NeutronUpdateSubnetRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronUpdateSubnetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronUpdateSubnetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


