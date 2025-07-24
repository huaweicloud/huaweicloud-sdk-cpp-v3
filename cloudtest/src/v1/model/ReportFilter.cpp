

#include "huaweicloud/cloudtest/v1/model/ReportFilter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ReportFilter::ReportFilter()
{
    creatorIds_ = "";
    creatorIdsIsSet_ = false;
    ownerIds_ = "";
    ownerIdsIsSet_ = false;
    ranks_ = "";
    ranksIsSet_ = false;
    releaseIds_ = "";
    releaseIdsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    moduleIds_ = "";
    moduleIdsIsSet_ = false;
    results_ = "";
    resultsIsSet_ = false;
    labelIds_ = "";
    labelIdsIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    isAssociateIssue_ = "";
    isAssociateIssueIsSet_ = false;
}

ReportFilter::~ReportFilter() = default;

void ReportFilter::validate()
{
}

web::json::value ReportFilter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creatorIdsIsSet_) {
        val[utility::conversions::to_string_t("creatorIds")] = ModelBase::toJson(creatorIds_);
    }
    if(ownerIdsIsSet_) {
        val[utility::conversions::to_string_t("ownerIds")] = ModelBase::toJson(ownerIds_);
    }
    if(ranksIsSet_) {
        val[utility::conversions::to_string_t("ranks")] = ModelBase::toJson(ranks_);
    }
    if(releaseIdsIsSet_) {
        val[utility::conversions::to_string_t("releaseIds")] = ModelBase::toJson(releaseIds_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(moduleIdsIsSet_) {
        val[utility::conversions::to_string_t("moduleIds")] = ModelBase::toJson(moduleIds_);
    }
    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }
    if(labelIdsIsSet_) {
        val[utility::conversions::to_string_t("labelIds")] = ModelBase::toJson(labelIds_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }
    if(isAssociateIssueIsSet_) {
        val[utility::conversions::to_string_t("isAssociateIssue")] = ModelBase::toJson(isAssociateIssue_);
    }

    return val;
}
bool ReportFilter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("creatorIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creatorIds"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ownerIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownerIds"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ranks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ranks"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRanks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("releaseIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("releaseIds"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("moduleIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("moduleIds"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labelIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labelIds"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAssociateIssue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAssociateIssue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAssociateIssue(refVal);
        }
    }
    return ok;
}


std::string ReportFilter::getCreatorIds() const
{
    return creatorIds_;
}

void ReportFilter::setCreatorIds(const std::string& value)
{
    creatorIds_ = value;
    creatorIdsIsSet_ = true;
}

bool ReportFilter::creatorIdsIsSet() const
{
    return creatorIdsIsSet_;
}

void ReportFilter::unsetcreatorIds()
{
    creatorIdsIsSet_ = false;
}

std::string ReportFilter::getOwnerIds() const
{
    return ownerIds_;
}

void ReportFilter::setOwnerIds(const std::string& value)
{
    ownerIds_ = value;
    ownerIdsIsSet_ = true;
}

bool ReportFilter::ownerIdsIsSet() const
{
    return ownerIdsIsSet_;
}

void ReportFilter::unsetownerIds()
{
    ownerIdsIsSet_ = false;
}

std::string ReportFilter::getRanks() const
{
    return ranks_;
}

void ReportFilter::setRanks(const std::string& value)
{
    ranks_ = value;
    ranksIsSet_ = true;
}

bool ReportFilter::ranksIsSet() const
{
    return ranksIsSet_;
}

void ReportFilter::unsetranks()
{
    ranksIsSet_ = false;
}

std::string ReportFilter::getReleaseIds() const
{
    return releaseIds_;
}

void ReportFilter::setReleaseIds(const std::string& value)
{
    releaseIds_ = value;
    releaseIdsIsSet_ = true;
}

bool ReportFilter::releaseIdsIsSet() const
{
    return releaseIdsIsSet_;
}

void ReportFilter::unsetreleaseIds()
{
    releaseIdsIsSet_ = false;
}

std::string ReportFilter::getStatus() const
{
    return status_;
}

void ReportFilter::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ReportFilter::statusIsSet() const
{
    return statusIsSet_;
}

void ReportFilter::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ReportFilter::getModuleIds() const
{
    return moduleIds_;
}

void ReportFilter::setModuleIds(const std::string& value)
{
    moduleIds_ = value;
    moduleIdsIsSet_ = true;
}

bool ReportFilter::moduleIdsIsSet() const
{
    return moduleIdsIsSet_;
}

void ReportFilter::unsetmoduleIds()
{
    moduleIdsIsSet_ = false;
}

std::string ReportFilter::getResults() const
{
    return results_;
}

void ReportFilter::setResults(const std::string& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool ReportFilter::resultsIsSet() const
{
    return resultsIsSet_;
}

void ReportFilter::unsetresults()
{
    resultsIsSet_ = false;
}

std::string ReportFilter::getLabelIds() const
{
    return labelIds_;
}

void ReportFilter::setLabelIds(const std::string& value)
{
    labelIds_ = value;
    labelIdsIsSet_ = true;
}

bool ReportFilter::labelIdsIsSet() const
{
    return labelIdsIsSet_;
}

void ReportFilter::unsetlabelIds()
{
    labelIdsIsSet_ = false;
}

std::string ReportFilter::getStartTime() const
{
    return startTime_;
}

void ReportFilter::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ReportFilter::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ReportFilter::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ReportFilter::getEndTime() const
{
    return endTime_;
}

void ReportFilter::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ReportFilter::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ReportFilter::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ReportFilter::getIsAssociateIssue() const
{
    return isAssociateIssue_;
}

void ReportFilter::setIsAssociateIssue(const std::string& value)
{
    isAssociateIssue_ = value;
    isAssociateIssueIsSet_ = true;
}

bool ReportFilter::isAssociateIssueIsSet() const
{
    return isAssociateIssueIsSet_;
}

void ReportFilter::unsetisAssociateIssue()
{
    isAssociateIssueIsSet_ = false;
}

}
}
}
}
}


