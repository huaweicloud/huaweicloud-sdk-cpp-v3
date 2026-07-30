

#include "huaweicloud/modelarts/v1/model/BatchBindApiKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchBindApiKeyRequest::BatchBindApiKeyRequest()
{
    keyIdsIsSet_ = false;
}

BatchBindApiKeyRequest::~BatchBindApiKeyRequest() = default;

void BatchBindApiKeyRequest::validate()
{
}

web::json::value BatchBindApiKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdsIsSet_) {
        val[utility::conversions::to_string_t("key_ids")] = ModelBase::toJson(keyIds_);
    }

    return val;
}
bool BatchBindApiKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchBindApiKeyRequest_key_ids> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyIds(refVal);
        }
    }
    return ok;
}


std::vector<BatchBindApiKeyRequest_key_ids>& BatchBindApiKeyRequest::getKeyIds()
{
    return keyIds_;
}

void BatchBindApiKeyRequest::setKeyIds(const std::vector<BatchBindApiKeyRequest_key_ids>& value)
{
    keyIds_ = value;
    keyIdsIsSet_ = true;
}

bool BatchBindApiKeyRequest::keyIdsIsSet() const
{
    return keyIdsIsSet_;
}

void BatchBindApiKeyRequest::unsetkeyIds()
{
    keyIdsIsSet_ = false;
}

}
}
}
}
}


