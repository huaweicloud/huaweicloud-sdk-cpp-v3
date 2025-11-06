

#include "huaweicloud/codeartsrepo/v4/model/ListManageableGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListManageableGroupsResponse::ListManageableGroupsResponse()
{
    bodyIsSet_ = false;
}

ListManageableGroupsResponse::~ListManageableGroupsResponse() = default;

void ListManageableGroupsResponse::validate()
{
}

web::json::value ListManageableGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListManageableGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ManageableGroupDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ManageableGroupDto>& ListManageableGroupsResponse::getBody()
{
    return body_;
}

void ListManageableGroupsResponse::setBody(const std::vector<ManageableGroupDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListManageableGroupsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListManageableGroupsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


