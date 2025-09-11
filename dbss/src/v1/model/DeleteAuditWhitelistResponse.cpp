

#include "huaweicloud/dbss/v1/model/DeleteAuditWhitelistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditWhitelistResponse::DeleteAuditWhitelistResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteAuditWhitelistResponse::~DeleteAuditWhitelistResponse() = default;

void DeleteAuditWhitelistResponse::validate()
{
}

web::json::value DeleteAuditWhitelistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteAuditWhitelistResponse::fromJson(const web::json::value& val)
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


std::string DeleteAuditWhitelistResponse::getStatus() const
{
    return status_;
}

void DeleteAuditWhitelistResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteAuditWhitelistResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteAuditWhitelistResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


