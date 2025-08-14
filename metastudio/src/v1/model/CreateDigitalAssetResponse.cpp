

#include "huaweicloud/metastudio/v1/model/CreateDigitalAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateDigitalAssetResponse::CreateDigitalAssetResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    produceId_ = "";
    produceIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateDigitalAssetResponse::~CreateDigitalAssetResponse() = default;

void CreateDigitalAssetResponse::validate()
{
}

web::json::value CreateDigitalAssetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(produceIdIsSet_) {
        val[utility::conversions::to_string_t("produce_id")] = ModelBase::toJson(produceId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateDigitalAssetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("produce_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("produce_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProduceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CreateDigitalAssetResponse::getAssetId() const
{
    return assetId_;
}

void CreateDigitalAssetResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool CreateDigitalAssetResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void CreateDigitalAssetResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string CreateDigitalAssetResponse::getProduceId() const
{
    return produceId_;
}

void CreateDigitalAssetResponse::setProduceId(const std::string& value)
{
    produceId_ = value;
    produceIdIsSet_ = true;
}

bool CreateDigitalAssetResponse::produceIdIsSet() const
{
    return produceIdIsSet_;
}

void CreateDigitalAssetResponse::unsetproduceId()
{
    produceIdIsSet_ = false;
}

std::string CreateDigitalAssetResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateDigitalAssetResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateDigitalAssetResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateDigitalAssetResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


