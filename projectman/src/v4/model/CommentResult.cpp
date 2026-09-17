

#include "huaweicloud/projectman/v4/model/CommentResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CommentResult::CommentResult()
{
    total_ = 0;
    totalIsSet_ = false;
    commentListIsSet_ = false;
}

CommentResult::~CommentResult() = default;

void CommentResult::validate()
{
}

web::json::value CommentResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(commentListIsSet_) {
        val[utility::conversions::to_string_t("comment_list")] = ModelBase::toJson(commentList_);
    }

    return val;
}
bool CommentResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment_list"));
        if(!fieldValue.is_null())
        {
            std::vector<CommentEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommentList(refVal);
        }
    }
    return ok;
}


int32_t CommentResult::getTotal() const
{
    return total_;
}

void CommentResult::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool CommentResult::totalIsSet() const
{
    return totalIsSet_;
}

void CommentResult::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<CommentEntity>& CommentResult::getCommentList()
{
    return commentList_;
}

void CommentResult::setCommentList(const std::vector<CommentEntity>& value)
{
    commentList_ = value;
    commentListIsSet_ = true;
}

bool CommentResult::commentListIsSet() const
{
    return commentListIsSet_;
}

void CommentResult::unsetcommentList()
{
    commentListIsSet_ = false;
}

}
}
}
}
}


