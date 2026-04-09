

#include "huaweicloud/gaussdbforopengauss/v3/model/ChangeDemand2PeriodResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ChangeDemand2PeriodResponse::ChangeDemand2PeriodResponse()
{
    orderIdsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ChangeDemand2PeriodResponse::~ChangeDemand2PeriodResponse() = default;

void ChangeDemand2PeriodResponse::validate()
{
}

web::json::value ChangeDemand2PeriodResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdsIsSet_) {
        val[utility::conversions::to_string_t("order_ids")] = ModelBase::toJson(orderIds_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ChangeDemand2PeriodResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("order_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ChangeDemand2PeriodResponse::getOrderIds()
{
    return orderIds_;
}

void ChangeDemand2PeriodResponse::setOrderIds(const std::vector<std::string>& value)
{
    orderIds_ = value;
    orderIdsIsSet_ = true;
}

bool ChangeDemand2PeriodResponse::orderIdsIsSet() const
{
    return orderIdsIsSet_;
}

void ChangeDemand2PeriodResponse::unsetorderIds()
{
    orderIdsIsSet_ = false;
}

std::string ChangeDemand2PeriodResponse::getXRequestId() const
{
    return xRequestId_;
}

void ChangeDemand2PeriodResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ChangeDemand2PeriodResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ChangeDemand2PeriodResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


