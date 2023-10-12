

#include "huaweicloud/cbr/v1/model/ShowOpLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowOpLogResponse::ShowOpLogResponse()
{
    operationLogIsSet_ = false;
}

ShowOpLogResponse::~ShowOpLogResponse() = default;

void ShowOpLogResponse::validate()
{
}

web::json::value ShowOpLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationLogIsSet_) {
        val[utility::conversions::to_string_t("operation_log")] = ModelBase::toJson(operationLog_);
    }

    return val;
}
bool ShowOpLogResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operation_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_log"));
        if(!fieldValue.is_null())
        {
            OperationLog refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationLog(refVal);
        }
    }
    return ok;
}


OperationLog ShowOpLogResponse::getOperationLog() const
{
    return operationLog_;
}

void ShowOpLogResponse::setOperationLog(const OperationLog& value)
{
    operationLog_ = value;
    operationLogIsSet_ = true;
}

bool ShowOpLogResponse::operationLogIsSet() const
{
    return operationLogIsSet_;
}

void ShowOpLogResponse::unsetoperationLog()
{
    operationLogIsSet_ = false;
}

}
}
}
}
}


