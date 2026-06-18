

#include "huaweicloud/codeartsrepo/v4/model/ListGroupProtectedBranchesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupProtectedBranchesResponse::ListGroupProtectedBranchesResponse()
{
    bodyIsSet_ = false;
}

ListGroupProtectedBranchesResponse::~ListGroupProtectedBranchesResponse() = default;

void ListGroupProtectedBranchesResponse::validate()
{
}

web::json::value ListGroupProtectedBranchesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListGroupProtectedBranchesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupProtectedBranchApiDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<GroupProtectedBranchApiDto>& ListGroupProtectedBranchesResponse::getBody()
{
    return body_;
}

void ListGroupProtectedBranchesResponse::setBody(const std::vector<GroupProtectedBranchApiDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupProtectedBranchesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupProtectedBranchesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


