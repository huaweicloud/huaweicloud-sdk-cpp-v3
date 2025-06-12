

#include "huaweicloud/metastudio/v1/model/OutputAssetConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




OutputAssetConfig::OutputAssetConfig()
{
    assetName_ = "";
    assetNameIsSet_ = false;
}

OutputAssetConfig::~OutputAssetConfig() = default;

void OutputAssetConfig::validate()
{
}

web::json::value OutputAssetConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }

    return val;
}
bool OutputAssetConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string OutputAssetConfig::getAssetName() const
{
    return assetName_;
}

void OutputAssetConfig::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool OutputAssetConfig::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void OutputAssetConfig::unsetassetName()
{
    assetNameIsSet_ = false;
}

}
}
}
}
}


