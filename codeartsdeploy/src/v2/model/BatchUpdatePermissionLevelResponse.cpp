

#include "huaweicloud/codeartsdeploy/v2/model/BatchUpdatePermissionLevelResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




BatchUpdatePermissionLevelResponse::BatchUpdatePermissionLevelResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

BatchUpdatePermissionLevelResponse::~BatchUpdatePermissionLevelResponse() = default;

void BatchUpdatePermissionLevelResponse::validate()
{
}

web::json::value BatchUpdatePermissionLevelResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool BatchUpdatePermissionLevelResponse::fromJson(const web::json::value& val)
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


std::string BatchUpdatePermissionLevelResponse::getStatus() const
{
    return status_;
}

void BatchUpdatePermissionLevelResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchUpdatePermissionLevelResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchUpdatePermissionLevelResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


