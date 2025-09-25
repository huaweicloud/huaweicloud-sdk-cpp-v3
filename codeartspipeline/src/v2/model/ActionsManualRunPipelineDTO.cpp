

#include "huaweicloud/codeartspipeline/v2/model/ActionsManualRunPipelineDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ActionsManualRunPipelineDTO::ActionsManualRunPipelineDTO()
{
    httpsUrl_ = "";
    httpsUrlIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    fileContent_ = "";
    fileContentIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    encoding_ = "";
    encodingIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
    accessToken_ = "";
    accessTokenIsSet_ = false;
}

ActionsManualRunPipelineDTO::~ActionsManualRunPipelineDTO() = default;

void ActionsManualRunPipelineDTO::validate()
{
}

web::json::value ActionsManualRunPipelineDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpsUrlIsSet_) {
        val[utility::conversions::to_string_t("https_url")] = ModelBase::toJson(httpsUrl_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(fileContentIsSet_) {
        val[utility::conversions::to_string_t("file_content")] = ModelBase::toJson(fileContent_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(encodingIsSet_) {
        val[utility::conversions::to_string_t("encoding")] = ModelBase::toJson(encoding_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }
    if(accessTokenIsSet_) {
        val[utility::conversions::to_string_t("access_token")] = ModelBase::toJson(accessToken_);
    }

    return val;
}
bool ActionsManualRunPipelineDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("https_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encoding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoding"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncoding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("access_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessToken(refVal);
        }
    }
    return ok;
}


std::string ActionsManualRunPipelineDTO::getHttpsUrl() const
{
    return httpsUrl_;
}

void ActionsManualRunPipelineDTO::setHttpsUrl(const std::string& value)
{
    httpsUrl_ = value;
    httpsUrlIsSet_ = true;
}

bool ActionsManualRunPipelineDTO::httpsUrlIsSet() const
{
    return httpsUrlIsSet_;
}

void ActionsManualRunPipelineDTO::unsethttpsUrl()
{
    httpsUrlIsSet_ = false;
}

std::string ActionsManualRunPipelineDTO::getFilePath() const
{
    return filePath_;
}

void ActionsManualRunPipelineDTO::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ActionsManualRunPipelineDTO::filePathIsSet() const
{
    return filePathIsSet_;
}

void ActionsManualRunPipelineDTO::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string ActionsManualRunPipelineDTO::getFileContent() const
{
    return fileContent_;
}

void ActionsManualRunPipelineDTO::setFileContent(const std::string& value)
{
    fileContent_ = value;
    fileContentIsSet_ = true;
}

bool ActionsManualRunPipelineDTO::fileContentIsSet() const
{
    return fileContentIsSet_;
}

void ActionsManualRunPipelineDTO::unsetfileContent()
{
    fileContentIsSet_ = false;
}

std::string ActionsManualRunPipelineDTO::getBranch() const
{
    return branch_;
}

void ActionsManualRunPipelineDTO::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool ActionsManualRunPipelineDTO::branchIsSet() const
{
    return branchIsSet_;
}

void ActionsManualRunPipelineDTO::unsetbranch()
{
    branchIsSet_ = false;
}

std::string ActionsManualRunPipelineDTO::getEncoding() const
{
    return encoding_;
}

void ActionsManualRunPipelineDTO::setEncoding(const std::string& value)
{
    encoding_ = value;
    encodingIsSet_ = true;
}

bool ActionsManualRunPipelineDTO::encodingIsSet() const
{
    return encodingIsSet_;
}

void ActionsManualRunPipelineDTO::unsetencoding()
{
    encodingIsSet_ = false;
}

std::string ActionsManualRunPipelineDTO::getTag() const
{
    return tag_;
}

void ActionsManualRunPipelineDTO::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ActionsManualRunPipelineDTO::tagIsSet() const
{
    return tagIsSet_;
}

void ActionsManualRunPipelineDTO::unsettag()
{
    tagIsSet_ = false;
}

std::string ActionsManualRunPipelineDTO::getCommitId() const
{
    return commitId_;
}

void ActionsManualRunPipelineDTO::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool ActionsManualRunPipelineDTO::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void ActionsManualRunPipelineDTO::unsetcommitId()
{
    commitIdIsSet_ = false;
}

std::string ActionsManualRunPipelineDTO::getAccessToken() const
{
    return accessToken_;
}

void ActionsManualRunPipelineDTO::setAccessToken(const std::string& value)
{
    accessToken_ = value;
    accessTokenIsSet_ = true;
}

bool ActionsManualRunPipelineDTO::accessTokenIsSet() const
{
    return accessTokenIsSet_;
}

void ActionsManualRunPipelineDTO::unsetaccessToken()
{
    accessTokenIsSet_ = false;
}

}
}
}
}
}


