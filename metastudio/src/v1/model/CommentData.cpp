

#include "huaweicloud/metastudio/v1/model/CommentData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CommentData::CommentData()
{
    commentTitle_ = "";
    commentTitleIsSet_ = false;
    commentMessage_ = "";
    commentMessageIsSet_ = false;
    attachmentNameIsSet_ = false;
}

CommentData::~CommentData() = default;

void CommentData::validate()
{
}

web::json::value CommentData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commentTitleIsSet_) {
        val[utility::conversions::to_string_t("comment_title")] = ModelBase::toJson(commentTitle_);
    }
    if(commentMessageIsSet_) {
        val[utility::conversions::to_string_t("comment_message")] = ModelBase::toJson(commentMessage_);
    }
    if(attachmentNameIsSet_) {
        val[utility::conversions::to_string_t("attachment_name")] = ModelBase::toJson(attachmentName_);
    }

    return val;
}
bool CommentData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("attachment_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment_name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachmentName(refVal);
        }
    }
    return ok;
}


std::string CommentData::getCommentTitle() const
{
    return commentTitle_;
}

void CommentData::setCommentTitle(const std::string& value)
{
    commentTitle_ = value;
    commentTitleIsSet_ = true;
}

bool CommentData::commentTitleIsSet() const
{
    return commentTitleIsSet_;
}

void CommentData::unsetcommentTitle()
{
    commentTitleIsSet_ = false;
}

std::string CommentData::getCommentMessage() const
{
    return commentMessage_;
}

void CommentData::setCommentMessage(const std::string& value)
{
    commentMessage_ = value;
    commentMessageIsSet_ = true;
}

bool CommentData::commentMessageIsSet() const
{
    return commentMessageIsSet_;
}

void CommentData::unsetcommentMessage()
{
    commentMessageIsSet_ = false;
}

std::vector<std::string>& CommentData::getAttachmentName()
{
    return attachmentName_;
}

void CommentData::setAttachmentName(const std::vector<std::string>& value)
{
    attachmentName_ = value;
    attachmentNameIsSet_ = true;
}

bool CommentData::attachmentNameIsSet() const
{
    return attachmentNameIsSet_;
}

void CommentData::unsetattachmentName()
{
    attachmentNameIsSet_ = false;
}

}
}
}
}
}


