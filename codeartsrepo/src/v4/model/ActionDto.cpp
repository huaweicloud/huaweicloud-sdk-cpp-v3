

#include "huaweicloud/codeartsrepo/v4/model/ActionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ActionDto::ActionDto()
{
    action_ = "";
    actionIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    previousPath_ = "";
    previousPathIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    encoding_ = "";
    encodingIsSet_ = false;
    lastCommitId_ = false;
    lastCommitIdIsSet_ = false;
    executeFilemode_ = false;
    executeFilemodeIsSet_ = false;
}

ActionDto::~ActionDto() = default;

void ActionDto::validate()
{
}

web::json::value ActionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(previousPathIsSet_) {
        val[utility::conversions::to_string_t("previous_path")] = ModelBase::toJson(previousPath_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(encodingIsSet_) {
        val[utility::conversions::to_string_t("encoding")] = ModelBase::toJson(encoding_);
    }
    if(lastCommitIdIsSet_) {
        val[utility::conversions::to_string_t("last_commit_id")] = ModelBase::toJson(lastCommitId_);
    }
    if(executeFilemodeIsSet_) {
        val[utility::conversions::to_string_t("execute_filemode")] = ModelBase::toJson(executeFilemode_);
    }

    return val;
}
bool ActionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("previous_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("previous_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreviousPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_commit_id"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastCommitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_filemode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_filemode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteFilemode(refVal);
        }
    }
    return ok;
}


std::string ActionDto::getAction() const
{
    return action_;
}

void ActionDto::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ActionDto::actionIsSet() const
{
    return actionIsSet_;
}

void ActionDto::unsetaction()
{
    actionIsSet_ = false;
}

std::string ActionDto::getFilePath() const
{
    return filePath_;
}

void ActionDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ActionDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void ActionDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string ActionDto::getPreviousPath() const
{
    return previousPath_;
}

void ActionDto::setPreviousPath(const std::string& value)
{
    previousPath_ = value;
    previousPathIsSet_ = true;
}

bool ActionDto::previousPathIsSet() const
{
    return previousPathIsSet_;
}

void ActionDto::unsetpreviousPath()
{
    previousPathIsSet_ = false;
}

std::string ActionDto::getContent() const
{
    return content_;
}

void ActionDto::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ActionDto::contentIsSet() const
{
    return contentIsSet_;
}

void ActionDto::unsetcontent()
{
    contentIsSet_ = false;
}

std::string ActionDto::getEncoding() const
{
    return encoding_;
}

void ActionDto::setEncoding(const std::string& value)
{
    encoding_ = value;
    encodingIsSet_ = true;
}

bool ActionDto::encodingIsSet() const
{
    return encodingIsSet_;
}

void ActionDto::unsetencoding()
{
    encodingIsSet_ = false;
}

bool ActionDto::isLastCommitId() const
{
    return lastCommitId_;
}

void ActionDto::setLastCommitId(bool value)
{
    lastCommitId_ = value;
    lastCommitIdIsSet_ = true;
}

bool ActionDto::lastCommitIdIsSet() const
{
    return lastCommitIdIsSet_;
}

void ActionDto::unsetlastCommitId()
{
    lastCommitIdIsSet_ = false;
}

bool ActionDto::isExecuteFilemode() const
{
    return executeFilemode_;
}

void ActionDto::setExecuteFilemode(bool value)
{
    executeFilemode_ = value;
    executeFilemodeIsSet_ = true;
}

bool ActionDto::executeFilemodeIsSet() const
{
    return executeFilemodeIsSet_;
}

void ActionDto::unsetexecuteFilemode()
{
    executeFilemodeIsSet_ = false;
}

}
}
}
}
}


