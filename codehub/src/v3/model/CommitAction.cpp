

#include "huaweicloud/codehub/v3/model/CommitAction.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




CommitAction::CommitAction()
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
    lastCommitId_ = "";
    lastCommitIdIsSet_ = false;
    executeFilemode_ = false;
    executeFilemodeIsSet_ = false;
}

CommitAction::~CommitAction() = default;

void CommitAction::validate()
{
}

web::json::value CommitAction::toJson() const
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
bool CommitAction::fromJson(const web::json::value& val)
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
            std::string refVal;
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


std::string CommitAction::getAction() const
{
    return action_;
}

void CommitAction::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool CommitAction::actionIsSet() const
{
    return actionIsSet_;
}

void CommitAction::unsetaction()
{
    actionIsSet_ = false;
}

std::string CommitAction::getFilePath() const
{
    return filePath_;
}

void CommitAction::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool CommitAction::filePathIsSet() const
{
    return filePathIsSet_;
}

void CommitAction::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string CommitAction::getPreviousPath() const
{
    return previousPath_;
}

void CommitAction::setPreviousPath(const std::string& value)
{
    previousPath_ = value;
    previousPathIsSet_ = true;
}

bool CommitAction::previousPathIsSet() const
{
    return previousPathIsSet_;
}

void CommitAction::unsetpreviousPath()
{
    previousPathIsSet_ = false;
}

std::string CommitAction::getContent() const
{
    return content_;
}

void CommitAction::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool CommitAction::contentIsSet() const
{
    return contentIsSet_;
}

void CommitAction::unsetcontent()
{
    contentIsSet_ = false;
}

std::string CommitAction::getEncoding() const
{
    return encoding_;
}

void CommitAction::setEncoding(const std::string& value)
{
    encoding_ = value;
    encodingIsSet_ = true;
}

bool CommitAction::encodingIsSet() const
{
    return encodingIsSet_;
}

void CommitAction::unsetencoding()
{
    encodingIsSet_ = false;
}

std::string CommitAction::getLastCommitId() const
{
    return lastCommitId_;
}

void CommitAction::setLastCommitId(const std::string& value)
{
    lastCommitId_ = value;
    lastCommitIdIsSet_ = true;
}

bool CommitAction::lastCommitIdIsSet() const
{
    return lastCommitIdIsSet_;
}

void CommitAction::unsetlastCommitId()
{
    lastCommitIdIsSet_ = false;
}

bool CommitAction::isExecuteFilemode() const
{
    return executeFilemode_;
}

void CommitAction::setExecuteFilemode(bool value)
{
    executeFilemode_ = value;
    executeFilemodeIsSet_ = true;
}

bool CommitAction::executeFilemodeIsSet() const
{
    return executeFilemodeIsSet_;
}

void CommitAction::unsetexecuteFilemode()
{
    executeFilemodeIsSet_ = false;
}

}
}
}
}
}


