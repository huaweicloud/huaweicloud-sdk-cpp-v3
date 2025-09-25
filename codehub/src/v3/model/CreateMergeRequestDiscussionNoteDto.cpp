

#include "huaweicloud/codehub/v3/model/CreateMergeRequestDiscussionNoteDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




CreateMergeRequestDiscussionNoteDto::CreateMergeRequestDiscussionNoteDto()
{
    body_ = "";
    bodyIsSet_ = false;
}

CreateMergeRequestDiscussionNoteDto::~CreateMergeRequestDiscussionNoteDto() = default;

void CreateMergeRequestDiscussionNoteDto::validate()
{
}

web::json::value CreateMergeRequestDiscussionNoteDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateMergeRequestDiscussionNoteDto::fromJson(const web::json::value& val)
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


std::string CreateMergeRequestDiscussionNoteDto::getBody() const
{
    return body_;
}

void CreateMergeRequestDiscussionNoteDto::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMergeRequestDiscussionNoteDto::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMergeRequestDiscussionNoteDto::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


