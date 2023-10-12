

#include "huaweicloud/vpc/v2/model/DeleteVpcTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DeleteVpcTagRequest::DeleteVpcTagRequest()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
}

DeleteVpcTagRequest::~DeleteVpcTagRequest() = default;

void DeleteVpcTagRequest::validate()
{
}

web::json::value DeleteVpcTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}
bool DeleteVpcTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    return ok;
}


std::string DeleteVpcTagRequest::getVpcId() const
{
    return vpcId_;
}

void DeleteVpcTagRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool DeleteVpcTagRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void DeleteVpcTagRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string DeleteVpcTagRequest::getKey() const
{
    return key_;
}

void DeleteVpcTagRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteVpcTagRequest::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteVpcTagRequest::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


