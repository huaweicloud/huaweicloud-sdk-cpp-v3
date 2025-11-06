

#include "huaweicloud/codeartsrepo/v4/model/BatchDeleteProtectedBranchesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BatchDeleteProtectedBranchesResponse::BatchDeleteProtectedBranchesResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

BatchDeleteProtectedBranchesResponse::~BatchDeleteProtectedBranchesResponse() = default;

void BatchDeleteProtectedBranchesResponse::validate()
{
}

web::json::value BatchDeleteProtectedBranchesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool BatchDeleteProtectedBranchesResponse::fromJson(const web::json::value& val)
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


std::string BatchDeleteProtectedBranchesResponse::getStatus() const
{
    return status_;
}

void BatchDeleteProtectedBranchesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchDeleteProtectedBranchesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchDeleteProtectedBranchesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


