

#include "huaweicloud/projectman/v4/model/SprintSnapshotsCreateParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




SprintSnapshotsCreateParam::SprintSnapshotsCreateParam()
{
    title_ = "";
    titleIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
}

SprintSnapshotsCreateParam::~SprintSnapshotsCreateParam() = default;

void SprintSnapshotsCreateParam::validate()
{
}

web::json::value SprintSnapshotsCreateParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }

    return val;
}
bool SprintSnapshotsCreateParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    return ok;
}


std::string SprintSnapshotsCreateParam::getTitle() const
{
    return title_;
}

void SprintSnapshotsCreateParam::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool SprintSnapshotsCreateParam::titleIsSet() const
{
    return titleIsSet_;
}

void SprintSnapshotsCreateParam::unsettitle()
{
    titleIsSet_ = false;
}

std::string SprintSnapshotsCreateParam::getIssueId() const
{
    return issueId_;
}

void SprintSnapshotsCreateParam::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool SprintSnapshotsCreateParam::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void SprintSnapshotsCreateParam::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string SprintSnapshotsCreateParam::getCategory() const
{
    return category_;
}

void SprintSnapshotsCreateParam::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool SprintSnapshotsCreateParam::categoryIsSet() const
{
    return categoryIsSet_;
}

void SprintSnapshotsCreateParam::unsetcategory()
{
    categoryIsSet_ = false;
}

}
}
}
}
}


