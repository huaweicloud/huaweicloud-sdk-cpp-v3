

#include "huaweicloud/codeartsrepo/v4/model/ListDiscussionTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListDiscussionTemplatesResponse::ListDiscussionTemplatesResponse()
{
    bodyIsSet_ = false;
}

ListDiscussionTemplatesResponse::~ListDiscussionTemplatesResponse() = default;

void ListDiscussionTemplatesResponse::validate()
{
}

web::json::value ListDiscussionTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListDiscussionTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<DiscussionTemplateDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<DiscussionTemplateDto>& ListDiscussionTemplatesResponse::getBody()
{
    return body_;
}

void ListDiscussionTemplatesResponse::setBody(const std::vector<DiscussionTemplateDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListDiscussionTemplatesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListDiscussionTemplatesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


