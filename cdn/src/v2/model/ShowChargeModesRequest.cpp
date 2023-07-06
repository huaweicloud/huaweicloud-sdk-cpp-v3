

#include "huaweicloud/cdn/v2/model/ShowChargeModesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowChargeModesRequest::ShowChargeModesRequest()
{
    productType_ = "";
    productTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
}

ShowChargeModesRequest::~ShowChargeModesRequest() = default;

void ShowChargeModesRequest::validate()
{
}

web::json::value ShowChargeModesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(productTypeIsSet_) {
        val[utility::conversions::to_string_t("product_type")] = ModelBase::toJson(productType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }

    return val;
}

bool ShowChargeModesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("product_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceArea(refVal);
        }
    }
    return ok;
}

std::string ShowChargeModesRequest::getProductType() const
{
    return productType_;
}

void ShowChargeModesRequest::setProductType(const std::string& value)
{
    productType_ = value;
    productTypeIsSet_ = true;
}

bool ShowChargeModesRequest::productTypeIsSet() const
{
    return productTypeIsSet_;
}

void ShowChargeModesRequest::unsetproductType()
{
    productTypeIsSet_ = false;
}

std::string ShowChargeModesRequest::getStatus() const
{
    return status_;
}

void ShowChargeModesRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowChargeModesRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ShowChargeModesRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowChargeModesRequest::getServiceArea() const
{
    return serviceArea_;
}

void ShowChargeModesRequest::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ShowChargeModesRequest::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ShowChargeModesRequest::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

}
}
}
}
}


