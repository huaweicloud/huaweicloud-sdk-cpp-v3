

#include "huaweicloud/codehub/v4/model/ShowMergeRequestCommentsByLineResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowMergeRequestCommentsByLineResponse::ShowMergeRequestCommentsByLineResponse()
{
    bodyIsSet_ = false;
}

ShowMergeRequestCommentsByLineResponse::~ShowMergeRequestCommentsByLineResponse() = default;

void ShowMergeRequestCommentsByLineResponse::validate()
{
}

web::json::value ShowMergeRequestCommentsByLineResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowMergeRequestCommentsByLineResponse::fromJson(const web::json::value& val)
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


std::vector<CommentPathDto>& ShowMergeRequestCommentsByLineResponse::getBody()
{
    return body_;
}

void ShowMergeRequestCommentsByLineResponse::setBody(const std::vector<CommentPathDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowMergeRequestCommentsByLineResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowMergeRequestCommentsByLineResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


