

#include "huaweicloud/iotda/v5/model/FunctionRequestDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




FunctionRequestDTO::FunctionRequestDTO()
{
    appId_ = "";
    appIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    urn_ = "";
    urnIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

FunctionRequestDTO::~FunctionRequestDTO() = default;

void FunctionRequestDTO::validate()
{
}

web::json::value FunctionRequestDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool FunctionRequestDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string FunctionRequestDTO::getAppId() const
{
    return appId_;
}

void FunctionRequestDTO::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool FunctionRequestDTO::appIdIsSet() const
{
    return appIdIsSet_;
}

void FunctionRequestDTO::unsetappId()
{
    appIdIsSet_ = false;
}

std::string FunctionRequestDTO::getProductId() const
{
    return productId_;
}

void FunctionRequestDTO::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool FunctionRequestDTO::productIdIsSet() const
{
    return productIdIsSet_;
}

void FunctionRequestDTO::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string FunctionRequestDTO::getUrn() const
{
    return urn_;
}

void FunctionRequestDTO::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool FunctionRequestDTO::urnIsSet() const
{
    return urnIsSet_;
}

void FunctionRequestDTO::unseturn()
{
    urnIsSet_ = false;
}

std::string FunctionRequestDTO::getDescription() const
{
    return description_;
}

void FunctionRequestDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool FunctionRequestDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void FunctionRequestDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


