

#include "huaweicloud/dbss/v1/model/BatchAddAuditWhitelistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BatchAddAuditWhitelistResponse::BatchAddAuditWhitelistResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

BatchAddAuditWhitelistResponse::~BatchAddAuditWhitelistResponse() = default;

void BatchAddAuditWhitelistResponse::validate()
{
}

web::json::value BatchAddAuditWhitelistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool BatchAddAuditWhitelistResponse::fromJson(const web::json::value& val)
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


std::string BatchAddAuditWhitelistResponse::getStatus() const
{
    return status_;
}

void BatchAddAuditWhitelistResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchAddAuditWhitelistResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchAddAuditWhitelistResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


