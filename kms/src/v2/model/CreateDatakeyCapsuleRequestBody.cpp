

#include "huaweicloud/kms/v2/model/CreateDatakeyCapsuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateDatakeyCapsuleRequestBody::CreateDatakeyCapsuleRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    datakeyLength_ = "";
    datakeyLengthIsSet_ = false;
    publicKey_ = "";
    publicKeyIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    keyPolicy_ = "";
    keyPolicyIsSet_ = false;
}

CreateDatakeyCapsuleRequestBody::~CreateDatakeyCapsuleRequestBody() = default;

void CreateDatakeyCapsuleRequestBody::validate()
{
}

web::json::value CreateDatakeyCapsuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(datakeyLengthIsSet_) {
        val[utility::conversions::to_string_t("datakey_length")] = ModelBase::toJson(datakeyLength_);
    }
    if(publicKeyIsSet_) {
        val[utility::conversions::to_string_t("public_key")] = ModelBase::toJson(publicKey_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(keyPolicyIsSet_) {
        val[utility::conversions::to_string_t("key_policy")] = ModelBase::toJson(keyPolicy_);
    }

    return val;
}
bool CreateDatakeyCapsuleRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datakey_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datakey_length"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatakeyLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyPolicy(refVal);
        }
    }
    return ok;
}


std::string CreateDatakeyCapsuleRequestBody::getKeyId() const
{
    return keyId_;
}

void CreateDatakeyCapsuleRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool CreateDatakeyCapsuleRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void CreateDatakeyCapsuleRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string CreateDatakeyCapsuleRequestBody::getDatakeyLength() const
{
    return datakeyLength_;
}

void CreateDatakeyCapsuleRequestBody::setDatakeyLength(const std::string& value)
{
    datakeyLength_ = value;
    datakeyLengthIsSet_ = true;
}

bool CreateDatakeyCapsuleRequestBody::datakeyLengthIsSet() const
{
    return datakeyLengthIsSet_;
}

void CreateDatakeyCapsuleRequestBody::unsetdatakeyLength()
{
    datakeyLengthIsSet_ = false;
}

std::string CreateDatakeyCapsuleRequestBody::getPublicKey() const
{
    return publicKey_;
}

void CreateDatakeyCapsuleRequestBody::setPublicKey(const std::string& value)
{
    publicKey_ = value;
    publicKeyIsSet_ = true;
}

bool CreateDatakeyCapsuleRequestBody::publicKeyIsSet() const
{
    return publicKeyIsSet_;
}

void CreateDatakeyCapsuleRequestBody::unsetpublicKey()
{
    publicKeyIsSet_ = false;
}

std::string CreateDatakeyCapsuleRequestBody::getPolicyId() const
{
    return policyId_;
}

void CreateDatakeyCapsuleRequestBody::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool CreateDatakeyCapsuleRequestBody::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void CreateDatakeyCapsuleRequestBody::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string CreateDatakeyCapsuleRequestBody::getKeyPolicy() const
{
    return keyPolicy_;
}

void CreateDatakeyCapsuleRequestBody::setKeyPolicy(const std::string& value)
{
    keyPolicy_ = value;
    keyPolicyIsSet_ = true;
}

bool CreateDatakeyCapsuleRequestBody::keyPolicyIsSet() const
{
    return keyPolicyIsSet_;
}

void CreateDatakeyCapsuleRequestBody::unsetkeyPolicy()
{
    keyPolicyIsSet_ = false;
}

}
}
}
}
}


