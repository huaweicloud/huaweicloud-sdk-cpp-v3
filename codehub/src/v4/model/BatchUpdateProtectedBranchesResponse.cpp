

#include "huaweicloud/codehub/v4/model/BatchUpdateProtectedBranchesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchUpdateProtectedBranchesResponse::BatchUpdateProtectedBranchesResponse()
{
    bodyIsSet_ = false;
}

BatchUpdateProtectedBranchesResponse::~BatchUpdateProtectedBranchesResponse() = default;

void BatchUpdateProtectedBranchesResponse::validate()
{
}

web::json::value BatchUpdateProtectedBranchesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateProtectedBranchesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryProtectedBranchDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<RepositoryProtectedBranchDto>& BatchUpdateProtectedBranchesResponse::getBody()
{
    return body_;
}

void BatchUpdateProtectedBranchesResponse::setBody(const std::vector<RepositoryProtectedBranchDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateProtectedBranchesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateProtectedBranchesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


