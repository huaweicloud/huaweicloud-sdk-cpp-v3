

#include "huaweicloud/iotda/v5/model/DeleteProductRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteProductRequest::DeleteProductRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

DeleteProductRequest::~DeleteProductRequest() = default;

void DeleteProductRequest::validate()
{
}

web::json::value DeleteProductRequest::toJson() const
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
bool DeleteProductRequest::fromJson(const web::json::value& val)
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


std::string DeleteProductRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteProductRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteProductRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteProductRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteProductRequest::getProductId() const
{
    return productId_;
}

void DeleteProductRequest::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool DeleteProductRequest::productIdIsSet() const
{
    return productIdIsSet_;
}

void DeleteProductRequest::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string DeleteProductRequest::getAppId() const
{
    return appId_;
}

void DeleteProductRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool DeleteProductRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void DeleteProductRequest::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


