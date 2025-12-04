

#include "huaweicloud/smn/v2/model/UpdateKmsKeyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateKmsKeyRequestBody::UpdateKmsKeyRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
}

UpdateKmsKeyRequestBody::~UpdateKmsKeyRequestBody() = default;

void UpdateKmsKeyRequestBody::validate()
{
}

web::json::value UpdateKmsKeyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }

    return val;
}
bool UpdateKmsKeyRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateKmsKeyRequestBody::getKeyId() const
{
    return keyId_;
}

void UpdateKmsKeyRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool UpdateKmsKeyRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void UpdateKmsKeyRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}


