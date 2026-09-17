

#include "huaweicloud/projectman/v4/model/UpdateScrumIssueNotesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateScrumIssueNotesRequest::UpdateScrumIssueNotesRequest()
{
    bodyIsSet_ = false;
}

UpdateScrumIssueNotesRequest::~UpdateScrumIssueNotesRequest() = default;

void UpdateScrumIssueNotesRequest::validate()
{
}

web::json::value UpdateScrumIssueNotesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateScrumIssueNotesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddCommentsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AddCommentsRequest UpdateScrumIssueNotesRequest::getBody() const
{
    return body_;
}

void UpdateScrumIssueNotesRequest::setBody(const AddCommentsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateScrumIssueNotesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateScrumIssueNotesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


