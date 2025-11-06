

#include "huaweicloud/codeartsrepo/v4/model/UpdateRepositoryResourcePermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateRepositoryResourcePermissionsResponse::UpdateRepositoryResourcePermissionsResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

UpdateRepositoryResourcePermissionsResponse::~UpdateRepositoryResourcePermissionsResponse() = default;

void UpdateRepositoryResourcePermissionsResponse::validate()
{
}

web::json::value UpdateRepositoryResourcePermissionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateRepositoryResourcePermissionsResponse::fromJson(const web::json::value& val)
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


std::string UpdateRepositoryResourcePermissionsResponse::getStatus() const
{
    return status_;
}

void UpdateRepositoryResourcePermissionsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateRepositoryResourcePermissionsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateRepositoryResourcePermissionsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


