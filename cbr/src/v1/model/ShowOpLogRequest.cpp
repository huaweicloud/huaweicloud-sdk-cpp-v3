

#include "huaweicloud/cbr/v1/model/ShowOpLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowOpLogRequest::ShowOpLogRequest()
{
    operationLogId_ = "";
    operationLogIdIsSet_ = false;
}

ShowOpLogRequest::~ShowOpLogRequest() = default;

void ShowOpLogRequest::validate()
{
}

web::json::value ShowOpLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationLogIdIsSet_) {
        val[utility::conversions::to_string_t("operation_log_id")] = ModelBase::toJson(operationLogId_);
    }

    return val;
}
bool ShowOpLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operation_log_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_log_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationLogId(refVal);
        }
    }
    return ok;
}


std::string ShowOpLogRequest::getOperationLogId() const
{
    return operationLogId_;
}

void ShowOpLogRequest::setOperationLogId(const std::string& value)
{
    operationLogId_ = value;
    operationLogIdIsSet_ = true;
}

bool ShowOpLogRequest::operationLogIdIsSet() const
{
    return operationLogIdIsSet_;
}

void ShowOpLogRequest::unsetoperationLogId()
{
    operationLogIdIsSet_ = false;
}

}
}
}
}
}


