

#include "huaweicloud/projectman/v4/model/AttachWikiDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AttachWikiDetail::AttachWikiDetail()
{
    issueId_ = 0;
    issueIdIsSet_ = false;
    wikiTitle_ = "";
    wikiTitleIsSet_ = false;
    wikiAuthorIsSet_ = false;
    projectIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    wikiId_ = "";
    wikiIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
}

AttachWikiDetail::~AttachWikiDetail() = default;

void AttachWikiDetail::validate()
{
}

web::json::value AttachWikiDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(wikiTitleIsSet_) {
        val[utility::conversions::to_string_t("wiki_title")] = ModelBase::toJson(wikiTitle_);
    }
    if(wikiAuthorIsSet_) {
        val[utility::conversions::to_string_t("wiki_author")] = ModelBase::toJson(wikiAuthor_);
    }
    if(projectIsSet_) {
        val[utility::conversions::to_string_t("project")] = ModelBase::toJson(project_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(wikiIdIsSet_) {
        val[utility::conversions::to_string_t("wiki_id")] = ModelBase::toJson(wikiId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }

    return val;
}
bool AttachWikiDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wiki_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wiki_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWikiTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wiki_author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wiki_author"));
        if(!fieldValue.is_null())
        {
            SimpleUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWikiAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project"));
        if(!fieldValue.is_null())
        {
            SimpleProject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wiki_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wiki_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWikiId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    return ok;
}


int32_t AttachWikiDetail::getIssueId() const
{
    return issueId_;
}

void AttachWikiDetail::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool AttachWikiDetail::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void AttachWikiDetail::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string AttachWikiDetail::getWikiTitle() const
{
    return wikiTitle_;
}

void AttachWikiDetail::setWikiTitle(const std::string& value)
{
    wikiTitle_ = value;
    wikiTitleIsSet_ = true;
}

bool AttachWikiDetail::wikiTitleIsSet() const
{
    return wikiTitleIsSet_;
}

void AttachWikiDetail::unsetwikiTitle()
{
    wikiTitleIsSet_ = false;
}

SimpleUser AttachWikiDetail::getWikiAuthor() const
{
    return wikiAuthor_;
}

void AttachWikiDetail::setWikiAuthor(const SimpleUser& value)
{
    wikiAuthor_ = value;
    wikiAuthorIsSet_ = true;
}

bool AttachWikiDetail::wikiAuthorIsSet() const
{
    return wikiAuthorIsSet_;
}

void AttachWikiDetail::unsetwikiAuthor()
{
    wikiAuthorIsSet_ = false;
}

SimpleProject AttachWikiDetail::getProject() const
{
    return project_;
}

void AttachWikiDetail::setProject(const SimpleProject& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool AttachWikiDetail::projectIsSet() const
{
    return projectIsSet_;
}

void AttachWikiDetail::unsetproject()
{
    projectIsSet_ = false;
}

std::string AttachWikiDetail::getCreatedDate() const
{
    return createdDate_;
}

void AttachWikiDetail::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool AttachWikiDetail::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void AttachWikiDetail::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string AttachWikiDetail::getWikiId() const
{
    return wikiId_;
}

void AttachWikiDetail::setWikiId(const std::string& value)
{
    wikiId_ = value;
    wikiIdIsSet_ = true;
}

bool AttachWikiDetail::wikiIdIsSet() const
{
    return wikiIdIsSet_;
}

void AttachWikiDetail::unsetwikiId()
{
    wikiIdIsSet_ = false;
}

std::string AttachWikiDetail::getRegion() const
{
    return region_;
}

void AttachWikiDetail::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool AttachWikiDetail::regionIsSet() const
{
    return regionIsSet_;
}

void AttachWikiDetail::unsetregion()
{
    regionIsSet_ = false;
}

}
}
}
}
}


