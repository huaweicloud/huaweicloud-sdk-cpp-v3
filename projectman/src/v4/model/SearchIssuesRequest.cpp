

#include "huaweicloud/projectman/v4/model/SearchIssuesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




SearchIssuesRequest::SearchIssuesRequest()
{
    bodyIsSet_ = false;
}

SearchIssuesRequest::~SearchIssuesRequest() = default;

void SearchIssuesRequest::validate()
{
}

web::json::value SearchIssuesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SearchIssuesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListWorkTableIssueRequestV4RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListWorkTableIssueRequestV4RequestBody SearchIssuesRequest::getBody() const
{
    return body_;
}

void SearchIssuesRequest::setBody(const ListWorkTableIssueRequestV4RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchIssuesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchIssuesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


