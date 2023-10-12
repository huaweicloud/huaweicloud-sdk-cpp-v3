

#include "huaweicloud/kms/v2/model/RevokeGrantRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




RevokeGrantRequestBody::RevokeGrantRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    grantId_ = "";
    grantIdIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

RevokeGrantRequestBody::~RevokeGrantRequestBody() = default;

void RevokeGrantRequestBody::validate()
{
}

web::json::value RevokeGrantRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(grantIdIsSet_) {
        val[utility::conversions::to_string_t("grant_id")] = ModelBase::toJson(grantId_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool RevokeGrantRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("grant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    return ok;
}


std::string RevokeGrantRequestBody::getKeyId() const
{
    return keyId_;
}

void RevokeGrantRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool RevokeGrantRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void RevokeGrantRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string RevokeGrantRequestBody::getGrantId() const
{
    return grantId_;
}

void RevokeGrantRequestBody::setGrantId(const std::string& value)
{
    grantId_ = value;
    grantIdIsSet_ = true;
}

bool RevokeGrantRequestBody::grantIdIsSet() const
{
    return grantIdIsSet_;
}

void RevokeGrantRequestBody::unsetgrantId()
{
    grantIdIsSet_ = false;
}

std::string RevokeGrantRequestBody::getSequence() const
{
    return sequence_;
}

void RevokeGrantRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool RevokeGrantRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void RevokeGrantRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


