

#include "huaweicloud/projectman/v4/model/DeleteIssueNoteResult_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteIssueNoteResult_result::DeleteIssueNoteResult_result()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteIssueNoteResult_result::~DeleteIssueNoteResult_result() = default;

void DeleteIssueNoteResult_result::validate()
{
}

web::json::value DeleteIssueNoteResult_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteIssueNoteResult_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string DeleteIssueNoteResult_result::getStatus() const
{
    return status_;
}

void DeleteIssueNoteResult_result::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteIssueNoteResult_result::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteIssueNoteResult_result::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


