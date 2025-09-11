

#include "huaweicloud/dbss/v1/model/DeleteAuditScopeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditScopeResponse::DeleteAuditScopeResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteAuditScopeResponse::~DeleteAuditScopeResponse() = default;

void DeleteAuditScopeResponse::validate()
{
}

web::json::value DeleteAuditScopeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteAuditScopeResponse::fromJson(const web::json::value& val)
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


std::string DeleteAuditScopeResponse::getStatus() const
{
    return status_;
}

void DeleteAuditScopeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteAuditScopeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteAuditScopeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


