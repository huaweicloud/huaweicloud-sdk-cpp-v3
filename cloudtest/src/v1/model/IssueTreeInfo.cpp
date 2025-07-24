

#include "huaweicloud/cloudtest/v1/model/IssueTreeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IssueTreeInfo::IssueTreeInfo()
{
    owner_ = "";
    ownerIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    iterationId_ = "";
    iterationIdIsSet_ = false;
    severityId_ = "";
    severityIdIsSet_ = false;
    statusId_ = "";
    statusIdIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    statusIds_ = "";
    statusIdsIsSet_ = false;
    moduleIds_ = "";
    moduleIdsIsSet_ = false;
    piFilterIsSet_ = false;
    statusNamesIsSet_ = false;
}

IssueTreeInfo::~IssueTreeInfo() = default;

void IssueTreeInfo::validate()
{
}

web::json::value IssueTreeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(keyWordIsSet_) {
        val[utility::conversions::to_string_t("key_word")] = ModelBase::toJson(keyWord_);
    }
    if(iterationIdIsSet_) {
        val[utility::conversions::to_string_t("iteration_id")] = ModelBase::toJson(iterationId_);
    }
    if(severityIdIsSet_) {
        val[utility::conversions::to_string_t("severity_id")] = ModelBase::toJson(severityId_);
    }
    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(statusIdsIsSet_) {
        val[utility::conversions::to_string_t("status_ids")] = ModelBase::toJson(statusIds_);
    }
    if(moduleIdsIsSet_) {
        val[utility::conversions::to_string_t("module_ids")] = ModelBase::toJson(moduleIds_);
    }
    if(piFilterIsSet_) {
        val[utility::conversions::to_string_t("pi_filter")] = ModelBase::toJson(piFilter_);
    }
    if(statusNamesIsSet_) {
        val[utility::conversions::to_string_t("status_names")] = ModelBase::toJson(statusNames_);
    }

    return val;
}
bool IssueTreeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_word"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_word"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyWord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iteration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverityId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pi_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pi_filter"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueListPiFilterInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPiFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusNames(refVal);
        }
    }
    return ok;
}


std::string IssueTreeInfo::getOwner() const
{
    return owner_;
}

void IssueTreeInfo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool IssueTreeInfo::ownerIsSet() const
{
    return ownerIsSet_;
}

void IssueTreeInfo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string IssueTreeInfo::getIssueId() const
{
    return issueId_;
}

void IssueTreeInfo::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool IssueTreeInfo::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void IssueTreeInfo::unsetissueId()
{
    issueIdIsSet_ = false;
}

int32_t IssueTreeInfo::getPageNo() const
{
    return pageNo_;
}

void IssueTreeInfo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool IssueTreeInfo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void IssueTreeInfo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t IssueTreeInfo::getPageSize() const
{
    return pageSize_;
}

void IssueTreeInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool IssueTreeInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void IssueTreeInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string IssueTreeInfo::getKeyWord() const
{
    return keyWord_;
}

void IssueTreeInfo::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool IssueTreeInfo::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void IssueTreeInfo::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

std::string IssueTreeInfo::getIterationId() const
{
    return iterationId_;
}

void IssueTreeInfo::setIterationId(const std::string& value)
{
    iterationId_ = value;
    iterationIdIsSet_ = true;
}

bool IssueTreeInfo::iterationIdIsSet() const
{
    return iterationIdIsSet_;
}

void IssueTreeInfo::unsetiterationId()
{
    iterationIdIsSet_ = false;
}

std::string IssueTreeInfo::getSeverityId() const
{
    return severityId_;
}

void IssueTreeInfo::setSeverityId(const std::string& value)
{
    severityId_ = value;
    severityIdIsSet_ = true;
}

bool IssueTreeInfo::severityIdIsSet() const
{
    return severityIdIsSet_;
}

void IssueTreeInfo::unsetseverityId()
{
    severityIdIsSet_ = false;
}

std::string IssueTreeInfo::getStatusId() const
{
    return statusId_;
}

void IssueTreeInfo::setStatusId(const std::string& value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool IssueTreeInfo::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void IssueTreeInfo::unsetstatusId()
{
    statusIdIsSet_ = false;
}

std::string IssueTreeInfo::getModuleId() const
{
    return moduleId_;
}

void IssueTreeInfo::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool IssueTreeInfo::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void IssueTreeInfo::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string IssueTreeInfo::getStatusIds() const
{
    return statusIds_;
}

void IssueTreeInfo::setStatusIds(const std::string& value)
{
    statusIds_ = value;
    statusIdsIsSet_ = true;
}

bool IssueTreeInfo::statusIdsIsSet() const
{
    return statusIdsIsSet_;
}

void IssueTreeInfo::unsetstatusIds()
{
    statusIdsIsSet_ = false;
}

std::string IssueTreeInfo::getModuleIds() const
{
    return moduleIds_;
}

void IssueTreeInfo::setModuleIds(const std::string& value)
{
    moduleIds_ = value;
    moduleIdsIsSet_ = true;
}

bool IssueTreeInfo::moduleIdsIsSet() const
{
    return moduleIdsIsSet_;
}

void IssueTreeInfo::unsetmoduleIds()
{
    moduleIdsIsSet_ = false;
}

std::vector<IssueListPiFilterInfo>& IssueTreeInfo::getPiFilter()
{
    return piFilter_;
}

void IssueTreeInfo::setPiFilter(const std::vector<IssueListPiFilterInfo>& value)
{
    piFilter_ = value;
    piFilterIsSet_ = true;
}

bool IssueTreeInfo::piFilterIsSet() const
{
    return piFilterIsSet_;
}

void IssueTreeInfo::unsetpiFilter()
{
    piFilterIsSet_ = false;
}

std::vector<std::string>& IssueTreeInfo::getStatusNames()
{
    return statusNames_;
}

void IssueTreeInfo::setStatusNames(const std::vector<std::string>& value)
{
    statusNames_ = value;
    statusNamesIsSet_ = true;
}

bool IssueTreeInfo::statusNamesIsSet() const
{
    return statusNamesIsSet_;
}

void IssueTreeInfo::unsetstatusNames()
{
    statusNamesIsSet_ = false;
}

}
}
}
}
}


