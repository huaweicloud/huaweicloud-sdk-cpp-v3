

#include "huaweicloud/kms/v2/model/CancelKeyDeletionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CancelKeyDeletionResponse::CancelKeyDeletionResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    keyState_ = "";
    keyStateIsSet_ = false;
}

CancelKeyDeletionResponse::~CancelKeyDeletionResponse() = default;

void CancelKeyDeletionResponse::validate()
{
}

web::json::value CancelKeyDeletionResponse::toJson() const
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
bool CancelKeyDeletionResponse::fromJson(const web::json::value& val)
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


std::string CancelKeyDeletionResponse::getKeyId() const
{
    return keyId_;
}

void CancelKeyDeletionResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool CancelKeyDeletionResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void CancelKeyDeletionResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string CancelKeyDeletionResponse::getKeyState() const
{
    return keyState_;
}

void CancelKeyDeletionResponse::setKeyState(const std::string& value)
{
    keyState_ = value;
    keyStateIsSet_ = true;
}

bool CancelKeyDeletionResponse::keyStateIsSet() const
{
    return keyStateIsSet_;
}

void CancelKeyDeletionResponse::unsetkeyState()
{
    keyStateIsSet_ = false;
}

}
}
}
}
}


