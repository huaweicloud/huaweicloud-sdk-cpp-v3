

#include "huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestCanBeAssignedUsersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectMergeRequestCanBeAssignedUsersResponse::ListProjectMergeRequestCanBeAssignedUsersResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListProjectMergeRequestCanBeAssignedUsersResponse::~ListProjectMergeRequestCanBeAssignedUsersResponse() = default;

void ListProjectMergeRequestCanBeAssignedUsersResponse::validate()
{
}

web::json::value ListProjectMergeRequestCanBeAssignedUsersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ListProjectMergeRequestCanBeAssignedUsersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<UserBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::vector<UserBasicDto>& ListProjectMergeRequestCanBeAssignedUsersResponse::getBody()
{
    return body_;
}

void ListProjectMergeRequestCanBeAssignedUsersResponse::setBody(const std::vector<UserBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectMergeRequestCanBeAssignedUsersResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectMergeRequestCanBeAssignedUsersResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListProjectMergeRequestCanBeAssignedUsersResponse::getXTotal() const
{
    return xTotal_;
}

void ListProjectMergeRequestCanBeAssignedUsersResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListProjectMergeRequestCanBeAssignedUsersResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListProjectMergeRequestCanBeAssignedUsersResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


