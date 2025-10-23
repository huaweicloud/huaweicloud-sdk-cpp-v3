

#include "huaweicloud/codehub/v4/model/ListProjectProtectedBranchesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListProjectProtectedBranchesResponse::ListProjectProtectedBranchesResponse()
{
    bodyIsSet_ = false;
}

ListProjectProtectedBranchesResponse::~ListProjectProtectedBranchesResponse() = default;

void ListProjectProtectedBranchesResponse::validate()
{
}

web::json::value ListProjectProtectedBranchesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListProjectProtectedBranchesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectProtectedBranchApiDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ProjectProtectedBranchApiDto>& ListProjectProtectedBranchesResponse::getBody()
{
    return body_;
}

void ListProjectProtectedBranchesResponse::setBody(const std::vector<ProjectProtectedBranchApiDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectProtectedBranchesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectProtectedBranchesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


