

#include "huaweicloud/vod/v1/model/ShowAssetDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowAssetDetailRequest::ShowAssetDetailRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    categoriesIsSet_ = false;
}

ShowAssetDetailRequest::~ShowAssetDetailRequest() = default;

void ShowAssetDetailRequest::validate()
{
}

web::json::value ShowAssetDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(categoriesIsSet_) {
        val[utility::conversions::to_string_t("categories")] = ModelBase::toJson(categories_);
    }

    return val;
}

bool ShowAssetDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("categories"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategories(refVal);
        }
    }
    return ok;
}


std::string ShowAssetDetailRequest::getAuthorization() const
{
    return authorization_;
}

void ShowAssetDetailRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowAssetDetailRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowAssetDetailRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowAssetDetailRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowAssetDetailRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowAssetDetailRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowAssetDetailRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowAssetDetailRequest::getAssetId() const
{
    return assetId_;
}

void ShowAssetDetailRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowAssetDetailRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowAssetDetailRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::vector<std::string>& ShowAssetDetailRequest::getCategories()
{
    return categories_;
}

void ShowAssetDetailRequest::setCategories(const std::vector<std::string>& value)
{
    categories_ = value;
    categoriesIsSet_ = true;
}

bool ShowAssetDetailRequest::categoriesIsSet() const
{
    return categoriesIsSet_;
}

void ShowAssetDetailRequest::unsetcategories()
{
    categoriesIsSet_ = false;
}

}
}
}
}
}


