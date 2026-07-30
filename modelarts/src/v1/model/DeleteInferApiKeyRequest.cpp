

#include "huaweicloud/modelarts/v1/model/DeleteInferApiKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteInferApiKeyRequest::DeleteInferApiKeyRequest()
{
    keyId_ = "";
    keyIdIsSet_ = false;
}

DeleteInferApiKeyRequest::~DeleteInferApiKeyRequest() = default;

void DeleteInferApiKeyRequest::validate()
{
}

web::json::value DeleteInferApiKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }

    return val;
}
bool DeleteInferApiKeyRequest::fromJson(const web::json::value& val)
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


std::string DeleteInferApiKeyRequest::getKeyId() const
{
    return keyId_;
}

void DeleteInferApiKeyRequest::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool DeleteInferApiKeyRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void DeleteInferApiKeyRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}


