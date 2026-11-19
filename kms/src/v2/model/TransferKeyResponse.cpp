

#include "huaweicloud/kms/v2/model/TransferKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




TransferKeyResponse::TransferKeyResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    keyspaceId_ = "";
    keyspaceIdIsSet_ = false;
}

TransferKeyResponse::~TransferKeyResponse() = default;

void TransferKeyResponse::validate()
{
}

web::json::value TransferKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(keyspaceIdIsSet_) {
        val[utility::conversions::to_string_t("keyspace_id")] = ModelBase::toJson(keyspaceId_);
    }

    return val;
}
bool TransferKeyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("keyspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspaceId(refVal);
        }
    }
    return ok;
}


std::string TransferKeyResponse::getKeyId() const
{
    return keyId_;
}

void TransferKeyResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool TransferKeyResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void TransferKeyResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string TransferKeyResponse::getKeyspaceId() const
{
    return keyspaceId_;
}

void TransferKeyResponse::setKeyspaceId(const std::string& value)
{
    keyspaceId_ = value;
    keyspaceIdIsSet_ = true;
}

bool TransferKeyResponse::keyspaceIdIsSet() const
{
    return keyspaceIdIsSet_;
}

void TransferKeyResponse::unsetkeyspaceId()
{
    keyspaceIdIsSet_ = false;
}

}
}
}
}
}


