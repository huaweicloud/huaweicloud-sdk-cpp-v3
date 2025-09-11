

#include "huaweicloud/dbss/v1/model/BatchDeleteAuditScopeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BatchDeleteAuditScopeResponse::BatchDeleteAuditScopeResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

BatchDeleteAuditScopeResponse::~BatchDeleteAuditScopeResponse() = default;

void BatchDeleteAuditScopeResponse::validate()
{
}

web::json::value BatchDeleteAuditScopeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool BatchDeleteAuditScopeResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string BatchDeleteAuditScopeResponse::getStatus() const
{
    return status_;
}

void BatchDeleteAuditScopeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchDeleteAuditScopeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchDeleteAuditScopeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


