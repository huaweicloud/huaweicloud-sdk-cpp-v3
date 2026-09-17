

#include "huaweicloud/projectman/v4/model/UpdateScrumMyIssueNotesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateScrumMyIssueNotesRequest::UpdateScrumMyIssueNotesRequest()
{
    bodyIsSet_ = false;
}

UpdateScrumMyIssueNotesRequest::~UpdateScrumMyIssueNotesRequest() = default;

void UpdateScrumMyIssueNotesRequest::validate()
{
}

web::json::value UpdateScrumMyIssueNotesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateScrumMyIssueNotesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateCommentsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateCommentsRequest UpdateScrumMyIssueNotesRequest::getBody() const
{
    return body_;
}

void UpdateScrumMyIssueNotesRequest::setBody(const UpdateCommentsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateScrumMyIssueNotesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateScrumMyIssueNotesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


