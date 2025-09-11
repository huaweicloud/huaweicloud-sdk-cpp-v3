

#include "huaweicloud/dbss/v1/model/ProductInfoBeanNew.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ProductInfoBeanNew::ProductInfoBeanNew()
{
    allResourceNamesIsSet_ = false;
    cloudServiceType_ = "";
    cloudServiceTypeIsSet_ = false;
    displayId_ = "";
    displayIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    productSpecDesc_ = "";
    productSpecDescIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

ProductInfoBeanNew::~ProductInfoBeanNew() = default;

void ProductInfoBeanNew::validate()
{
}

web::json::value ProductInfoBeanNew::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allResourceNamesIsSet_) {
        val[utility::conversions::to_string_t("all_resource_names")] = ModelBase::toJson(allResourceNames_);
    }
    if(cloudServiceTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_service_type")] = ModelBase::toJson(cloudServiceType_);
    }
    if(displayIdIsSet_) {
        val[utility::conversions::to_string_t("display_id")] = ModelBase::toJson(displayId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(productSpecDescIsSet_) {
        val[utility::conversions::to_string_t("product_spec_desc")] = ModelBase::toJson(productSpecDesc_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool ProductInfoBeanNew::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("all_resource_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_resource_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllResourceNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloud_service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_spec_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_spec_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductSpecDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ProductInfoBeanNew::getAllResourceNames()
{
    return allResourceNames_;
}

void ProductInfoBeanNew::setAllResourceNames(const std::vector<std::string>& value)
{
    allResourceNames_ = value;
    allResourceNamesIsSet_ = true;
}

bool ProductInfoBeanNew::allResourceNamesIsSet() const
{
    return allResourceNamesIsSet_;
}

void ProductInfoBeanNew::unsetallResourceNames()
{
    allResourceNamesIsSet_ = false;
}

std::string ProductInfoBeanNew::getCloudServiceType() const
{
    return cloudServiceType_;
}

void ProductInfoBeanNew::setCloudServiceType(const std::string& value)
{
    cloudServiceType_ = value;
    cloudServiceTypeIsSet_ = true;
}

bool ProductInfoBeanNew::cloudServiceTypeIsSet() const
{
    return cloudServiceTypeIsSet_;
}

void ProductInfoBeanNew::unsetcloudServiceType()
{
    cloudServiceTypeIsSet_ = false;
}

std::string ProductInfoBeanNew::getDisplayId() const
{
    return displayId_;
}

void ProductInfoBeanNew::setDisplayId(const std::string& value)
{
    displayId_ = value;
    displayIdIsSet_ = true;
}

bool ProductInfoBeanNew::displayIdIsSet() const
{
    return displayIdIsSet_;
}

void ProductInfoBeanNew::unsetdisplayId()
{
    displayIdIsSet_ = false;
}

std::string ProductInfoBeanNew::getProductId() const
{
    return productId_;
}

void ProductInfoBeanNew::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ProductInfoBeanNew::productIdIsSet() const
{
    return productIdIsSet_;
}

void ProductInfoBeanNew::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string ProductInfoBeanNew::getProductSpecDesc() const
{
    return productSpecDesc_;
}

void ProductInfoBeanNew::setProductSpecDesc(const std::string& value)
{
    productSpecDesc_ = value;
    productSpecDescIsSet_ = true;
}

bool ProductInfoBeanNew::productSpecDescIsSet() const
{
    return productSpecDescIsSet_;
}

void ProductInfoBeanNew::unsetproductSpecDesc()
{
    productSpecDescIsSet_ = false;
}

std::string ProductInfoBeanNew::getResourceName() const
{
    return resourceName_;
}

void ProductInfoBeanNew::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ProductInfoBeanNew::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ProductInfoBeanNew::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string ProductInfoBeanNew::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void ProductInfoBeanNew::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool ProductInfoBeanNew::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void ProductInfoBeanNew::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

std::string ProductInfoBeanNew::getResourceType() const
{
    return resourceType_;
}

void ProductInfoBeanNew::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ProductInfoBeanNew::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ProductInfoBeanNew::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


