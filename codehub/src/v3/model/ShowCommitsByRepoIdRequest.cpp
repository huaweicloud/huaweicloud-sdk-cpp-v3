

#include "huaweicloud/codehub/v3/model/ShowCommitsByRepoIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowCommitsByRepoIdRequest::ShowCommitsByRepoIdRequest()
{
    author_ = "";
    authorIsSet_ = false;
    beginDate_ = "";
    beginDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    pageIndex_ = 0;
    pageIndexIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    refName_ = "";
    refNameIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    statFormat_ = "";
    statFormatIsSet_ = false;
}

ShowCommitsByRepoIdRequest::~ShowCommitsByRepoIdRequest() = default;

void ShowCommitsByRepoIdRequest::validate()
{
}

web::json::value ShowCommitsByRepoIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(beginDateIsSet_) {
        val[utility::conversions::to_string_t("begin_date")] = ModelBase::toJson(beginDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(refNameIsSet_) {
        val[utility::conversions::to_string_t("ref_name")] = ModelBase::toJson(refName_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(statFormatIsSet_) {
        val[utility::conversions::to_string_t("stat_format")] = ModelBase::toJson(statFormat_);
    }

    return val;
}
bool ShowCommitsByRepoIdRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageIndex(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stat_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stat_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatFormat(refVal);
        }
    }
    return ok;
}


std::string ShowCommitsByRepoIdRequest::getAuthor() const
{
    return author_;
}

void ShowCommitsByRepoIdRequest::setAuthor(const std::string& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool ShowCommitsByRepoIdRequest::authorIsSet() const
{
    return authorIsSet_;
}

void ShowCommitsByRepoIdRequest::unsetauthor()
{
    authorIsSet_ = false;
}

std::string ShowCommitsByRepoIdRequest::getBeginDate() const
{
    return beginDate_;
}

void ShowCommitsByRepoIdRequest::setBeginDate(const std::string& value)
{
    beginDate_ = value;
    beginDateIsSet_ = true;
}

bool ShowCommitsByRepoIdRequest::beginDateIsSet() const
{
    return beginDateIsSet_;
}

void ShowCommitsByRepoIdRequest::unsetbeginDate()
{
    beginDateIsSet_ = false;
}

std::string ShowCommitsByRepoIdRequest::getEndDate() const
{
    return endDate_;
}

void ShowCommitsByRepoIdRequest::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ShowCommitsByRepoIdRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ShowCommitsByRepoIdRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

std::string ShowCommitsByRepoIdRequest::getMessage() const
{
    return message_;
}

void ShowCommitsByRepoIdRequest::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowCommitsByRepoIdRequest::messageIsSet() const
{
    return messageIsSet_;
}

void ShowCommitsByRepoIdRequest::unsetmessage()
{
    messageIsSet_ = false;
}

int32_t ShowCommitsByRepoIdRequest::getPageIndex() const
{
    return pageIndex_;
}

void ShowCommitsByRepoIdRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ShowCommitsByRepoIdRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ShowCommitsByRepoIdRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ShowCommitsByRepoIdRequest::getPageSize() const
{
    return pageSize_;
}

void ShowCommitsByRepoIdRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowCommitsByRepoIdRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowCommitsByRepoIdRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ShowCommitsByRepoIdRequest::getPath() const
{
    return path_;
}

void ShowCommitsByRepoIdRequest::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ShowCommitsByRepoIdRequest::pathIsSet() const
{
    return pathIsSet_;
}

void ShowCommitsByRepoIdRequest::unsetpath()
{
    pathIsSet_ = false;
}

std::string ShowCommitsByRepoIdRequest::getRefName() const
{
    return refName_;
}

void ShowCommitsByRepoIdRequest::setRefName(const std::string& value)
{
    refName_ = value;
    refNameIsSet_ = true;
}

bool ShowCommitsByRepoIdRequest::refNameIsSet() const
{
    return refNameIsSet_;
}

void ShowCommitsByRepoIdRequest::unsetrefName()
{
    refNameIsSet_ = false;
}

int32_t ShowCommitsByRepoIdRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowCommitsByRepoIdRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowCommitsByRepoIdRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowCommitsByRepoIdRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowCommitsByRepoIdRequest::getStatFormat() const
{
    return statFormat_;
}

void ShowCommitsByRepoIdRequest::setStatFormat(const std::string& value)
{
    statFormat_ = value;
    statFormatIsSet_ = true;
}

bool ShowCommitsByRepoIdRequest::statFormatIsSet() const
{
    return statFormatIsSet_;
}

void ShowCommitsByRepoIdRequest::unsetstatFormat()
{
    statFormatIsSet_ = false;
}

}
}
}
}
}


