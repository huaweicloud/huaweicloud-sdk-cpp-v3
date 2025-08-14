

#include "huaweicloud/iotda/v5/model/UpdateProductRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateProductRequest::UpdateProductRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProductRequest::~UpdateProductRequest() = default;

void UpdateProductRequest::validate()
{
}

web::json::value UpdateProductRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateProductRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateProduct refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProductRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateProductRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateProductRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateProductRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateProductRequest::getProductId() const
{
    return productId_;
}

void UpdateProductRequest::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool UpdateProductRequest::productIdIsSet() const
{
    return productIdIsSet_;
}

void UpdateProductRequest::unsetproductId()
{
    productIdIsSet_ = false;
}

UpdateProduct UpdateProductRequest::getBody() const
{
    return body_;
}

void UpdateProductRequest::setBody(const UpdateProduct& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProductRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProductRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


