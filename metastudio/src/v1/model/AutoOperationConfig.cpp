

#include "huaweicloud/metastudio/v1/model/AutoOperationConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AutoOperationConfig::AutoOperationConfig()
{
    operation_ = "";
    operationIsSet_ = false;
    operationTime_ = "";
    operationTimeIsSet_ = false;
}

AutoOperationConfig::~AutoOperationConfig() = default;

void AutoOperationConfig::validate()
{
}

web::json::value AutoOperationConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationIsSet_) {
        val[utility::conversions::to_string_t("operation")] = ModelBase::toJson(operation_);
    }
    if(operationTimeIsSet_) {
        val[utility::conversions::to_string_t("operation_time")] = ModelBase::toJson(operationTime_);
    }

    return val;
}
bool AutoOperationConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationTime(refVal);
        }
    }
    return ok;
}


std::string AutoOperationConfig::getOperation() const
{
    return operation_;
}

void AutoOperationConfig::setOperation(const std::string& value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool AutoOperationConfig::operationIsSet() const
{
    return operationIsSet_;
}

void AutoOperationConfig::unsetoperation()
{
    operationIsSet_ = false;
}

std::string AutoOperationConfig::getOperationTime() const
{
    return operationTime_;
}

void AutoOperationConfig::setOperationTime(const std::string& value)
{
    operationTime_ = value;
    operationTimeIsSet_ = true;
}

bool AutoOperationConfig::operationTimeIsSet() const
{
    return operationTimeIsSet_;
}

void AutoOperationConfig::unsetoperationTime()
{
    operationTimeIsSet_ = false;
}

}
}
}
}
}


