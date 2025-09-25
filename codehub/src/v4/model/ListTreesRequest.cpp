

#include "huaweicloud/codehub/v4/model/ListTreesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListTreesRequest::ListTreesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    recursive_ = false;
    recursiveIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListTreesRequest::~ListTreesRequest() = default;

void ListTreesRequest::validate()
{
}

web::json::value ListTreesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(recursiveIsSet_) {
        val[utility::conversions::to_string_t("recursive")] = ModelBase::toJson(recursive_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListTreesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("recursive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recursive"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecursive(refVal);
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


int32_t ListTreesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListTreesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListTreesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListTreesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListTreesRequest::getRef() const
{
    return ref_;
}

void ListTreesRequest::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool ListTreesRequest::refIsSet() const
{
    return refIsSet_;
}

void ListTreesRequest::unsetref()
{
    refIsSet_ = false;
}

std::string ListTreesRequest::getPath() const
{
    return path_;
}

void ListTreesRequest::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ListTreesRequest::pathIsSet() const
{
    return pathIsSet_;
}

void ListTreesRequest::unsetpath()
{
    pathIsSet_ = false;
}

bool ListTreesRequest::isRecursive() const
{
    return recursive_;
}

void ListTreesRequest::setRecursive(bool value)
{
    recursive_ = value;
    recursiveIsSet_ = true;
}

bool ListTreesRequest::recursiveIsSet() const
{
    return recursiveIsSet_;
}

void ListTreesRequest::unsetrecursive()
{
    recursiveIsSet_ = false;
}

int32_t ListTreesRequest::getOffset() const
{
    return offset_;
}

void ListTreesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTreesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTreesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTreesRequest::getLimit() const
{
    return limit_;
}

void ListTreesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTreesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTreesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


