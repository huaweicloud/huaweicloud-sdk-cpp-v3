

#include "huaweicloud/codeartsrepo/v4/model/ListFileUpperTreeEntriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListFileUpperTreeEntriesRequest::ListFileUpperTreeEntriesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    refName_ = "";
    refNameIsSet_ = false;
}

ListFileUpperTreeEntriesRequest::~ListFileUpperTreeEntriesRequest() = default;

void ListFileUpperTreeEntriesRequest::validate()
{
}

web::json::value ListFileUpperTreeEntriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(refNameIsSet_) {
        val[utility::conversions::to_string_t("ref_name")] = ModelBase::toJson(refName_);
    }

    return val;
}
bool ListFileUpperTreeEntriesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
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
    return ok;
}


int32_t ListFileUpperTreeEntriesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListFileUpperTreeEntriesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListFileUpperTreeEntriesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListFileUpperTreeEntriesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListFileUpperTreeEntriesRequest::getFilePath() const
{
    return filePath_;
}

void ListFileUpperTreeEntriesRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ListFileUpperTreeEntriesRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void ListFileUpperTreeEntriesRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string ListFileUpperTreeEntriesRequest::getRefName() const
{
    return refName_;
}

void ListFileUpperTreeEntriesRequest::setRefName(const std::string& value)
{
    refName_ = value;
    refNameIsSet_ = true;
}

bool ListFileUpperTreeEntriesRequest::refNameIsSet() const
{
    return refNameIsSet_;
}

void ListFileUpperTreeEntriesRequest::unsetrefName()
{
    refNameIsSet_ = false;
}

}
}
}
}
}


