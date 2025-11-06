

#include "huaweicloud/codeartsrepo/v4/model/ShowCommitCommentsByLineResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowCommitCommentsByLineResponse::ShowCommitCommentsByLineResponse()
{
    bodyIsSet_ = false;
}

ShowCommitCommentsByLineResponse::~ShowCommitCommentsByLineResponse() = default;

void ShowCommitCommentsByLineResponse::validate()
{
}

web::json::value ShowCommitCommentsByLineResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowCommitCommentsByLineResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<CommentPathDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<CommentPathDto>& ShowCommitCommentsByLineResponse::getBody()
{
    return body_;
}

void ShowCommitCommentsByLineResponse::setBody(const std::vector<CommentPathDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowCommitCommentsByLineResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowCommitCommentsByLineResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


