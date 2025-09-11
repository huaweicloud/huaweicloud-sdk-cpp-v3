

#include "huaweicloud/dbss/v1/model/CreateDbOmInstancePeriodResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateDbOmInstancePeriodResponse::CreateDbOmInstancePeriodResponse()
{
    code_ = "";
    codeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

CreateDbOmInstancePeriodResponse::~CreateDbOmInstancePeriodResponse() = default;

void CreateDbOmInstancePeriodResponse::validate()
{
}

web::json::value CreateDbOmInstancePeriodResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool CreateDbOmInstancePeriodResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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


std::string CreateDbOmInstancePeriodResponse::getCode() const
{
    return code_;
}

void CreateDbOmInstancePeriodResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool CreateDbOmInstancePeriodResponse::codeIsSet() const
{
    return codeIsSet_;
}

void CreateDbOmInstancePeriodResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string CreateDbOmInstancePeriodResponse::getDescription() const
{
    return description_;
}

void CreateDbOmInstancePeriodResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateDbOmInstancePeriodResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateDbOmInstancePeriodResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateDbOmInstancePeriodResponse::getOrderId() const
{
    return orderId_;
}

void CreateDbOmInstancePeriodResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateDbOmInstancePeriodResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateDbOmInstancePeriodResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


