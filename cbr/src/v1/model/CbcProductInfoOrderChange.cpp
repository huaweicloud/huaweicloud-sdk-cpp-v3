

#include "huaweicloud/cbr/v1/model/CbcProductInfoOrderChange.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CbcProductInfoOrderChange::CbcProductInfoOrderChange()
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

CbcProductInfoOrderChange::~CbcProductInfoOrderChange() = default;

void CbcProductInfoOrderChange::validate()
{
}

web::json::value CbcProductInfoOrderChange::toJson() const
{
    web::json::value val = web::json::value::object();

    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(resourceSizeIsSet_) {
        val[utility::conversions::to_string_t("resource_size")] = ModelBase::toJson(resourceSize_);
    }
    if(resourceSizeMeasureIdIsSet_) {
        val[utility::conversions::to_string_t("resource_size_measure_id")] = ModelBase::toJson(resourceSizeMeasureId_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }

    return val;
}
bool CbcProductInfoOrderChange::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_size_measure_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_size_measure_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSizeMeasureId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
        }
    }
    return ok;
}


std::string CbcProductInfoOrderChange::getProductId() const
{
    return productId_;
}

void CbcProductInfoOrderChange::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool CbcProductInfoOrderChange::productIdIsSet() const
{
    return productIdIsSet_;
}

void CbcProductInfoOrderChange::unsetproductId()
{
    productIdIsSet_ = false;
}

int32_t CbcProductInfoOrderChange::getResourceSize() const
{
    return resourceSize_;
}

void CbcProductInfoOrderChange::setResourceSize(int32_t value)
{
    resourceSize_ = value;
    resourceSizeIsSet_ = true;
}

bool CbcProductInfoOrderChange::resourceSizeIsSet() const
{
    return resourceSizeIsSet_;
}

void CbcProductInfoOrderChange::unsetresourceSize()
{
    resourceSizeIsSet_ = false;
}

int32_t CbcProductInfoOrderChange::getResourceSizeMeasureId() const
{
    return resourceSizeMeasureId_;
}

void CbcProductInfoOrderChange::setResourceSizeMeasureId(int32_t value)
{
    resourceSizeMeasureId_ = value;
    resourceSizeMeasureIdIsSet_ = true;
}

bool CbcProductInfoOrderChange::resourceSizeMeasureIdIsSet() const
{
    return resourceSizeMeasureIdIsSet_;
}

void CbcProductInfoOrderChange::unsetresourceSizeMeasureId()
{
    resourceSizeMeasureIdIsSet_ = false;
}

std::string CbcProductInfoOrderChange::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void CbcProductInfoOrderChange::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool CbcProductInfoOrderChange::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void CbcProductInfoOrderChange::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

}
}
}
}
}


