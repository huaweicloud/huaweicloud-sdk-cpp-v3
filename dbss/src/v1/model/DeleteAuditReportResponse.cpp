

#include "huaweicloud/dbss/v1/model/DeleteAuditReportResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditReportResponse::DeleteAuditReportResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteAuditReportResponse::~DeleteAuditReportResponse() = default;

void DeleteAuditReportResponse::validate()
{
}

web::json::value DeleteAuditReportResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteAuditReportResponse::fromJson(const web::json::value& val)
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


std::string DeleteAuditReportResponse::getStatus() const
{
    return status_;
}

void DeleteAuditReportResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteAuditReportResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteAuditReportResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


