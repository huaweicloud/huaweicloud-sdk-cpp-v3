

#include "huaweicloud/cce/v3/model/BatchChangeNodeToPeriodResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




BatchChangeNodeToPeriodResponse::BatchChangeNodeToPeriodResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
}

BatchChangeNodeToPeriodResponse::~BatchChangeNodeToPeriodResponse() = default;

void BatchChangeNodeToPeriodResponse::validate()
{
}

web::json::value BatchChangeNodeToPeriodResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("orderId")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool BatchChangeNodeToPeriodResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("orderId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("orderId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    return ok;
}


std::string BatchChangeNodeToPeriodResponse::getOrderId() const
{
    return orderId_;
}

void BatchChangeNodeToPeriodResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool BatchChangeNodeToPeriodResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void BatchChangeNodeToPeriodResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


