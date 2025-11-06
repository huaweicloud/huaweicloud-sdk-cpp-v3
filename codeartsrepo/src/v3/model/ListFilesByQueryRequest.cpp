

#include "huaweicloud/codeartsrepo/v3/model/ListFilesByQueryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ListFilesByQueryRequest::ListFilesByQueryRequest()
{
    repoId_ = 0;
    repoIdIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
}

ListFilesByQueryRequest::~ListFilesByQueryRequest() = default;

void ListFilesByQueryRequest::validate()
{
}

web::json::value ListFilesByQueryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }

    return val;
}
bool ListFilesByQueryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
        }
    }
    return ok;
}


int32_t ListFilesByQueryRequest::getRepoId() const
{
    return repoId_;
}

void ListFilesByQueryRequest::setRepoId(int32_t value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool ListFilesByQueryRequest::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void ListFilesByQueryRequest::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string ListFilesByQueryRequest::getFilePath() const
{
    return filePath_;
}

void ListFilesByQueryRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ListFilesByQueryRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void ListFilesByQueryRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string ListFilesByQueryRequest::getRef() const
{
    return ref_;
}

void ListFilesByQueryRequest::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool ListFilesByQueryRequest::refIsSet() const
{
    return refIsSet_;
}

void ListFilesByQueryRequest::unsetref()
{
    refIsSet_ = false;
}

}
}
}
}
}


