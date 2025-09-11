

#include "huaweicloud/dbss/v1/model/CreateDbEncryptInstancePeriodResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateDbEncryptInstancePeriodResponse::CreateDbEncryptInstancePeriodResponse()
{
    code_ = "";
    codeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

CreateDbEncryptInstancePeriodResponse::~CreateDbEncryptInstancePeriodResponse() = default;

void CreateDbEncryptInstancePeriodResponse::validate()
{
}

web::json::value CreateDbEncryptInstancePeriodResponse::toJson() const
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
bool CreateDbEncryptInstancePeriodResponse::fromJson(const web::json::value& val)
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


std::string CreateDbEncryptInstancePeriodResponse::getCode() const
{
    return code_;
}

void CreateDbEncryptInstancePeriodResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool CreateDbEncryptInstancePeriodResponse::codeIsSet() const
{
    return codeIsSet_;
}

void CreateDbEncryptInstancePeriodResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string CreateDbEncryptInstancePeriodResponse::getDescription() const
{
    return description_;
}

void CreateDbEncryptInstancePeriodResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateDbEncryptInstancePeriodResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateDbEncryptInstancePeriodResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateDbEncryptInstancePeriodResponse::getOrderId() const
{
    return orderId_;
}

void CreateDbEncryptInstancePeriodResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateDbEncryptInstancePeriodResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateDbEncryptInstancePeriodResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


