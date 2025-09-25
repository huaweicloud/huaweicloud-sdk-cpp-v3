

#include "huaweicloud/gaussdbforopengauss/v3/model/BatchSetBackupPolicyFailedRecordResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BatchSetBackupPolicyFailedRecordResult::BatchSetBackupPolicyFailedRecordResult()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

BatchSetBackupPolicyFailedRecordResult::~BatchSetBackupPolicyFailedRecordResult() = default;

void BatchSetBackupPolicyFailedRecordResult::validate()
{
}

web::json::value BatchSetBackupPolicyFailedRecordResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool BatchSetBackupPolicyFailedRecordResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}


std::string BatchSetBackupPolicyFailedRecordResult::getInstanceId() const
{
    return instanceId_;
}

void BatchSetBackupPolicyFailedRecordResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BatchSetBackupPolicyFailedRecordResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BatchSetBackupPolicyFailedRecordResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string BatchSetBackupPolicyFailedRecordResult::getErrorMessage() const
{
    return errorMessage_;
}

void BatchSetBackupPolicyFailedRecordResult::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool BatchSetBackupPolicyFailedRecordResult::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void BatchSetBackupPolicyFailedRecordResult::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


