

#include "huaweicloud/codeartsdeploy/v2/model/BatchUpdateApplicationPermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




BatchUpdateApplicationPermissionsResponse::BatchUpdateApplicationPermissionsResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

BatchUpdateApplicationPermissionsResponse::~BatchUpdateApplicationPermissionsResponse() = default;

void BatchUpdateApplicationPermissionsResponse::validate()
{
}

web::json::value BatchUpdateApplicationPermissionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool BatchUpdateApplicationPermissionsResponse::fromJson(const web::json::value& val)
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


std::string BatchUpdateApplicationPermissionsResponse::getStatus() const
{
    return status_;
}

void BatchUpdateApplicationPermissionsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchUpdateApplicationPermissionsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchUpdateApplicationPermissionsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


