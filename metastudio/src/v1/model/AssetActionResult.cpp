

#include "huaweicloud/metastudio/v1/model/AssetActionResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AssetActionResult::AssetActionResult()
{
    retStatus_ = "";
    retStatusIsSet_ = false;
    assetIdsIsSet_ = false;
    errorInfoIsSet_ = false;
}

AssetActionResult::~AssetActionResult() = default;

void AssetActionResult::validate()
{
}

web::json::value AssetActionResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(retStatusIsSet_) {
        val[utility::conversions::to_string_t("ret_status")] = ModelBase::toJson(retStatus_);
    }
    if(assetIdsIsSet_) {
        val[utility::conversions::to_string_t("asset_ids")] = ModelBase::toJson(assetIds_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }

    return val;
}
bool AssetActionResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ret_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ret_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    return ok;
}


std::string AssetActionResult::getRetStatus() const
{
    return retStatus_;
}

void AssetActionResult::setRetStatus(const std::string& value)
{
    retStatus_ = value;
    retStatusIsSet_ = true;
}

bool AssetActionResult::retStatusIsSet() const
{
    return retStatusIsSet_;
}

void AssetActionResult::unsetretStatus()
{
    retStatusIsSet_ = false;
}

std::vector<std::string>& AssetActionResult::getAssetIds()
{
    return assetIds_;
}

void AssetActionResult::setAssetIds(const std::vector<std::string>& value)
{
    assetIds_ = value;
    assetIdsIsSet_ = true;
}

bool AssetActionResult::assetIdsIsSet() const
{
    return assetIdsIsSet_;
}

void AssetActionResult::unsetassetIds()
{
    assetIdsIsSet_ = false;
}

ErrorResponse AssetActionResult::getErrorInfo() const
{
    return errorInfo_;
}

void AssetActionResult::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool AssetActionResult::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void AssetActionResult::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

}
}
}
}
}


