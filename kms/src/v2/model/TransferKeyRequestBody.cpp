

#include "huaweicloud/kms/v2/model/TransferKeyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




TransferKeyRequestBody::TransferKeyRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    targetKeyspaceId_ = "";
    targetKeyspaceIdIsSet_ = false;
    transferMode_ = "";
    transferModeIsSet_ = false;
}

TransferKeyRequestBody::~TransferKeyRequestBody() = default;

void TransferKeyRequestBody::validate()
{
}

web::json::value TransferKeyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(targetKeyspaceIdIsSet_) {
        val[utility::conversions::to_string_t("target_keyspace_id")] = ModelBase::toJson(targetKeyspaceId_);
    }
    if(transferModeIsSet_) {
        val[utility::conversions::to_string_t("transfer_mode")] = ModelBase::toJson(transferMode_);
    }

    return val;
}
bool TransferKeyRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_keyspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_keyspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetKeyspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transfer_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransferMode(refVal);
        }
    }
    return ok;
}


std::string TransferKeyRequestBody::getKeyId() const
{
    return keyId_;
}

void TransferKeyRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool TransferKeyRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void TransferKeyRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string TransferKeyRequestBody::getTargetKeyspaceId() const
{
    return targetKeyspaceId_;
}

void TransferKeyRequestBody::setTargetKeyspaceId(const std::string& value)
{
    targetKeyspaceId_ = value;
    targetKeyspaceIdIsSet_ = true;
}

bool TransferKeyRequestBody::targetKeyspaceIdIsSet() const
{
    return targetKeyspaceIdIsSet_;
}

void TransferKeyRequestBody::unsettargetKeyspaceId()
{
    targetKeyspaceIdIsSet_ = false;
}

std::string TransferKeyRequestBody::getTransferMode() const
{
    return transferMode_;
}

void TransferKeyRequestBody::setTransferMode(const std::string& value)
{
    transferMode_ = value;
    transferModeIsSet_ = true;
}

bool TransferKeyRequestBody::transferModeIsSet() const
{
    return transferModeIsSet_;
}

void TransferKeyRequestBody::unsettransferMode()
{
    transferModeIsSet_ = false;
}

}
}
}
}
}


