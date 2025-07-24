

#include "huaweicloud/cloudtest/v1/model/IssueListFilterInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IssueListFilterInfo::IssueListFilterInfo()
{
    iterationIdsIsSet_ = false;
    piSprintsIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    statusId_ = "";
    statusIdIsSet_ = false;
}

IssueListFilterInfo::~IssueListFilterInfo() = default;

void IssueListFilterInfo::validate()
{
}

web::json::value IssueListFilterInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iterationIdsIsSet_) {
        val[utility::conversions::to_string_t("iteration_ids")] = ModelBase::toJson(iterationIds_);
    }
    if(piSprintsIsSet_) {
        val[utility::conversions::to_string_t("pi_sprints")] = ModelBase::toJson(piSprints_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }

    return val;
}
bool IssueListFilterInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iteration_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pi_sprints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pi_sprints"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueListPiFilterInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPiSprints(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& IssueListFilterInfo::getIterationIds()
{
    return iterationIds_;
}

void IssueListFilterInfo::setIterationIds(const std::vector<std::string>& value)
{
    iterationIds_ = value;
    iterationIdsIsSet_ = true;
}

bool IssueListFilterInfo::iterationIdsIsSet() const
{
    return iterationIdsIsSet_;
}

void IssueListFilterInfo::unsetiterationIds()
{
    iterationIdsIsSet_ = false;
}

std::vector<IssueListPiFilterInfo>& IssueListFilterInfo::getPiSprints()
{
    return piSprints_;
}

void IssueListFilterInfo::setPiSprints(const std::vector<IssueListPiFilterInfo>& value)
{
    piSprints_ = value;
    piSprintsIsSet_ = true;
}

bool IssueListFilterInfo::piSprintsIsSet() const
{
    return piSprintsIsSet_;
}

void IssueListFilterInfo::unsetpiSprints()
{
    piSprintsIsSet_ = false;
}

std::string IssueListFilterInfo::getSubject() const
{
    return subject_;
}

void IssueListFilterInfo::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool IssueListFilterInfo::subjectIsSet() const
{
    return subjectIsSet_;
}

void IssueListFilterInfo::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string IssueListFilterInfo::getModuleId() const
{
    return moduleId_;
}

void IssueListFilterInfo::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool IssueListFilterInfo::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void IssueListFilterInfo::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string IssueListFilterInfo::getStatusId() const
{
    return statusId_;
}

void IssueListFilterInfo::setStatusId(const std::string& value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool IssueListFilterInfo::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void IssueListFilterInfo::unsetstatusId()
{
    statusIdIsSet_ = false;
}

}
}
}
}
}


