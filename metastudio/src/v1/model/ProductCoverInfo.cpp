

#include "huaweicloud/metastudio/v1/model/ProductCoverInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ProductCoverInfo::ProductCoverInfo()
{
    assetId_ = "";
    assetIdIsSet_ = false;
}

ProductCoverInfo::~ProductCoverInfo() = default;

void ProductCoverInfo::validate()
{
}

web::json::value ProductCoverInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }

    return val;
}
bool ProductCoverInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ProductCoverInfo::getAssetId() const
{
    return assetId_;
}

void ProductCoverInfo::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ProductCoverInfo::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ProductCoverInfo::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


