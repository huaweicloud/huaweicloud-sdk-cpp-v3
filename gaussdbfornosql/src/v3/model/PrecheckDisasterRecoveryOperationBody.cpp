

#include "huaweicloud/gaussdbfornosql/v3/model/PrecheckDisasterRecoveryOperationBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




PrecheckDisasterRecoveryOperationBody::PrecheckDisasterRecoveryOperationBody()
{
    operation_ = "";
    operationIsSet_ = false;
    disasterRecoveryInstanceIsSet_ = false;
}

PrecheckDisasterRecoveryOperationBody::~PrecheckDisasterRecoveryOperationBody() = default;

void PrecheckDisasterRecoveryOperationBody::validate()
{
}

web::json::value PrecheckDisasterRecoveryOperationBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationIsSet_) {
        val[utility::conversions::to_string_t("operation")] = ModelBase::toJson(operation_);
    }
    if(disasterRecoveryInstanceIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_instance")] = ModelBase::toJson(disasterRecoveryInstance_);
    }

    return val;
}
bool PrecheckDisasterRecoveryOperationBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("disaster_recovery_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_recovery_instance"));
        if(!fieldValue.is_null())
        {
            PrecheckDisasterRecoveryInstance refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterRecoveryInstance(refVal);
        }
    }
    return ok;
}


std::string PrecheckDisasterRecoveryOperationBody::getOperation() const
{
    return operation_;
}

void PrecheckDisasterRecoveryOperationBody::setOperation(const std::string& value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool PrecheckDisasterRecoveryOperationBody::operationIsSet() const
{
    return operationIsSet_;
}

void PrecheckDisasterRecoveryOperationBody::unsetoperation()
{
    operationIsSet_ = false;
}

PrecheckDisasterRecoveryInstance PrecheckDisasterRecoveryOperationBody::getDisasterRecoveryInstance() const
{
    return disasterRecoveryInstance_;
}

void PrecheckDisasterRecoveryOperationBody::setDisasterRecoveryInstance(const PrecheckDisasterRecoveryInstance& value)
{
    disasterRecoveryInstance_ = value;
    disasterRecoveryInstanceIsSet_ = true;
}

bool PrecheckDisasterRecoveryOperationBody::disasterRecoveryInstanceIsSet() const
{
    return disasterRecoveryInstanceIsSet_;
}

void PrecheckDisasterRecoveryOperationBody::unsetdisasterRecoveryInstance()
{
    disasterRecoveryInstanceIsSet_ = false;
}

}
}
}
}
}


