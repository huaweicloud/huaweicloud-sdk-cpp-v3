

#include "huaweicloud/iotda/v5/model/ListFunctionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListFunctionsRequest::ListFunctionsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
}

ListFunctionsRequest::~ListFunctionsRequest() = default;

void ListFunctionsRequest::validate()
{
}

web::json::value ListFunctionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }

    return val;
}
bool ListFunctionsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListFunctionsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListFunctionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListFunctionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListFunctionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListFunctionsRequest::getAppId() const
{
    return appId_;
}

void ListFunctionsRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListFunctionsRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListFunctionsRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ListFunctionsRequest::getProductId() const
{
    return productId_;
}

void ListFunctionsRequest::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ListFunctionsRequest::productIdIsSet() const
{
    return productIdIsSet_;
}

void ListFunctionsRequest::unsetproductId()
{
    productIdIsSet_ = false;
}

}
}
}
}
}


