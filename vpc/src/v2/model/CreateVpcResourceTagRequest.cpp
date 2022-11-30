

#include "huaweicloud/vpc/v2/model/CreateVpcResourceTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateVpcResourceTagRequest::CreateVpcResourceTagRequest()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateVpcResourceTagRequest::~CreateVpcResourceTagRequest() = default;

void CreateVpcResourceTagRequest::validate()
{
}

web::json::value CreateVpcResourceTagRequest::toJson() const
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

bool CreateVpcResourceTagRequest::fromJson(const web::json::value& val)
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
            CreateVpcResourceTagRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateVpcResourceTagRequest::getVpcId() const
{
    return vpcId_;
}

void CreateVpcResourceTagRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateVpcResourceTagRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateVpcResourceTagRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

CreateVpcResourceTagRequestBody CreateVpcResourceTagRequest::getBody() const
{
    return body_;
}

void CreateVpcResourceTagRequest::setBody(const CreateVpcResourceTagRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateVpcResourceTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateVpcResourceTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


