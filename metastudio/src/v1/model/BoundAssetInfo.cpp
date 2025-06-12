

#include "huaweicloud/metastudio/v1/model/BoundAssetInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BoundAssetInfo::BoundAssetInfo()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
}

BoundAssetInfo::~BoundAssetInfo() = default;

void BoundAssetInfo::validate()
{
}

web::json::value BoundAssetInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }

    return val;
}
bool BoundAssetInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("asset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetName(refVal);
        }
    }
    return ok;
}


std::string BoundAssetInfo::getAssetId() const
{
    return assetId_;
}

void BoundAssetInfo::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool BoundAssetInfo::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void BoundAssetInfo::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string BoundAssetInfo::getAssetName() const
{
    return assetName_;
}

void BoundAssetInfo::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool BoundAssetInfo::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void BoundAssetInfo::unsetassetName()
{
    assetNameIsSet_ = false;
}

}
}
}
}
}


