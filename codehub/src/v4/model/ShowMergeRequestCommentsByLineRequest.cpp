

#include "huaweicloud/codehub/v4/model/ShowMergeRequestCommentsByLineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowMergeRequestCommentsByLineRequest::ShowMergeRequestCommentsByLineRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    line_ = 0;
    lineIsSet_ = false;
    withCommitComments_ = false;
    withCommitCommentsIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    view_ = "";
    viewIsSet_ = false;
    baseSha_ = "";
    baseShaIsSet_ = false;
    startSha_ = "";
    startShaIsSet_ = false;
    headSha_ = "";
    headShaIsSet_ = false;
}

ShowMergeRequestCommentsByLineRequest::~ShowMergeRequestCommentsByLineRequest() = default;

void ShowMergeRequestCommentsByLineRequest::validate()
{
}

web::json::value ShowMergeRequestCommentsByLineRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(lineIsSet_) {
        val[utility::conversions::to_string_t("line")] = ModelBase::toJson(line_);
    }
    if(withCommitCommentsIsSet_) {
        val[utility::conversions::to_string_t("with_commit_comments")] = ModelBase::toJson(withCommitComments_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(viewIsSet_) {
        val[utility::conversions::to_string_t("view")] = ModelBase::toJson(view_);
    }
    if(baseShaIsSet_) {
        val[utility::conversions::to_string_t("base_sha")] = ModelBase::toJson(baseSha_);
    }
    if(startShaIsSet_) {
        val[utility::conversions::to_string_t("start_sha")] = ModelBase::toJson(startSha_);
    }
    if(headShaIsSet_) {
        val[utility::conversions::to_string_t("head_sha")] = ModelBase::toJson(headSha_);
    }

    return val;
}
bool ShowMergeRequestCommentsByLineRequest::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestIid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("with_commit_comments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("with_commit_comments"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWithCommitComments(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setView(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("head_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("head_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeadSha(refVal);
        }
    }
    return ok;
}


int32_t ShowMergeRequestCommentsByLineRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowMergeRequestCommentsByLineRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowMergeRequestCommentsByLineRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowMergeRequestCommentsByLineRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ShowMergeRequestCommentsByLineRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ShowMergeRequestCommentsByLineRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ShowMergeRequestCommentsByLineRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ShowMergeRequestCommentsByLineRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

int32_t ShowMergeRequestCommentsByLineRequest::getLine() const
{
    return line_;
}

void ShowMergeRequestCommentsByLineRequest::setLine(int32_t value)
{
    line_ = value;
    lineIsSet_ = true;
}

bool ShowMergeRequestCommentsByLineRequest::lineIsSet() const
{
    return lineIsSet_;
}

void ShowMergeRequestCommentsByLineRequest::unsetline()
{
    lineIsSet_ = false;
}

bool ShowMergeRequestCommentsByLineRequest::isWithCommitComments() const
{
    return withCommitComments_;
}

void ShowMergeRequestCommentsByLineRequest::setWithCommitComments(bool value)
{
    withCommitComments_ = value;
    withCommitCommentsIsSet_ = true;
}

bool ShowMergeRequestCommentsByLineRequest::withCommitCommentsIsSet() const
{
    return withCommitCommentsIsSet_;
}

void ShowMergeRequestCommentsByLineRequest::unsetwithCommitComments()
{
    withCommitCommentsIsSet_ = false;
}

std::string ShowMergeRequestCommentsByLineRequest::getPath() const
{
    return path_;
}

void ShowMergeRequestCommentsByLineRequest::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ShowMergeRequestCommentsByLineRequest::pathIsSet() const
{
    return pathIsSet_;
}

void ShowMergeRequestCommentsByLineRequest::unsetpath()
{
    pathIsSet_ = false;
}

std::string ShowMergeRequestCommentsByLineRequest::getView() const
{
    return view_;
}

void ShowMergeRequestCommentsByLineRequest::setView(const std::string& value)
{
    view_ = value;
    viewIsSet_ = true;
}

bool ShowMergeRequestCommentsByLineRequest::viewIsSet() const
{
    return viewIsSet_;
}

void ShowMergeRequestCommentsByLineRequest::unsetview()
{
    viewIsSet_ = false;
}

std::string ShowMergeRequestCommentsByLineRequest::getBaseSha() const
{
    return baseSha_;
}

void ShowMergeRequestCommentsByLineRequest::setBaseSha(const std::string& value)
{
    baseSha_ = value;
    baseShaIsSet_ = true;
}

bool ShowMergeRequestCommentsByLineRequest::baseShaIsSet() const
{
    return baseShaIsSet_;
}

void ShowMergeRequestCommentsByLineRequest::unsetbaseSha()
{
    baseShaIsSet_ = false;
}

std::string ShowMergeRequestCommentsByLineRequest::getStartSha() const
{
    return startSha_;
}

void ShowMergeRequestCommentsByLineRequest::setStartSha(const std::string& value)
{
    startSha_ = value;
    startShaIsSet_ = true;
}

bool ShowMergeRequestCommentsByLineRequest::startShaIsSet() const
{
    return startShaIsSet_;
}

void ShowMergeRequestCommentsByLineRequest::unsetstartSha()
{
    startShaIsSet_ = false;
}

std::string ShowMergeRequestCommentsByLineRequest::getHeadSha() const
{
    return headSha_;
}

void ShowMergeRequestCommentsByLineRequest::setHeadSha(const std::string& value)
{
    headSha_ = value;
    headShaIsSet_ = true;
}

bool ShowMergeRequestCommentsByLineRequest::headShaIsSet() const
{
    return headShaIsSet_;
}

void ShowMergeRequestCommentsByLineRequest::unsetheadSha()
{
    headShaIsSet_ = false;
}

}
}
}
}
}


