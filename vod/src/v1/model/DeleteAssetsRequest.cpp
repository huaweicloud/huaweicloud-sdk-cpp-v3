

#include "huaweicloud/vod/v1/model/DeleteAssetsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteAssetsRequest::DeleteAssetsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    assetIdIsSet_ = false;
}

DeleteAssetsRequest::~DeleteAssetsRequest() = default;

void DeleteAssetsRequest::validate()
{
}

web::json::value DeleteAssetsRequest::toJson() const
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

    return val;
}

bool DeleteAssetsRequest::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    return ok;
}


std::string DeleteAssetsRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteAssetsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteAssetsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteAssetsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteAssetsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteAssetsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteAssetsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteAssetsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::vector<std::string>& DeleteAssetsRequest::getAssetId()
{
    return assetId_;
}

void DeleteAssetsRequest::setAssetId(const std::vector<std::string>& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool DeleteAssetsRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void DeleteAssetsRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


