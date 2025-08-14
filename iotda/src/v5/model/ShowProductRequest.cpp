

#include "huaweicloud/iotda/v5/model/ShowProductRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowProductRequest::ShowProductRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

ShowProductRequest::~ShowProductRequest() = default;

void ShowProductRequest::validate()
{
}

web::json::value ShowProductRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool ShowProductRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    return ok;
}


std::string ShowProductRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowProductRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowProductRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowProductRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowProductRequest::getProductId() const
{
    return productId_;
}

void ShowProductRequest::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ShowProductRequest::productIdIsSet() const
{
    return productIdIsSet_;
}

void ShowProductRequest::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string ShowProductRequest::getAppId() const
{
    return appId_;
}

void ShowProductRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowProductRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowProductRequest::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


