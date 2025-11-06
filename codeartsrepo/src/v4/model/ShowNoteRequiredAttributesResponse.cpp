

#include "huaweicloud/codeartsrepo/v4/model/ShowNoteRequiredAttributesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowNoteRequiredAttributesResponse::ShowNoteRequiredAttributesResponse()
{
    bodyIsSet_ = false;
}

ShowNoteRequiredAttributesResponse::~ShowNoteRequiredAttributesResponse() = default;

void ShowNoteRequiredAttributesResponse::validate()
{
}

web::json::value ShowNoteRequiredAttributesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowNoteRequiredAttributesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<NoteRequiredAttributeDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<NoteRequiredAttributeDto>& ShowNoteRequiredAttributesResponse::getBody()
{
    return body_;
}

void ShowNoteRequiredAttributesResponse::setBody(const std::vector<NoteRequiredAttributeDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowNoteRequiredAttributesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowNoteRequiredAttributesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


