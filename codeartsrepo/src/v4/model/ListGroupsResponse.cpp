

#include "huaweicloud/codeartsrepo/v4/model/ListGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupsResponse::ListGroupsResponse()
{
    bodyIsSet_ = false;
}

ListGroupsResponse::~ListGroupsResponse() = default;

void ListGroupsResponse::validate()
{
}

web::json::value ListGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupBaseDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<GroupBaseDto>& ListGroupsResponse::getBody()
{
    return body_;
}

void ListGroupsResponse::setBody(const std::vector<GroupBaseDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


