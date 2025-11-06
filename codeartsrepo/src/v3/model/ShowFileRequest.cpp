

#include "huaweicloud/codeartsrepo/v3/model/ShowFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowFileRequest::ShowFileRequest()
{
    repoId_ = 0;
    repoIdIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
}

ShowFileRequest::~ShowFileRequest() = default;

void ShowFileRequest::validate()
{
}

web::json::value ShowFileRequest::toJson() const
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
bool ShowFileRequest::fromJson(const web::json::value& val)
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


int32_t ShowFileRequest::getRepoId() const
{
    return repoId_;
}

void ShowFileRequest::setRepoId(int32_t value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool ShowFileRequest::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void ShowFileRequest::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string ShowFileRequest::getFilePath() const
{
    return filePath_;
}

void ShowFileRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ShowFileRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void ShowFileRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string ShowFileRequest::getRef() const
{
    return ref_;
}

void ShowFileRequest::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool ShowFileRequest::refIsSet() const
{
    return refIsSet_;
}

void ShowFileRequest::unsetref()
{
    refIsSet_ = false;
}

}
}
}
}
}


