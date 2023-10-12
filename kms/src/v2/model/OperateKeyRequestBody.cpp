

#include "huaweicloud/kms/v2/model/OperateKeyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




OperateKeyRequestBody::OperateKeyRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

OperateKeyRequestBody::~OperateKeyRequestBody() = default;

void OperateKeyRequestBody::validate()
{
}

web::json::value OperateKeyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool OperateKeyRequestBody::fromJson(const web::json::value& val)
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


std::string OperateKeyRequestBody::getKeyId() const
{
    return keyId_;
}

void OperateKeyRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool OperateKeyRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void OperateKeyRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string OperateKeyRequestBody::getSequence() const
{
    return sequence_;
}

void OperateKeyRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool OperateKeyRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void OperateKeyRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


