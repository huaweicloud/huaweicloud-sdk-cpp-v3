

#include "huaweicloud/cbr/v1/model/CbcOrderChange.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CbcOrderChange::CbcOrderChange()
{
    cloudServiceConsoleUrl_ = "";
    cloudServiceConsoleUrlIsSet_ = false;
    productInfoIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
    promotionInfo_ = "";
    promotionInfoIsSet_ = false;
}

CbcOrderChange::~CbcOrderChange() = default;

void CbcOrderChange::validate()
{
}

web::json::value CbcOrderChange::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cloudServiceConsoleUrlIsSet_) {
        val[utility::conversions::to_string_t("cloud_service_console_url")] = ModelBase::toJson(cloudServiceConsoleUrl_);
    }
    if(productInfoIsSet_) {
        val[utility::conversions::to_string_t("product_info")] = ModelBase::toJson(productInfo_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }
    if(promotionInfoIsSet_) {
        val[utility::conversions::to_string_t("promotion_info")] = ModelBase::toJson(promotionInfo_);
    }

    return val;
}
bool CbcOrderChange::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cloud_service_console_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_service_console_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudServiceConsoleUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_info"));
        if(!fieldValue.is_null())
        {
            CbcProductInfoOrderChange refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("promotion_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("promotion_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPromotionInfo(refVal);
        }
    }
    return ok;
}


std::string CbcOrderChange::getCloudServiceConsoleUrl() const
{
    return cloudServiceConsoleUrl_;
}

void CbcOrderChange::setCloudServiceConsoleUrl(const std::string& value)
{
    cloudServiceConsoleUrl_ = value;
    cloudServiceConsoleUrlIsSet_ = true;
}

bool CbcOrderChange::cloudServiceConsoleUrlIsSet() const
{
    return cloudServiceConsoleUrlIsSet_;
}

void CbcOrderChange::unsetcloudServiceConsoleUrl()
{
    cloudServiceConsoleUrlIsSet_ = false;
}

CbcProductInfoOrderChange CbcOrderChange::getProductInfo() const
{
    return productInfo_;
}

void CbcOrderChange::setProductInfo(const CbcProductInfoOrderChange& value)
{
    productInfo_ = value;
    productInfoIsSet_ = true;
}

bool CbcOrderChange::productInfoIsSet() const
{
    return productInfoIsSet_;
}

void CbcOrderChange::unsetproductInfo()
{
    productInfoIsSet_ = false;
}

std::string CbcOrderChange::getResourceId() const
{
    return resourceId_;
}

void CbcOrderChange::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CbcOrderChange::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CbcOrderChange::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

bool CbcOrderChange::isIsAutoPay() const
{
    return isAutoPay_;
}

void CbcOrderChange::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool CbcOrderChange::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void CbcOrderChange::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

std::string CbcOrderChange::getPromotionInfo() const
{
    return promotionInfo_;
}

void CbcOrderChange::setPromotionInfo(const std::string& value)
{
    promotionInfo_ = value;
    promotionInfoIsSet_ = true;
}

bool CbcOrderChange::promotionInfoIsSet() const
{
    return promotionInfoIsSet_;
}

void CbcOrderChange::unsetpromotionInfo()
{
    promotionInfoIsSet_ = false;
}

}
}
}
}
}


