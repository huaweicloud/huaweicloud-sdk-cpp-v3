

#include "huaweicloud/projectman/v4/model/DeleteScrumMyIssueNotesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteScrumMyIssueNotesRequest::DeleteScrumMyIssueNotesRequest()
{
    bodyIsSet_ = false;
}

DeleteScrumMyIssueNotesRequest::~DeleteScrumMyIssueNotesRequest() = default;

void DeleteScrumMyIssueNotesRequest::validate()
{
}

web::json::value DeleteScrumMyIssueNotesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteScrumMyIssueNotesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteIssueNoteParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DeleteIssueNoteParam DeleteScrumMyIssueNotesRequest::getBody() const
{
    return body_;
}

void DeleteScrumMyIssueNotesRequest::setBody(const DeleteIssueNoteParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteScrumMyIssueNotesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteScrumMyIssueNotesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


