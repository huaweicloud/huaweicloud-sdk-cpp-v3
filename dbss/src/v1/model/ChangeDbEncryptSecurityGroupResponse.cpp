

#include "huaweicloud/dbss/v1/model/ChangeDbEncryptSecurityGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ChangeDbEncryptSecurityGroupResponse::ChangeDbEncryptSecurityGroupResponse()
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

ChangeDbEncryptSecurityGroupResponse::~ChangeDbEncryptSecurityGroupResponse() = default;

void ChangeDbEncryptSecurityGroupResponse::validate()
{
}

web::json::value ChangeDbEncryptSecurityGroupResponse::toJson() const
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
bool ChangeDbEncryptSecurityGroupResponse::fromJson(const web::json::value& val)
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


int32_t ChangeDbEncryptSecurityGroupResponse::getCode() const
{
    return code_;
}

void ChangeDbEncryptSecurityGroupResponse::setCode(int32_t value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ChangeDbEncryptSecurityGroupResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ChangeDbEncryptSecurityGroupResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string ChangeDbEncryptSecurityGroupResponse::getDescription() const
{
    return description_;
}

void ChangeDbEncryptSecurityGroupResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ChangeDbEncryptSecurityGroupResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ChangeDbEncryptSecurityGroupResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ChangeDbEncryptSecurityGroupResponse::getOrderId() const
{
    return orderId_;
}

void ChangeDbEncryptSecurityGroupResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ChangeDbEncryptSecurityGroupResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ChangeDbEncryptSecurityGroupResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ChangeDbEncryptSecurityGroupResponse::getTaskId() const
{
    return taskId_;
}

void ChangeDbEncryptSecurityGroupResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ChangeDbEncryptSecurityGroupResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ChangeDbEncryptSecurityGroupResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


