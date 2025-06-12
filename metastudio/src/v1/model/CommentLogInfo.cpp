

#include "huaweicloud/metastudio/v1/model/CommentLogInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CommentLogInfo::CommentLogInfo()
{
    operateTime_ = "";
    operateTimeIsSet_ = false;
    commentType_ = "";
    commentTypeIsSet_ = false;
    commentTitle_ = "";
    commentTitleIsSet_ = false;
    commentMessage_ = "";
    commentMessageIsSet_ = false;
    attachmentDownloadUrlIsSet_ = false;
}

CommentLogInfo::~CommentLogInfo() = default;

void CommentLogInfo::validate()
{
}

web::json::value CommentLogInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operateTimeIsSet_) {
        val[utility::conversions::to_string_t("operate_time")] = ModelBase::toJson(operateTime_);
    }
    if(commentTypeIsSet_) {
        val[utility::conversions::to_string_t("comment_type")] = ModelBase::toJson(commentType_);
    }
    if(commentTitleIsSet_) {
        val[utility::conversions::to_string_t("comment_title")] = ModelBase::toJson(commentTitle_);
    }
    if(commentMessageIsSet_) {
        val[utility::conversions::to_string_t("comment_message")] = ModelBase::toJson(commentMessage_);
    }
    if(attachmentDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("attachment_download_url")] = ModelBase::toJson(attachmentDownloadUrl_);
    }

    return val;
}
bool CommentLogInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommentTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommentMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachment_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment_download_url"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachmentDownloadUrl(refVal);
        }
    }
    return ok;
}


std::string CommentLogInfo::getOperateTime() const
{
    return operateTime_;
}

void CommentLogInfo::setOperateTime(const std::string& value)
{
    operateTime_ = value;
    operateTimeIsSet_ = true;
}

bool CommentLogInfo::operateTimeIsSet() const
{
    return operateTimeIsSet_;
}

void CommentLogInfo::unsetoperateTime()
{
    operateTimeIsSet_ = false;
}

std::string CommentLogInfo::getCommentType() const
{
    return commentType_;
}

void CommentLogInfo::setCommentType(const std::string& value)
{
    commentType_ = value;
    commentTypeIsSet_ = true;
}

bool CommentLogInfo::commentTypeIsSet() const
{
    return commentTypeIsSet_;
}

void CommentLogInfo::unsetcommentType()
{
    commentTypeIsSet_ = false;
}

std::string CommentLogInfo::getCommentTitle() const
{
    return commentTitle_;
}

void CommentLogInfo::setCommentTitle(const std::string& value)
{
    commentTitle_ = value;
    commentTitleIsSet_ = true;
}

bool CommentLogInfo::commentTitleIsSet() const
{
    return commentTitleIsSet_;
}

void CommentLogInfo::unsetcommentTitle()
{
    commentTitleIsSet_ = false;
}

std::string CommentLogInfo::getCommentMessage() const
{
    return commentMessage_;
}

void CommentLogInfo::setCommentMessage(const std::string& value)
{
    commentMessage_ = value;
    commentMessageIsSet_ = true;
}

bool CommentLogInfo::commentMessageIsSet() const
{
    return commentMessageIsSet_;
}

void CommentLogInfo::unsetcommentMessage()
{
    commentMessageIsSet_ = false;
}

std::vector<std::string>& CommentLogInfo::getAttachmentDownloadUrl()
{
    return attachmentDownloadUrl_;
}

void CommentLogInfo::setAttachmentDownloadUrl(const std::vector<std::string>& value)
{
    attachmentDownloadUrl_ = value;
    attachmentDownloadUrlIsSet_ = true;
}

bool CommentLogInfo::attachmentDownloadUrlIsSet() const
{
    return attachmentDownloadUrlIsSet_;
}

void CommentLogInfo::unsetattachmentDownloadUrl()
{
    attachmentDownloadUrlIsSet_ = false;
}

}
}
}
}
}


