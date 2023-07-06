

#include "huaweicloud/cbr/v1/model/CbcUpdate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CbcUpdate::CbcUpdate()
{
    cloudServiceConsoleURL_ = "";
    cloudServiceConsoleURLIsSet_ = false;
    productInfoIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    promotionInfo_ = "";
    promotionInfoIsSet_ = false;
}

CbcUpdate::~CbcUpdate() = default;

void CbcUpdate::validate()
{
}

web::json::value CbcUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cloudServiceConsoleURLIsSet_) {
        val[utility::conversions::to_string_t("cloudServiceConsoleURL")] = ModelBase::toJson(cloudServiceConsoleURL_);
    }
    if(productInfoIsSet_) {
        val[utility::conversions::to_string_t("productInfo")] = ModelBase::toJson(productInfo_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resourceId")] = ModelBase::toJson(resourceId_);
    }
    if(promotionInfoIsSet_) {
        val[utility::conversions::to_string_t("promotion_info")] = ModelBase::toJson(promotionInfo_);
    }

    return val;
}

bool CbcUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cloudServiceConsoleURL"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloudServiceConsoleURL"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudServiceConsoleURL(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("productInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("productInfo"));
        if(!fieldValue.is_null())
        {
            CbcProductInfoUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
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

std::string CbcUpdate::getCloudServiceConsoleURL() const
{
    return cloudServiceConsoleURL_;
}

void CbcUpdate::setCloudServiceConsoleURL(const std::string& value)
{
    cloudServiceConsoleURL_ = value;
    cloudServiceConsoleURLIsSet_ = true;
}

bool CbcUpdate::cloudServiceConsoleURLIsSet() const
{
    return cloudServiceConsoleURLIsSet_;
}

void CbcUpdate::unsetcloudServiceConsoleURL()
{
    cloudServiceConsoleURLIsSet_ = false;
}

CbcProductInfoUpdate CbcUpdate::getProductInfo() const
{
    return productInfo_;
}

void CbcUpdate::setProductInfo(const CbcProductInfoUpdate& value)
{
    productInfo_ = value;
    productInfoIsSet_ = true;
}

bool CbcUpdate::productInfoIsSet() const
{
    return productInfoIsSet_;
}

void CbcUpdate::unsetproductInfo()
{
    productInfoIsSet_ = false;
}

std::string CbcUpdate::getResourceId() const
{
    return resourceId_;
}

void CbcUpdate::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CbcUpdate::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CbcUpdate::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string CbcUpdate::getPromotionInfo() const
{
    return promotionInfo_;
}

void CbcUpdate::setPromotionInfo(const std::string& value)
{
    promotionInfo_ = value;
    promotionInfoIsSet_ = true;
}

bool CbcUpdate::promotionInfoIsSet() const
{
    return promotionInfoIsSet_;
}

void CbcUpdate::unsetpromotionInfo()
{
    promotionInfoIsSet_ = false;
}

}
}
}
}
}


