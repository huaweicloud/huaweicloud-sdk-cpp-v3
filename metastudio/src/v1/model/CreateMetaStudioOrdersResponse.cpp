

#include "huaweicloud/metastudio/v1/model/CreateMetaStudioOrdersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateMetaStudioOrdersResponse::CreateMetaStudioOrdersResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateMetaStudioOrdersResponse::~CreateMetaStudioOrdersResponse() = default;

void CreateMetaStudioOrdersResponse::validate()
{
}

web::json::value CreateMetaStudioOrdersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateMetaStudioOrdersResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CreateMetaStudioOrdersResponse::getOrderId() const
{
    return orderId_;
}

void CreateMetaStudioOrdersResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateMetaStudioOrdersResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateMetaStudioOrdersResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string CreateMetaStudioOrdersResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateMetaStudioOrdersResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateMetaStudioOrdersResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateMetaStudioOrdersResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


