

#include "huaweicloud/metastudio/v1/model/ProductMediaInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ProductMediaInfo::ProductMediaInfo()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    assetType_ = "";
    assetTypeIsSet_ = false;
    order_ = 0;
    orderIsSet_ = false;
}

ProductMediaInfo::~ProductMediaInfo() = default;

void ProductMediaInfo::validate()
{
}

web::json::value ProductMediaInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(assetTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_type")] = ModelBase::toJson(assetType_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }

    return val;
}
bool ProductMediaInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    return ok;
}


std::string ProductMediaInfo::getAssetId() const
{
    return assetId_;
}

void ProductMediaInfo::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ProductMediaInfo::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ProductMediaInfo::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ProductMediaInfo::getAssetType() const
{
    return assetType_;
}

void ProductMediaInfo::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool ProductMediaInfo::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void ProductMediaInfo::unsetassetType()
{
    assetTypeIsSet_ = false;
}

int32_t ProductMediaInfo::getOrder() const
{
    return order_;
}

void ProductMediaInfo::setOrder(int32_t value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ProductMediaInfo::orderIsSet() const
{
    return orderIsSet_;
}

void ProductMediaInfo::unsetorder()
{
    orderIsSet_ = false;
}

}
}
}
}
}


