

#include "huaweicloud/vod/v1/model/CancelAssetTranscodeTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CancelAssetTranscodeTaskRequest::CancelAssetTranscodeTaskRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
}

CancelAssetTranscodeTaskRequest::~CancelAssetTranscodeTaskRequest() = default;

void CancelAssetTranscodeTaskRequest::validate()
{
}

web::json::value CancelAssetTranscodeTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }

    return val;
}

bool CancelAssetTranscodeTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

std::string CancelAssetTranscodeTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CancelAssetTranscodeTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CancelAssetTranscodeTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CancelAssetTranscodeTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CancelAssetTranscodeTaskRequest::getAssetId() const
{
    return assetId_;
}

void CancelAssetTranscodeTaskRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool CancelAssetTranscodeTaskRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void CancelAssetTranscodeTaskRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


