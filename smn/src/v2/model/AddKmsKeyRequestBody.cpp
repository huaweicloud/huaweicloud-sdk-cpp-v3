

#include "huaweicloud/smn/v2/model/AddKmsKeyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




AddKmsKeyRequestBody::AddKmsKeyRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
}

AddKmsKeyRequestBody::~AddKmsKeyRequestBody() = default;

void AddKmsKeyRequestBody::validate()
{
}

web::json::value AddKmsKeyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }

    return val;
}
bool AddKmsKeyRequestBody::fromJson(const web::json::value& val)
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


std::string AddKmsKeyRequestBody::getKeyId() const
{
    return keyId_;
}

void AddKmsKeyRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool AddKmsKeyRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void AddKmsKeyRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}


