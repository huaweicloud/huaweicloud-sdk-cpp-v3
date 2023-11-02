

#include "huaweicloud/dbss/v1/model/CreateInstancePeriodRequest_product_infos.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateInstancePeriodRequest_product_infos::CreateInstancePeriodRequest_product_infos()
{
    productId_ = "";
    productIdIsSet_ = false;
    cloudServiceType_ = "";
    cloudServiceTypeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    productSpecDesc_ = "";
    productSpecDescIsSet_ = false;
}

CreateInstancePeriodRequest_product_infos::~CreateInstancePeriodRequest_product_infos() = default;

void CreateInstancePeriodRequest_product_infos::validate()
{
}

web::json::value CreateInstancePeriodRequest_product_infos::toJson() const
{
    web::json::value val = web::json::value::object();

    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(cloudServiceTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_service_type")] = ModelBase::toJson(cloudServiceType_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }
    if(productSpecDescIsSet_) {
        val[utility::conversions::to_string_t("product_spec_desc")] = ModelBase::toJson(productSpecDesc_);
    }

    return val;
}
bool CreateInstancePeriodRequest_product_infos::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cloud_service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudServiceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
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
    return ok;
}


std::string CreateInstancePeriodRequest_product_infos::getProductId() const
{
    return productId_;
}

void CreateInstancePeriodRequest_product_infos::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool CreateInstancePeriodRequest_product_infos::productIdIsSet() const
{
    return productIdIsSet_;
}

void CreateInstancePeriodRequest_product_infos::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string CreateInstancePeriodRequest_product_infos::getCloudServiceType() const
{
    return cloudServiceType_;
}

void CreateInstancePeriodRequest_product_infos::setCloudServiceType(const std::string& value)
{
    cloudServiceType_ = value;
    cloudServiceTypeIsSet_ = true;
}

bool CreateInstancePeriodRequest_product_infos::cloudServiceTypeIsSet() const
{
    return cloudServiceTypeIsSet_;
}

void CreateInstancePeriodRequest_product_infos::unsetcloudServiceType()
{
    cloudServiceTypeIsSet_ = false;
}

std::string CreateInstancePeriodRequest_product_infos::getResourceType() const
{
    return resourceType_;
}

void CreateInstancePeriodRequest_product_infos::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool CreateInstancePeriodRequest_product_infos::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void CreateInstancePeriodRequest_product_infos::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string CreateInstancePeriodRequest_product_infos::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void CreateInstancePeriodRequest_product_infos::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool CreateInstancePeriodRequest_product_infos::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void CreateInstancePeriodRequest_product_infos::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

std::string CreateInstancePeriodRequest_product_infos::getProductSpecDesc() const
{
    return productSpecDesc_;
}

void CreateInstancePeriodRequest_product_infos::setProductSpecDesc(const std::string& value)
{
    productSpecDesc_ = value;
    productSpecDescIsSet_ = true;
}

bool CreateInstancePeriodRequest_product_infos::productSpecDescIsSet() const
{
    return productSpecDescIsSet_;
}

void CreateInstancePeriodRequest_product_infos::unsetproductSpecDesc()
{
    productSpecDescIsSet_ = false;
}

}
}
}
}
}


