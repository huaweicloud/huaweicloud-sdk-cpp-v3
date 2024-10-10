

#include "huaweicloud/drs/v5/model/ChangeToPeriodResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ChangeToPeriodResponse::ChangeToPeriodResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
}

ChangeToPeriodResponse::~ChangeToPeriodResponse() = default;

void ChangeToPeriodResponse::validate()
{
}

web::json::value ChangeToPeriodResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool ChangeToPeriodResponse::fromJson(const web::json::value& val)
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


std::string ChangeToPeriodResponse::getOrderId() const
{
    return orderId_;
}

void ChangeToPeriodResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ChangeToPeriodResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ChangeToPeriodResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


