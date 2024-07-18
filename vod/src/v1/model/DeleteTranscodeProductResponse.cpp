

#include "huaweicloud/vod/v1/model/DeleteTranscodeProductResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteTranscodeProductResponse::DeleteTranscodeProductResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    deletedProductsIsSet_ = false;
    failedProductsIsSet_ = false;
}

DeleteTranscodeProductResponse::~DeleteTranscodeProductResponse() = default;

void DeleteTranscodeProductResponse::validate()
{
}

web::json::value DeleteTranscodeProductResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(deletedProductsIsSet_) {
        val[utility::conversions::to_string_t("deleted_products")] = ModelBase::toJson(deletedProducts_);
    }
    if(failedProductsIsSet_) {
        val[utility::conversions::to_string_t("failed_products")] = ModelBase::toJson(failedProducts_);
    }

    return val;
}
bool DeleteTranscodeProductResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted_products"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted_products"));
        if(!fieldValue.is_null())
        {
            std::vector<ProductGroupInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletedProducts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_products"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_products"));
        if(!fieldValue.is_null())
        {
            std::vector<ProductGroupDelFailInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedProducts(refVal);
        }
    }
    return ok;
}


std::string DeleteTranscodeProductResponse::getAssetId() const
{
    return assetId_;
}

void DeleteTranscodeProductResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool DeleteTranscodeProductResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void DeleteTranscodeProductResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string DeleteTranscodeProductResponse::getStatus() const
{
    return status_;
}

void DeleteTranscodeProductResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteTranscodeProductResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteTranscodeProductResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<ProductGroupInfo>& DeleteTranscodeProductResponse::getDeletedProducts()
{
    return deletedProducts_;
}

void DeleteTranscodeProductResponse::setDeletedProducts(const std::vector<ProductGroupInfo>& value)
{
    deletedProducts_ = value;
    deletedProductsIsSet_ = true;
}

bool DeleteTranscodeProductResponse::deletedProductsIsSet() const
{
    return deletedProductsIsSet_;
}

void DeleteTranscodeProductResponse::unsetdeletedProducts()
{
    deletedProductsIsSet_ = false;
}

std::vector<ProductGroupDelFailInfo>& DeleteTranscodeProductResponse::getFailedProducts()
{
    return failedProducts_;
}

void DeleteTranscodeProductResponse::setFailedProducts(const std::vector<ProductGroupDelFailInfo>& value)
{
    failedProducts_ = value;
    failedProductsIsSet_ = true;
}

bool DeleteTranscodeProductResponse::failedProductsIsSet() const
{
    return failedProductsIsSet_;
}

void DeleteTranscodeProductResponse::unsetfailedProducts()
{
    failedProductsIsSet_ = false;
}

}
}
}
}
}


