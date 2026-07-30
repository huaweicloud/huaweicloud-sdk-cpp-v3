

#include "huaweicloud/modelarts/v1/model/BatchBindApiKeyRequest_key_ids.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchBindApiKeyRequest_key_ids::BatchBindApiKeyRequest_key_ids()
{
    keyId_ = "";
    keyIdIsSet_ = false;
}

BatchBindApiKeyRequest_key_ids::~BatchBindApiKeyRequest_key_ids() = default;

void BatchBindApiKeyRequest_key_ids::validate()
{
}

web::json::value BatchBindApiKeyRequest_key_ids::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }

    return val;
}
bool BatchBindApiKeyRequest_key_ids::fromJson(const web::json::value& val)
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


std::string BatchBindApiKeyRequest_key_ids::getKeyId() const
{
    return keyId_;
}

void BatchBindApiKeyRequest_key_ids::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool BatchBindApiKeyRequest_key_ids::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void BatchBindApiKeyRequest_key_ids::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}


