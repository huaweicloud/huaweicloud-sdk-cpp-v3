

#include "huaweicloud/codeartsrepo/v4/model/DeleteBranchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DeleteBranchResponse::DeleteBranchResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteBranchResponse::~DeleteBranchResponse() = default;

void DeleteBranchResponse::validate()
{
}

web::json::value DeleteBranchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteBranchResponse::fromJson(const web::json::value& val)
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


std::string DeleteBranchResponse::getStatus() const
{
    return status_;
}

void DeleteBranchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteBranchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteBranchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


