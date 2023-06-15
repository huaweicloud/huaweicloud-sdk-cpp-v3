

#include "huaweicloud/cbr/v1/model/UpdateOrderRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateOrderRequest::UpdateOrderRequest()
{
    orderId_ = "";
    orderIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateOrderRequest::~UpdateOrderRequest() = default;

void UpdateOrderRequest::validate()
{
}

web::json::value UpdateOrderRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateOrderRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CbcUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateOrderRequest::getOrderId() const
{
    return orderId_;
}

void UpdateOrderRequest::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool UpdateOrderRequest::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void UpdateOrderRequest::unsetorderId()
{
    orderIdIsSet_ = false;
}

CbcUpdate UpdateOrderRequest::getBody() const
{
    return body_;
}

void UpdateOrderRequest::setBody(const CbcUpdate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateOrderRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateOrderRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


