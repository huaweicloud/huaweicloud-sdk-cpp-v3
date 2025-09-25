

#include "huaweicloud/codehub/v3/model/ListMergeChangesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListMergeChangesRequest::ListMergeChangesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = "";
    mergeRequestIidIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    ignoreWhitespaceChange_ = false;
    ignoreWhitespaceChangeIsSet_ = false;
    forceEncode_ = false;
    forceEncodeIsSet_ = false;
    view_ = "";
    viewIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
}

ListMergeChangesRequest::~ListMergeChangesRequest() = default;

void ListMergeChangesRequest::validate()
{
}

web::json::value ListMergeChangesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(ignoreWhitespaceChangeIsSet_) {
        val[utility::conversions::to_string_t("ignore_whitespace_change")] = ModelBase::toJson(ignoreWhitespaceChange_);
    }
    if(forceEncodeIsSet_) {
        val[utility::conversions::to_string_t("force_encode")] = ModelBase::toJson(forceEncode_);
    }
    if(viewIsSet_) {
        val[utility::conversions::to_string_t("view")] = ModelBase::toJson(view_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }

    return val;
}
bool ListMergeChangesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_iid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestIid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ignore_whitespace_change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ignore_whitespace_change"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIgnoreWhitespaceChange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_encode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_encode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceEncode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setView(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
        }
    }
    return ok;
}


int32_t ListMergeChangesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeChangesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeChangesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeChangesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListMergeChangesRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ListMergeChangesRequest::setMergeRequestIid(const std::string& value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ListMergeChangesRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ListMergeChangesRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

std::string ListMergeChangesRequest::getFilePath() const
{
    return filePath_;
}

void ListMergeChangesRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ListMergeChangesRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void ListMergeChangesRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

bool ListMergeChangesRequest::isIgnoreWhitespaceChange() const
{
    return ignoreWhitespaceChange_;
}

void ListMergeChangesRequest::setIgnoreWhitespaceChange(bool value)
{
    ignoreWhitespaceChange_ = value;
    ignoreWhitespaceChangeIsSet_ = true;
}

bool ListMergeChangesRequest::ignoreWhitespaceChangeIsSet() const
{
    return ignoreWhitespaceChangeIsSet_;
}

void ListMergeChangesRequest::unsetignoreWhitespaceChange()
{
    ignoreWhitespaceChangeIsSet_ = false;
}

bool ListMergeChangesRequest::isForceEncode() const
{
    return forceEncode_;
}

void ListMergeChangesRequest::setForceEncode(bool value)
{
    forceEncode_ = value;
    forceEncodeIsSet_ = true;
}

bool ListMergeChangesRequest::forceEncodeIsSet() const
{
    return forceEncodeIsSet_;
}

void ListMergeChangesRequest::unsetforceEncode()
{
    forceEncodeIsSet_ = false;
}

std::string ListMergeChangesRequest::getView() const
{
    return view_;
}

void ListMergeChangesRequest::setView(const std::string& value)
{
    view_ = value;
    viewIsSet_ = true;
}

bool ListMergeChangesRequest::viewIsSet() const
{
    return viewIsSet_;
}

void ListMergeChangesRequest::unsetview()
{
    viewIsSet_ = false;
}

std::string ListMergeChangesRequest::getCommitId() const
{
    return commitId_;
}

void ListMergeChangesRequest::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool ListMergeChangesRequest::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void ListMergeChangesRequest::unsetcommitId()
{
    commitIdIsSet_ = false;
}

}
}
}
}
}


