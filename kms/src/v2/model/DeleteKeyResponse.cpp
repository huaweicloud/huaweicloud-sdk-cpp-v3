

#include "huaweicloud/kms/v2/model/DeleteKeyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DeleteKeyResponse::DeleteKeyResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    keyState_ = "";
    keyStateIsSet_ = false;
}

DeleteKeyResponse::~DeleteKeyResponse() = default;

void DeleteKeyResponse::validate()
{
}

web::json::value DeleteKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(keyStateIsSet_) {
        val[utility::conversions::to_string_t("key_state")] = ModelBase::toJson(keyState_);
    }

    return val;
}

bool DeleteKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyState(refVal);
        }
    }
    return ok;
}

std::string DeleteKeyResponse::getKeyId() const
{
    return keyId_;
}

void DeleteKeyResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool DeleteKeyResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void DeleteKeyResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string DeleteKeyResponse::getKeyState() const
{
    return keyState_;
}

void DeleteKeyResponse::setKeyState(const std::string& value)
{
    keyState_ = value;
    keyStateIsSet_ = true;
}

bool DeleteKeyResponse::keyStateIsSet() const
{
    return keyStateIsSet_;
}

void DeleteKeyResponse::unsetkeyState()
{
    keyStateIsSet_ = false;
}

}
}
}
}
}


