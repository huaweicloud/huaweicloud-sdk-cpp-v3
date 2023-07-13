

#include "huaweicloud/eip/v2/model/DeletePublicipTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




DeletePublicipTagRequest::DeletePublicipTagRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
}

DeletePublicipTagRequest::~DeletePublicipTagRequest() = default;

void DeletePublicipTagRequest::validate()
{
}

web::json::value DeletePublicipTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}

bool DeletePublicipTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipId(refVal);
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

std::string DeletePublicipTagRequest::getPublicipId() const
{
    return publicipId_;
}

void DeletePublicipTagRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool DeletePublicipTagRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void DeletePublicipTagRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

std::string DeletePublicipTagRequest::getKey() const
{
    return key_;
}

void DeletePublicipTagRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeletePublicipTagRequest::keyIsSet() const
{
    return keyIsSet_;
}

void DeletePublicipTagRequest::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


