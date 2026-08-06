

#include "huaweicloud/kms/v2/model/RotateOnDemandRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




RotateOnDemandRequestBody::RotateOnDemandRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
}

RotateOnDemandRequestBody::~RotateOnDemandRequestBody() = default;

void RotateOnDemandRequestBody::validate()
{
}

web::json::value RotateOnDemandRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }

    return val;
}
bool RotateOnDemandRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RotateOnDemandRequestBody::getKeyId() const
{
    return keyId_;
}

void RotateOnDemandRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool RotateOnDemandRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void RotateOnDemandRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}


