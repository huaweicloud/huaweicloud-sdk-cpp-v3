

#include "huaweicloud/codehub/v4/model/DeleteProtectedBranchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeleteProtectedBranchResponse::DeleteProtectedBranchResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteProtectedBranchResponse::~DeleteProtectedBranchResponse() = default;

void DeleteProtectedBranchResponse::validate()
{
}

web::json::value DeleteProtectedBranchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteProtectedBranchResponse::fromJson(const web::json::value& val)
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


std::string DeleteProtectedBranchResponse::getStatus() const
{
    return status_;
}

void DeleteProtectedBranchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteProtectedBranchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteProtectedBranchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


