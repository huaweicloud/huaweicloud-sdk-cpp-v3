

#include "huaweicloud/metastudio/v1/model/ProductAssetReleation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ProductAssetReleation::ProductAssetReleation()
{
    assetItemIsSet_ = false;
    textItemIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

ProductAssetReleation::~ProductAssetReleation() = default;

void ProductAssetReleation::validate()
{
}

web::json::value ProductAssetReleation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetItemIsSet_) {
        val[utility::conversions::to_string_t("asset_item")] = ModelBase::toJson(assetItem_);
    }
    if(textItemIsSet_) {
        val[utility::conversions::to_string_t("text_item")] = ModelBase::toJson(textItem_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool ProductAssetReleation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_item"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_item"));
        if(!fieldValue.is_null())
        {
            ProductMediaInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetItem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_item"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_item"));
        if(!fieldValue.is_null())
        {
            ProductTextInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextItem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


ProductMediaInfo ProductAssetReleation::getAssetItem() const
{
    return assetItem_;
}

void ProductAssetReleation::setAssetItem(const ProductMediaInfo& value)
{
    assetItem_ = value;
    assetItemIsSet_ = true;
}

bool ProductAssetReleation::assetItemIsSet() const
{
    return assetItemIsSet_;
}

void ProductAssetReleation::unsetassetItem()
{
    assetItemIsSet_ = false;
}

ProductTextInfo ProductAssetReleation::getTextItem() const
{
    return textItem_;
}

void ProductAssetReleation::setTextItem(const ProductTextInfo& value)
{
    textItem_ = value;
    textItemIsSet_ = true;
}

bool ProductAssetReleation::textItemIsSet() const
{
    return textItemIsSet_;
}

void ProductAssetReleation::unsettextItem()
{
    textItemIsSet_ = false;
}

std::string ProductAssetReleation::getAction() const
{
    return action_;
}

void ProductAssetReleation::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ProductAssetReleation::actionIsSet() const
{
    return actionIsSet_;
}

void ProductAssetReleation::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


