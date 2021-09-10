

#include "huaweicloud/vod/v1/model/CancelExtractAudioTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CancelExtractAudioTaskRequest::CancelExtractAudioTaskRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
}

CancelExtractAudioTaskRequest::~CancelExtractAudioTaskRequest() = default;

void CancelExtractAudioTaskRequest::validate()
{
}

web::json::value CancelExtractAudioTaskRequest::toJson() const
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

bool CancelExtractAudioTaskRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CancelExtractAudioTaskRequest::getAuthorization() const
{
    return authorization_;
}

void CancelExtractAudioTaskRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CancelExtractAudioTaskRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CancelExtractAudioTaskRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CancelExtractAudioTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CancelExtractAudioTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CancelExtractAudioTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CancelExtractAudioTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CancelExtractAudioTaskRequest::getAssetId() const
{
    return assetId_;
}

void CancelExtractAudioTaskRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool CancelExtractAudioTaskRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void CancelExtractAudioTaskRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


