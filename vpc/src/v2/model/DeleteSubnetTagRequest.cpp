

#include "huaweicloud/vpc/v2/model/DeleteSubnetTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DeleteSubnetTagRequest::DeleteSubnetTagRequest()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
}

DeleteSubnetTagRequest::~DeleteSubnetTagRequest() = default;

void DeleteSubnetTagRequest::validate()
{
}

web::json::value DeleteSubnetTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}

bool DeleteSubnetTagRequest::fromJson(const web::json::value& val)
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


std::string DeleteSubnetTagRequest::getSubnetId() const
{
    return subnetId_;
}

void DeleteSubnetTagRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool DeleteSubnetTagRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void DeleteSubnetTagRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string DeleteSubnetTagRequest::getKey() const
{
    return key_;
}

void DeleteSubnetTagRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteSubnetTagRequest::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteSubnetTagRequest::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


