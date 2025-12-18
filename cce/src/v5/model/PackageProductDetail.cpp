

#include "huaweicloud/cce/v5/model/PackageProductDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




PackageProductDetail::PackageProductDetail()
{
    productName_ = "";
    productNameIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
}

PackageProductDetail::~PackageProductDetail() = default;

void PackageProductDetail::validate()
{
}

web::json::value PackageProductDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(productNameIsSet_) {
        val[utility::conversions::to_string_t("product_name")] = ModelBase::toJson(productName_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }
    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("period_type")] = ModelBase::toJson(periodType_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }

    return val;
}
bool PackageProductDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("product_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("period_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
        }
    }
    return ok;
}


std::string PackageProductDetail::getProductName() const
{
    return productName_;
}

void PackageProductDetail::setProductName(const std::string& value)
{
    productName_ = value;
    productNameIsSet_ = true;
}

bool PackageProductDetail::productNameIsSet() const
{
    return productNameIsSet_;
}

void PackageProductDetail::unsetproductName()
{
    productNameIsSet_ = false;
}

std::string PackageProductDetail::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void PackageProductDetail::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool PackageProductDetail::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void PackageProductDetail::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

std::string PackageProductDetail::getPeriodType() const
{
    return periodType_;
}

void PackageProductDetail::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool PackageProductDetail::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void PackageProductDetail::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

std::string PackageProductDetail::getInstanceType() const
{
    return instanceType_;
}

void PackageProductDetail::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool PackageProductDetail::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void PackageProductDetail::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

}
}
}
}
}


