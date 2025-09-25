

#include "huaweicloud/codehub/v4/model/ListBranchRelatedWorkItemsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListBranchRelatedWorkItemsResponse::ListBranchRelatedWorkItemsResponse()
{
    bodyIsSet_ = false;
}

ListBranchRelatedWorkItemsResponse::~ListBranchRelatedWorkItemsResponse() = default;

void ListBranchRelatedWorkItemsResponse::validate()
{
}

web::json::value ListBranchRelatedWorkItemsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListBranchRelatedWorkItemsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkItemSimpleDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<WorkItemSimpleDto>& ListBranchRelatedWorkItemsResponse::getBody()
{
    return body_;
}

void ListBranchRelatedWorkItemsResponse::setBody(const std::vector<WorkItemSimpleDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListBranchRelatedWorkItemsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListBranchRelatedWorkItemsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


