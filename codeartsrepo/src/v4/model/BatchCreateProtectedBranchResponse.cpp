

#include "huaweicloud/codeartsrepo/v4/model/BatchCreateProtectedBranchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BatchCreateProtectedBranchResponse::BatchCreateProtectedBranchResponse()
{
    bodyIsSet_ = false;
}

BatchCreateProtectedBranchResponse::~BatchCreateProtectedBranchResponse() = default;

void BatchCreateProtectedBranchResponse::validate()
{
}

web::json::value BatchCreateProtectedBranchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateProtectedBranchResponse::fromJson(const web::json::value& val)
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


std::vector<RepositoryProtectedBranchDto>& BatchCreateProtectedBranchResponse::getBody()
{
    return body_;
}

void BatchCreateProtectedBranchResponse::setBody(const std::vector<RepositoryProtectedBranchDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateProtectedBranchResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateProtectedBranchResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


