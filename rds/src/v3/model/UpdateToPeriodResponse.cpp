

#include "huaweicloud/rds/v3/model/UpdateToPeriodResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateToPeriodResponse::UpdateToPeriodResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
}

UpdateToPeriodResponse::~UpdateToPeriodResponse() = default;

void UpdateToPeriodResponse::validate()
{
}

web::json::value UpdateToPeriodResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool UpdateToPeriodResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string UpdateToPeriodResponse::getOrderId() const
{
    return orderId_;
}

void UpdateToPeriodResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool UpdateToPeriodResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void UpdateToPeriodResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


