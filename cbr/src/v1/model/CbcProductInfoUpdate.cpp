

#include "huaweicloud/cbr/v1/model/CbcProductInfoUpdate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CbcProductInfoUpdate::CbcProductInfoUpdate()
{
    productId_ = "";
    productIdIsSet_ = false;
    resourceSize_ = 0;
    resourceSizeIsSet_ = false;
    resourceSizeMeasureId_ = 0;
    resourceSizeMeasureIdIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
}

CbcProductInfoUpdate::~CbcProductInfoUpdate() = default;

void CbcProductInfoUpdate::validate()
{
}

web::json::value CbcProductInfoUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("productId")] = ModelBase::toJson(productId_);
    }
    if(resourceSizeIsSet_) {
        val[utility::conversions::to_string_t("resourceSize")] = ModelBase::toJson(resourceSize_);
    }
    if(resourceSizeMeasureIdIsSet_) {
        val[utility::conversions::to_string_t("resourceSizeMeasureId")] = ModelBase::toJson(resourceSizeMeasureId_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resourceSpecCode")] = ModelBase::toJson(resourceSpecCode_);
    }

    return val;
}

bool CbcProductInfoUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("productId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("productId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceSize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceSizeMeasureId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceSizeMeasureId"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSizeMeasureId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceSpecCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceSpecCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
        }
    }
    return ok;
}

std::string CbcProductInfoUpdate::getProductId() const
{
    return productId_;
}

void CbcProductInfoUpdate::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool CbcProductInfoUpdate::productIdIsSet() const
{
    return productIdIsSet_;
}

void CbcProductInfoUpdate::unsetproductId()
{
    productIdIsSet_ = false;
}

int32_t CbcProductInfoUpdate::getResourceSize() const
{
    return resourceSize_;
}

void CbcProductInfoUpdate::setResourceSize(int32_t value)
{
    resourceSize_ = value;
    resourceSizeIsSet_ = true;
}

bool CbcProductInfoUpdate::resourceSizeIsSet() const
{
    return resourceSizeIsSet_;
}

void CbcProductInfoUpdate::unsetresourceSize()
{
    resourceSizeIsSet_ = false;
}

int32_t CbcProductInfoUpdate::getResourceSizeMeasureId() const
{
    return resourceSizeMeasureId_;
}

void CbcProductInfoUpdate::setResourceSizeMeasureId(int32_t value)
{
    resourceSizeMeasureId_ = value;
    resourceSizeMeasureIdIsSet_ = true;
}

bool CbcProductInfoUpdate::resourceSizeMeasureIdIsSet() const
{
    return resourceSizeMeasureIdIsSet_;
}

void CbcProductInfoUpdate::unsetresourceSizeMeasureId()
{
    resourceSizeMeasureIdIsSet_ = false;
}

std::string CbcProductInfoUpdate::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void CbcProductInfoUpdate::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool CbcProductInfoUpdate::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void CbcProductInfoUpdate::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

}
}
}
}
}


