

#include "huaweicloud/modelarts/v1/model/CreateWorkflowPurchasePoolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkflowPurchasePoolResponse::CreateWorkflowPurchasePoolResponse()
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

CreateWorkflowPurchasePoolResponse::~CreateWorkflowPurchasePoolResponse() = default;

void CreateWorkflowPurchasePoolResponse::validate()
{
}

web::json::value CreateWorkflowPurchasePoolResponse::toJson() const
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
bool CreateWorkflowPurchasePoolResponse::fromJson(const web::json::value& val)
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


std::string CreateWorkflowPurchasePoolResponse::getStatus() const
{
    return status_;
}

void CreateWorkflowPurchasePoolResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateWorkflowPurchasePoolResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateWorkflowPurchasePoolResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateWorkflowPurchasePoolResponse::getPoolId() const
{
    return poolId_;
}

void CreateWorkflowPurchasePoolResponse::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool CreateWorkflowPurchasePoolResponse::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void CreateWorkflowPurchasePoolResponse::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string CreateWorkflowPurchasePoolResponse::getServiceId() const
{
    return serviceId_;
}

void CreateWorkflowPurchasePoolResponse::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool CreateWorkflowPurchasePoolResponse::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void CreateWorkflowPurchasePoolResponse::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string CreateWorkflowPurchasePoolResponse::getWorkflowId() const
{
    return workflowId_;
}

void CreateWorkflowPurchasePoolResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool CreateWorkflowPurchasePoolResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void CreateWorkflowPurchasePoolResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

WorkflowPoolOrder CreateWorkflowPurchasePoolResponse::getOrder() const
{
    return order_;
}

void CreateWorkflowPurchasePoolResponse::setOrder(const WorkflowPoolOrder& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool CreateWorkflowPurchasePoolResponse::orderIsSet() const
{
    return orderIsSet_;
}

void CreateWorkflowPurchasePoolResponse::unsetorder()
{
    orderIsSet_ = false;
}

int32_t CreateWorkflowPurchasePoolResponse::getConsumeLimit() const
{
    return consumeLimit_;
}

void CreateWorkflowPurchasePoolResponse::setConsumeLimit(int32_t value)
{
    consumeLimit_ = value;
    consumeLimitIsSet_ = true;
}

bool CreateWorkflowPurchasePoolResponse::consumeLimitIsSet() const
{
    return consumeLimitIsSet_;
}

void CreateWorkflowPurchasePoolResponse::unsetconsumeLimit()
{
    consumeLimitIsSet_ = false;
}

int32_t CreateWorkflowPurchasePoolResponse::getCurrentConsume() const
{
    return currentConsume_;
}

void CreateWorkflowPurchasePoolResponse::setCurrentConsume(int32_t value)
{
    currentConsume_ = value;
    currentConsumeIsSet_ = true;
}

bool CreateWorkflowPurchasePoolResponse::currentConsumeIsSet() const
{
    return currentConsumeIsSet_;
}

void CreateWorkflowPurchasePoolResponse::unsetcurrentConsume()
{
    currentConsumeIsSet_ = false;
}

std::string CreateWorkflowPurchasePoolResponse::getCurrentDate() const
{
    return currentDate_;
}

void CreateWorkflowPurchasePoolResponse::setCurrentDate(const std::string& value)
{
    currentDate_ = value;
    currentDateIsSet_ = true;
}

bool CreateWorkflowPurchasePoolResponse::currentDateIsSet() const
{
    return currentDateIsSet_;
}

void CreateWorkflowPurchasePoolResponse::unsetcurrentDate()
{
    currentDateIsSet_ = false;
}

bool CreateWorkflowPurchasePoolResponse::isLimitEnable() const
{
    return limitEnable_;
}

void CreateWorkflowPurchasePoolResponse::setLimitEnable(bool value)
{
    limitEnable_ = value;
    limitEnableIsSet_ = true;
}

bool CreateWorkflowPurchasePoolResponse::limitEnableIsSet() const
{
    return limitEnableIsSet_;
}

void CreateWorkflowPurchasePoolResponse::unsetlimitEnable()
{
    limitEnableIsSet_ = false;
}

std::string CreateWorkflowPurchasePoolResponse::getCreatedAt() const
{
    return createdAt_;
}

void CreateWorkflowPurchasePoolResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateWorkflowPurchasePoolResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateWorkflowPurchasePoolResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CreateWorkflowPurchasePoolResponse::getPackageId() const
{
    return packageId_;
}

void CreateWorkflowPurchasePoolResponse::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool CreateWorkflowPurchasePoolResponse::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void CreateWorkflowPurchasePoolResponse::unsetpackageId()
{
    packageIdIsSet_ = false;
}

}
}
}
}
}


