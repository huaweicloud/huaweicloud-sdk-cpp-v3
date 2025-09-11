

#include "huaweicloud/dbss/v1/model/ConfirmUpgradeAuditResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ConfirmUpgradeAuditResponse::ConfirmUpgradeAuditResponse()
{
    code_ = 0;
    codeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ConfirmUpgradeAuditResponse::~ConfirmUpgradeAuditResponse() = default;

void ConfirmUpgradeAuditResponse::validate()
{
}

web::json::value ConfirmUpgradeAuditResponse::toJson() const
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
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool ConfirmUpgradeAuditResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


int32_t ConfirmUpgradeAuditResponse::getCode() const
{
    return code_;
}

void ConfirmUpgradeAuditResponse::setCode(int32_t value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ConfirmUpgradeAuditResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ConfirmUpgradeAuditResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string ConfirmUpgradeAuditResponse::getDescription() const
{
    return description_;
}

void ConfirmUpgradeAuditResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ConfirmUpgradeAuditResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ConfirmUpgradeAuditResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ConfirmUpgradeAuditResponse::getOrderId() const
{
    return orderId_;
}

void ConfirmUpgradeAuditResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ConfirmUpgradeAuditResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ConfirmUpgradeAuditResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ConfirmUpgradeAuditResponse::getTaskId() const
{
    return taskId_;
}

void ConfirmUpgradeAuditResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ConfirmUpgradeAuditResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ConfirmUpgradeAuditResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


