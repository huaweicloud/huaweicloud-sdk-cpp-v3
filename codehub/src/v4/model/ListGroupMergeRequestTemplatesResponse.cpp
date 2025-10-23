

#include "huaweicloud/codehub/v4/model/ListGroupMergeRequestTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListGroupMergeRequestTemplatesResponse::ListGroupMergeRequestTemplatesResponse()
{
    bodyIsSet_ = false;
}

ListGroupMergeRequestTemplatesResponse::~ListGroupMergeRequestTemplatesResponse() = default;

void ListGroupMergeRequestTemplatesResponse::validate()
{
}

web::json::value ListGroupMergeRequestTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListGroupMergeRequestTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupMergeRequestTemplateDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<GroupMergeRequestTemplateDto>& ListGroupMergeRequestTemplatesResponse::getBody()
{
    return body_;
}

void ListGroupMergeRequestTemplatesResponse::setBody(const std::vector<GroupMergeRequestTemplateDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupMergeRequestTemplatesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupMergeRequestTemplatesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


