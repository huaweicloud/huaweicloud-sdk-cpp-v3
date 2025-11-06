

#include "huaweicloud/codeartsrepo/v4/model/ListGroupAddableMembersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupAddableMembersResponse::ListGroupAddableMembersResponse()
{
    bodyIsSet_ = false;
}

ListGroupAddableMembersResponse::~ListGroupAddableMembersResponse() = default;

void ListGroupAddableMembersResponse::validate()
{
}

web::json::value ListGroupAddableMembersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListGroupAddableMembersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupBatchAddMemberDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<GroupBatchAddMemberDto>& ListGroupAddableMembersResponse::getBody()
{
    return body_;
}

void ListGroupAddableMembersResponse::setBody(const std::vector<GroupBatchAddMemberDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupAddableMembersResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupAddableMembersResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


