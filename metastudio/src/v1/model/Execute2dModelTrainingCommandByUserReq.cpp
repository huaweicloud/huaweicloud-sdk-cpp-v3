

#include "huaweicloud/metastudio/v1/model/Execute2dModelTrainingCommandByUserReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Execute2dModelTrainingCommandByUserReq::Execute2dModelTrainingCommandByUserReq()
{
    command_ = "";
    commandIsSet_ = false;
    commandMessage_ = "";
    commandMessageIsSet_ = false;
    commentDataIsSet_ = false;
    operationReason_ = "";
    operationReasonIsSet_ = false;
}

Execute2dModelTrainingCommandByUserReq::~Execute2dModelTrainingCommandByUserReq() = default;

void Execute2dModelTrainingCommandByUserReq::validate()
{
}

web::json::value Execute2dModelTrainingCommandByUserReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commandIsSet_) {
        val[utility::conversions::to_string_t("command")] = ModelBase::toJson(command_);
    }
    if(commandMessageIsSet_) {
        val[utility::conversions::to_string_t("command_message")] = ModelBase::toJson(commandMessage_);
    }
    if(commentDataIsSet_) {
        val[utility::conversions::to_string_t("comment_data")] = ModelBase::toJson(commentData_);
    }
    if(operationReasonIsSet_) {
        val[utility::conversions::to_string_t("operation_reason")] = ModelBase::toJson(operationReason_);
    }

    return val;
}
bool Execute2dModelTrainingCommandByUserReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("command"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment_data"));
        if(!fieldValue.is_null())
        {
            CommentData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommentData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationReason(refVal);
        }
    }
    return ok;
}


std::string Execute2dModelTrainingCommandByUserReq::getCommand() const
{
    return command_;
}

void Execute2dModelTrainingCommandByUserReq::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserReq::commandIsSet() const
{
    return commandIsSet_;
}

void Execute2dModelTrainingCommandByUserReq::unsetcommand()
{
    commandIsSet_ = false;
}

std::string Execute2dModelTrainingCommandByUserReq::getCommandMessage() const
{
    return commandMessage_;
}

void Execute2dModelTrainingCommandByUserReq::setCommandMessage(const std::string& value)
{
    commandMessage_ = value;
    commandMessageIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserReq::commandMessageIsSet() const
{
    return commandMessageIsSet_;
}

void Execute2dModelTrainingCommandByUserReq::unsetcommandMessage()
{
    commandMessageIsSet_ = false;
}

CommentData Execute2dModelTrainingCommandByUserReq::getCommentData() const
{
    return commentData_;
}

void Execute2dModelTrainingCommandByUserReq::setCommentData(const CommentData& value)
{
    commentData_ = value;
    commentDataIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserReq::commentDataIsSet() const
{
    return commentDataIsSet_;
}

void Execute2dModelTrainingCommandByUserReq::unsetcommentData()
{
    commentDataIsSet_ = false;
}

std::string Execute2dModelTrainingCommandByUserReq::getOperationReason() const
{
    return operationReason_;
}

void Execute2dModelTrainingCommandByUserReq::setOperationReason(const std::string& value)
{
    operationReason_ = value;
    operationReasonIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserReq::operationReasonIsSet() const
{
    return operationReasonIsSet_;
}

void Execute2dModelTrainingCommandByUserReq::unsetoperationReason()
{
    operationReasonIsSet_ = false;
}

}
}
}
}
}


