

#include "huaweicloud/vpc/v2/model/CreateSubnetTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSubnetTagRequest::CreateSubnetTagRequest()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSubnetTagRequest::~CreateSubnetTagRequest() = default;

void CreateSubnetTagRequest::validate()
{
}

web::json::value CreateSubnetTagRequest::toJson() const
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

bool CreateSubnetTagRequest::fromJson(const web::json::value& val)
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
            CreateSubnetTagRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSubnetTagRequest::getSubnetId() const
{
    return subnetId_;
}

void CreateSubnetTagRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CreateSubnetTagRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CreateSubnetTagRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

CreateSubnetTagRequestBody CreateSubnetTagRequest::getBody() const
{
    return body_;
}

void CreateSubnetTagRequest::setBody(const CreateSubnetTagRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSubnetTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSubnetTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


