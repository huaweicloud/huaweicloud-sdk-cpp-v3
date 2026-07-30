

#include "huaweicloud/modelarts/v1/model/WorkflowServicePackege.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowServicePackege::WorkflowServicePackege()
{
    packageId_ = "";
    packageIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    workflowId_ = "";
    workflowIdIsSet_ = false;
    orderIsSet_ = false;
    consumeLimit_ = 0L;
    consumeLimitIsSet_ = false;
    currentConsume_ = 0L;
    currentConsumeIsSet_ = false;
    currentDate_ = "";
    currentDateIsSet_ = false;
    limitEnable_ = false;
    limitEnableIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
}

WorkflowServicePackege::~WorkflowServicePackege() = default;

void WorkflowServicePackege::validate()
{
}

web::json::value WorkflowServicePackege::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packageIdIsSet_) {
        val[utility::conversions::to_string_t("package_id")] = ModelBase::toJson(packageId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(consumeLimitIsSet_) {
        val[utility::conversions::to_string_t("consume_limit")] = ModelBase::toJson(consumeLimit_);
    }
    if(currentConsumeIsSet_) {
        val[utility::conversions::to_string_t("current_consume")] = ModelBase::toJson(currentConsume_);
    }
    if(currentDateIsSet_) {
        val[utility::conversions::to_string_t("current_date")] = ModelBase::toJson(currentDate_);
    }
    if(limitEnableIsSet_) {
        val[utility::conversions::to_string_t("limit_enable")] = ModelBase::toJson(limitEnable_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}
bool WorkflowServicePackege::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("package_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            WorkflowPoolOrder refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consume_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consume_limit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsumeLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_consume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_consume"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentConsume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    return ok;
}


std::string WorkflowServicePackege::getPackageId() const
{
    return packageId_;
}

void WorkflowServicePackege::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool WorkflowServicePackege::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void WorkflowServicePackege::unsetpackageId()
{
    packageIdIsSet_ = false;
}

std::string WorkflowServicePackege::getStatus() const
{
    return status_;
}

void WorkflowServicePackege::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool WorkflowServicePackege::statusIsSet() const
{
    return statusIsSet_;
}

void WorkflowServicePackege::unsetstatus()
{
    statusIsSet_ = false;
}

std::string WorkflowServicePackege::getPoolId() const
{
    return poolId_;
}

void WorkflowServicePackege::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool WorkflowServicePackege::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void WorkflowServicePackege::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string WorkflowServicePackege::getServiceId() const
{
    return serviceId_;
}

void WorkflowServicePackege::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool WorkflowServicePackege::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void WorkflowServicePackege::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string WorkflowServicePackege::getWorkflowId() const
{
    return workflowId_;
}

void WorkflowServicePackege::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool WorkflowServicePackege::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void WorkflowServicePackege::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

WorkflowPoolOrder WorkflowServicePackege::getOrder() const
{
    return order_;
}

void WorkflowServicePackege::setOrder(const WorkflowPoolOrder& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool WorkflowServicePackege::orderIsSet() const
{
    return orderIsSet_;
}

void WorkflowServicePackege::unsetorder()
{
    orderIsSet_ = false;
}

int64_t WorkflowServicePackege::getConsumeLimit() const
{
    return consumeLimit_;
}

void WorkflowServicePackege::setConsumeLimit(int64_t value)
{
    consumeLimit_ = value;
    consumeLimitIsSet_ = true;
}

bool WorkflowServicePackege::consumeLimitIsSet() const
{
    return consumeLimitIsSet_;
}

void WorkflowServicePackege::unsetconsumeLimit()
{
    consumeLimitIsSet_ = false;
}

int64_t WorkflowServicePackege::getCurrentConsume() const
{
    return currentConsume_;
}

void WorkflowServicePackege::setCurrentConsume(int64_t value)
{
    currentConsume_ = value;
    currentConsumeIsSet_ = true;
}

bool WorkflowServicePackege::currentConsumeIsSet() const
{
    return currentConsumeIsSet_;
}

void WorkflowServicePackege::unsetcurrentConsume()
{
    currentConsumeIsSet_ = false;
}

std::string WorkflowServicePackege::getCurrentDate() const
{
    return currentDate_;
}

void WorkflowServicePackege::setCurrentDate(const std::string& value)
{
    currentDate_ = value;
    currentDateIsSet_ = true;
}

bool WorkflowServicePackege::currentDateIsSet() const
{
    return currentDateIsSet_;
}

void WorkflowServicePackege::unsetcurrentDate()
{
    currentDateIsSet_ = false;
}

bool WorkflowServicePackege::isLimitEnable() const
{
    return limitEnable_;
}

void WorkflowServicePackege::setLimitEnable(bool value)
{
    limitEnable_ = value;
    limitEnableIsSet_ = true;
}

bool WorkflowServicePackege::limitEnableIsSet() const
{
    return limitEnableIsSet_;
}

void WorkflowServicePackege::unsetlimitEnable()
{
    limitEnableIsSet_ = false;
}

std::string WorkflowServicePackege::getCreatedAt() const
{
    return createdAt_;
}

void WorkflowServicePackege::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool WorkflowServicePackege::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void WorkflowServicePackege::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


