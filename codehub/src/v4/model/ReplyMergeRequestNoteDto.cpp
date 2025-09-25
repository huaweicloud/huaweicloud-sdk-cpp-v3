

#include "huaweicloud/codehub/v4/model/ReplyMergeRequestNoteDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ReplyMergeRequestNoteDto::ReplyMergeRequestNoteDto()
{
    body_ = "";
    bodyIsSet_ = false;
}

ReplyMergeRequestNoteDto::~ReplyMergeRequestNoteDto() = default;

void ReplyMergeRequestNoteDto::validate()
{
}

web::json::value ReplyMergeRequestNoteDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ReplyMergeRequestNoteDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ReplyMergeRequestNoteDto::getBody() const
{
    return body_;
}

void ReplyMergeRequestNoteDto::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ReplyMergeRequestNoteDto::bodyIsSet() const
{
    return bodyIsSet_;
}

void ReplyMergeRequestNoteDto::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


