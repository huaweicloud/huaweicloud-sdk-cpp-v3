

#include "huaweicloud/modelarts/v1/model/WorkflowServicePackage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowServicePackage::WorkflowServicePackage()
{
    status_ = "";
    statusIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    workflowId_ = "";
    workflowIdIsSet_ = false;
    orderIsSet_ = false;
    consumeLimit_ = 0;
    consumeLimitIsSet_ = false;
    currentConsume_ = 0;
    currentConsumeIsSet_ = false;
    currentDate_ = "";
    currentDateIsSet_ = false;
    limitEnable_ = false;
    limitEnableIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    packageId_ = "";
    packageIdIsSet_ = false;
}

WorkflowServicePackage::~WorkflowServicePackage() = default;

void WorkflowServicePackage::validate()
{
}

web::json::value WorkflowServicePackage::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(packageIdIsSet_) {
        val[utility::conversions::to_string_t("package_id")] = ModelBase::toJson(packageId_);
    }

    return val;
}
bool WorkflowServicePackage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsumeLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_consume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_consume"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("package_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageId(refVal);
        }
    }
    return ok;
}


std::string WorkflowServicePackage::getStatus() const
{
    return status_;
}

void WorkflowServicePackage::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool WorkflowServicePackage::statusIsSet() const
{
    return statusIsSet_;
}

void WorkflowServicePackage::unsetstatus()
{
    statusIsSet_ = false;
}

std::string WorkflowServicePackage::getPoolId() const
{
    return poolId_;
}

void WorkflowServicePackage::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool WorkflowServicePackage::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void WorkflowServicePackage::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string WorkflowServicePackage::getServiceId() const
{
    return serviceId_;
}

void WorkflowServicePackage::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool WorkflowServicePackage::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void WorkflowServicePackage::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string WorkflowServicePackage::getWorkflowId() const
{
    return workflowId_;
}

void WorkflowServicePackage::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool WorkflowServicePackage::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void WorkflowServicePackage::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

WorkflowPoolOrder WorkflowServicePackage::getOrder() const
{
    return order_;
}

void WorkflowServicePackage::setOrder(const WorkflowPoolOrder& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool WorkflowServicePackage::orderIsSet() const
{
    return orderIsSet_;
}

void WorkflowServicePackage::unsetorder()
{
    orderIsSet_ = false;
}

int32_t WorkflowServicePackage::getConsumeLimit() const
{
    return consumeLimit_;
}

void WorkflowServicePackage::setConsumeLimit(int32_t value)
{
    consumeLimit_ = value;
    consumeLimitIsSet_ = true;
}

bool WorkflowServicePackage::consumeLimitIsSet() const
{
    return consumeLimitIsSet_;
}

void WorkflowServicePackage::unsetconsumeLimit()
{
    consumeLimitIsSet_ = false;
}

int32_t WorkflowServicePackage::getCurrentConsume() const
{
    return currentConsume_;
}

void WorkflowServicePackage::setCurrentConsume(int32_t value)
{
    currentConsume_ = value;
    currentConsumeIsSet_ = true;
}

bool WorkflowServicePackage::currentConsumeIsSet() const
{
    return currentConsumeIsSet_;
}

void WorkflowServicePackage::unsetcurrentConsume()
{
    currentConsumeIsSet_ = false;
}

std::string WorkflowServicePackage::getCurrentDate() const
{
    return currentDate_;
}

void WorkflowServicePackage::setCurrentDate(const std::string& value)
{
    currentDate_ = value;
    currentDateIsSet_ = true;
}

bool WorkflowServicePackage::currentDateIsSet() const
{
    return currentDateIsSet_;
}

void WorkflowServicePackage::unsetcurrentDate()
{
    currentDateIsSet_ = false;
}

bool WorkflowServicePackage::isLimitEnable() const
{
    return limitEnable_;
}

void WorkflowServicePackage::setLimitEnable(bool value)
{
    limitEnable_ = value;
    limitEnableIsSet_ = true;
}

bool WorkflowServicePackage::limitEnableIsSet() const
{
    return limitEnableIsSet_;
}

void WorkflowServicePackage::unsetlimitEnable()
{
    limitEnableIsSet_ = false;
}

std::string WorkflowServicePackage::getCreatedAt() const
{
    return createdAt_;
}

void WorkflowServicePackage::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool WorkflowServicePackage::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void WorkflowServicePackage::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string WorkflowServicePackage::getPackageId() const
{
    return packageId_;
}

void WorkflowServicePackage::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool WorkflowServicePackage::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void WorkflowServicePackage::unsetpackageId()
{
    packageIdIsSet_ = false;
}

}
}
}
}
}


