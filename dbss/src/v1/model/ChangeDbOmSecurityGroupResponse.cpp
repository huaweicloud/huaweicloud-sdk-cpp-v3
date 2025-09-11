

#include "huaweicloud/dbss/v1/model/ChangeDbOmSecurityGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ChangeDbOmSecurityGroupResponse::ChangeDbOmSecurityGroupResponse()
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

ChangeDbOmSecurityGroupResponse::~ChangeDbOmSecurityGroupResponse() = default;

void ChangeDbOmSecurityGroupResponse::validate()
{
}

web::json::value ChangeDbOmSecurityGroupResponse::toJson() const
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
bool ChangeDbOmSecurityGroupResponse::fromJson(const web::json::value& val)
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


int32_t ChangeDbOmSecurityGroupResponse::getCode() const
{
    return code_;
}

void ChangeDbOmSecurityGroupResponse::setCode(int32_t value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ChangeDbOmSecurityGroupResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ChangeDbOmSecurityGroupResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string ChangeDbOmSecurityGroupResponse::getDescription() const
{
    return description_;
}

void ChangeDbOmSecurityGroupResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ChangeDbOmSecurityGroupResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ChangeDbOmSecurityGroupResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ChangeDbOmSecurityGroupResponse::getOrderId() const
{
    return orderId_;
}

void ChangeDbOmSecurityGroupResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ChangeDbOmSecurityGroupResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ChangeDbOmSecurityGroupResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ChangeDbOmSecurityGroupResponse::getTaskId() const
{
    return taskId_;
}

void ChangeDbOmSecurityGroupResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ChangeDbOmSecurityGroupResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ChangeDbOmSecurityGroupResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


