

#include "huaweicloud/projectman/v4/model/WorkTableIssuseListResponseBody_parent_issue.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkTableIssuseListResponseBody_parent_issue::WorkTableIssuseListResponseBody_parent_issue()
{
    id_ = 0;
    idIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
}

WorkTableIssuseListResponseBody_parent_issue::~WorkTableIssuseListResponseBody_parent_issue() = default;

void WorkTableIssuseListResponseBody_parent_issue::validate()
{
}

web::json::value WorkTableIssuseListResponseBody_parent_issue::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }

    return val;
}
bool WorkTableIssuseListResponseBody_parent_issue::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    return ok;
}


int32_t WorkTableIssuseListResponseBody_parent_issue::getId() const
{
    return id_;
}

void WorkTableIssuseListResponseBody_parent_issue::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_parent_issue::idIsSet() const
{
    return idIsSet_;
}

void WorkTableIssuseListResponseBody_parent_issue::unsetid()
{
    idIsSet_ = false;
}

std::string WorkTableIssuseListResponseBody_parent_issue::getSubject() const
{
    return subject_;
}

void WorkTableIssuseListResponseBody_parent_issue::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_parent_issue::subjectIsSet() const
{
    return subjectIsSet_;
}

void WorkTableIssuseListResponseBody_parent_issue::unsetsubject()
{
    subjectIsSet_ = false;
}

}
}
}
}
}


