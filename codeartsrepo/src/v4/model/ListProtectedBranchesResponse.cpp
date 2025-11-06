

#include "huaweicloud/codeartsrepo/v4/model/ListProtectedBranchesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProtectedBranchesResponse::ListProtectedBranchesResponse()
{
    bodyIsSet_ = false;
}

ListProtectedBranchesResponse::~ListProtectedBranchesResponse() = default;

void ListProtectedBranchesResponse::validate()
{
}

web::json::value ListProtectedBranchesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListProtectedBranchesResponse::fromJson(const web::json::value& val)
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


std::vector<RepositoryProtectedBranchDto>& ListProtectedBranchesResponse::getBody()
{
    return body_;
}

void ListProtectedBranchesResponse::setBody(const std::vector<RepositoryProtectedBranchDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProtectedBranchesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProtectedBranchesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


