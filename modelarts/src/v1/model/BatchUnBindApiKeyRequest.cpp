

#include "huaweicloud/modelarts/v1/model/BatchUnBindApiKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchUnBindApiKeyRequest::BatchUnBindApiKeyRequest()
{
    keyIdsIsSet_ = false;
}

BatchUnBindApiKeyRequest::~BatchUnBindApiKeyRequest() = default;

void BatchUnBindApiKeyRequest::validate()
{
}

web::json::value BatchUnBindApiKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdsIsSet_) {
        val[utility::conversions::to_string_t("key_ids")] = ModelBase::toJson(keyIds_);
    }

    return val;
}
bool BatchUnBindApiKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchUnBindApiKeyRequest_key_ids> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyIds(refVal);
        }
    }
    return ok;
}


std::vector<BatchUnBindApiKeyRequest_key_ids>& BatchUnBindApiKeyRequest::getKeyIds()
{
    return keyIds_;
}

void BatchUnBindApiKeyRequest::setKeyIds(const std::vector<BatchUnBindApiKeyRequest_key_ids>& value)
{
    keyIds_ = value;
    keyIdsIsSet_ = true;
}

bool BatchUnBindApiKeyRequest::keyIdsIsSet() const
{
    return keyIdsIsSet_;
}

void BatchUnBindApiKeyRequest::unsetkeyIds()
{
    keyIdsIsSet_ = false;
}

}
}
}
}
}


