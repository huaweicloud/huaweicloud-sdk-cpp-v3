

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestChangesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestChangesRequest::ListMergeRequestChangesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    ignoreWhitespaceChange_ = false;
    ignoreWhitespaceChangeIsSet_ = false;
    forceEncode_ = false;
    forceEncodeIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    fromDiffId_ = 0;
    fromDiffIdIsSet_ = false;
    toDiffId_ = 0;
    toDiffIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListMergeRequestChangesRequest::~ListMergeRequestChangesRequest() = default;

void ListMergeRequestChangesRequest::validate()
{
}

web::json::value ListMergeRequestChangesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(ignoreWhitespaceChangeIsSet_) {
        val[utility::conversions::to_string_t("ignore_whitespace_change")] = ModelBase::toJson(ignoreWhitespaceChange_);
    }
    if(forceEncodeIsSet_) {
        val[utility::conversions::to_string_t("force_encode")] = ModelBase::toJson(forceEncode_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(fromDiffIdIsSet_) {
        val[utility::conversions::to_string_t("from_diff_id")] = ModelBase::toJson(fromDiffId_);
    }
    if(toDiffIdIsSet_) {
        val[utility::conversions::to_string_t("to_diff_id")] = ModelBase::toJson(toDiffId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListMergeRequestChangesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from_diff_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from_diff_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFromDiffId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to_diff_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to_diff_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToDiffId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


int32_t ListMergeRequestChangesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeRequestChangesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeRequestChangesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeRequestChangesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListMergeRequestChangesRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ListMergeRequestChangesRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ListMergeRequestChangesRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ListMergeRequestChangesRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

bool ListMergeRequestChangesRequest::isIgnoreWhitespaceChange() const
{
    return ignoreWhitespaceChange_;
}

void ListMergeRequestChangesRequest::setIgnoreWhitespaceChange(bool value)
{
    ignoreWhitespaceChange_ = value;
    ignoreWhitespaceChangeIsSet_ = true;
}

bool ListMergeRequestChangesRequest::ignoreWhitespaceChangeIsSet() const
{
    return ignoreWhitespaceChangeIsSet_;
}

void ListMergeRequestChangesRequest::unsetignoreWhitespaceChange()
{
    ignoreWhitespaceChangeIsSet_ = false;
}

bool ListMergeRequestChangesRequest::isForceEncode() const
{
    return forceEncode_;
}

void ListMergeRequestChangesRequest::setForceEncode(bool value)
{
    forceEncode_ = value;
    forceEncodeIsSet_ = true;
}

bool ListMergeRequestChangesRequest::forceEncodeIsSet() const
{
    return forceEncodeIsSet_;
}

void ListMergeRequestChangesRequest::unsetforceEncode()
{
    forceEncodeIsSet_ = false;
}

std::string ListMergeRequestChangesRequest::getFilePath() const
{
    return filePath_;
}

void ListMergeRequestChangesRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ListMergeRequestChangesRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void ListMergeRequestChangesRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

int32_t ListMergeRequestChangesRequest::getFromDiffId() const
{
    return fromDiffId_;
}

void ListMergeRequestChangesRequest::setFromDiffId(int32_t value)
{
    fromDiffId_ = value;
    fromDiffIdIsSet_ = true;
}

bool ListMergeRequestChangesRequest::fromDiffIdIsSet() const
{
    return fromDiffIdIsSet_;
}

void ListMergeRequestChangesRequest::unsetfromDiffId()
{
    fromDiffIdIsSet_ = false;
}

int32_t ListMergeRequestChangesRequest::getToDiffId() const
{
    return toDiffId_;
}

void ListMergeRequestChangesRequest::setToDiffId(int32_t value)
{
    toDiffId_ = value;
    toDiffIdIsSet_ = true;
}

bool ListMergeRequestChangesRequest::toDiffIdIsSet() const
{
    return toDiffIdIsSet_;
}

void ListMergeRequestChangesRequest::unsettoDiffId()
{
    toDiffIdIsSet_ = false;
}

int32_t ListMergeRequestChangesRequest::getOffset() const
{
    return offset_;
}

void ListMergeRequestChangesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMergeRequestChangesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMergeRequestChangesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMergeRequestChangesRequest::getLimit() const
{
    return limit_;
}

void ListMergeRequestChangesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMergeRequestChangesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMergeRequestChangesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


