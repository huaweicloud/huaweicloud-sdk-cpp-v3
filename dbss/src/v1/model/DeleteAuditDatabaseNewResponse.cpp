

#include "huaweicloud/dbss/v1/model/DeleteAuditDatabaseNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditDatabaseNewResponse::DeleteAuditDatabaseNewResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteAuditDatabaseNewResponse::~DeleteAuditDatabaseNewResponse() = default;

void DeleteAuditDatabaseNewResponse::validate()
{
}

web::json::value DeleteAuditDatabaseNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteAuditDatabaseNewResponse::fromJson(const web::json::value& val)
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


std::string DeleteAuditDatabaseNewResponse::getStatus() const
{
    return status_;
}

void DeleteAuditDatabaseNewResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteAuditDatabaseNewResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteAuditDatabaseNewResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


