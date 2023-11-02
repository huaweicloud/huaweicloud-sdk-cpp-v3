

#include "huaweicloud/dbss/v1/model/CreateInstancesPeriodOrderResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateInstancesPeriodOrderResponse::CreateInstancesPeriodOrderResponse()
{
    description_ = "";
    descriptionIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

CreateInstancesPeriodOrderResponse::~CreateInstancesPeriodOrderResponse() = default;

void CreateInstancesPeriodOrderResponse::validate()
{
}

web::json::value CreateInstancesPeriodOrderResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool CreateInstancesPeriodOrderResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
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


std::string CreateInstancesPeriodOrderResponse::getDescription() const
{
    return description_;
}

void CreateInstancesPeriodOrderResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateInstancesPeriodOrderResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateInstancesPeriodOrderResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateInstancesPeriodOrderResponse::getCode() const
{
    return code_;
}

void CreateInstancesPeriodOrderResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool CreateInstancesPeriodOrderResponse::codeIsSet() const
{
    return codeIsSet_;
}

void CreateInstancesPeriodOrderResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string CreateInstancesPeriodOrderResponse::getOrderId() const
{
    return orderId_;
}

void CreateInstancesPeriodOrderResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateInstancesPeriodOrderResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateInstancesPeriodOrderResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


