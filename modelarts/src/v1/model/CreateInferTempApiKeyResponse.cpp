

#include "huaweicloud/modelarts/v1/model/CreateInferTempApiKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateInferTempApiKeyResponse::CreateInferTempApiKeyResponse()
{
    apiKey_ = "";
    apiKeyIsSet_ = false;
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
}

CreateInferTempApiKeyResponse::~CreateInferTempApiKeyResponse() = default;

void CreateInferTempApiKeyResponse::validate()
{
}

web::json::value CreateInferTempApiKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiKeyIsSet_) {
        val[utility::conversions::to_string_t("api_key")] = ModelBase::toJson(apiKey_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool CreateInferTempApiKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("api_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string CreateInferTempApiKeyResponse::getApiKey() const
{
    return apiKey_;
}

void CreateInferTempApiKeyResponse::setApiKey(const std::string& value)
{
    apiKey_ = value;
    apiKeyIsSet_ = true;
}

bool CreateInferTempApiKeyResponse::apiKeyIsSet() const
{
    return apiKeyIsSet_;
}

void CreateInferTempApiKeyResponse::unsetapiKey()
{
    apiKeyIsSet_ = false;
}

int64_t CreateInferTempApiKeyResponse::getExpireTime() const
{
    return expireTime_;
}

void CreateInferTempApiKeyResponse::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool CreateInferTempApiKeyResponse::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void CreateInferTempApiKeyResponse::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

int64_t CreateInferTempApiKeyResponse::getCreateTime() const
{
    return createTime_;
}

void CreateInferTempApiKeyResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateInferTempApiKeyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateInferTempApiKeyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


