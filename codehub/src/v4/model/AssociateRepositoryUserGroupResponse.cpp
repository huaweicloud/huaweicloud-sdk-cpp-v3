

#include "huaweicloud/codehub/v4/model/AssociateRepositoryUserGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




AssociateRepositoryUserGroupResponse::AssociateRepositoryUserGroupResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

AssociateRepositoryUserGroupResponse::~AssociateRepositoryUserGroupResponse() = default;

void AssociateRepositoryUserGroupResponse::validate()
{
}

web::json::value AssociateRepositoryUserGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool AssociateRepositoryUserGroupResponse::fromJson(const web::json::value& val)
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


std::string AssociateRepositoryUserGroupResponse::getStatus() const
{
    return status_;
}

void AssociateRepositoryUserGroupResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AssociateRepositoryUserGroupResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AssociateRepositoryUserGroupResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


