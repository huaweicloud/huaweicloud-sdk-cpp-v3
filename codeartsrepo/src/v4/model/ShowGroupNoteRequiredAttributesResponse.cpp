

#include "huaweicloud/codeartsrepo/v4/model/ShowGroupNoteRequiredAttributesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowGroupNoteRequiredAttributesResponse::ShowGroupNoteRequiredAttributesResponse()
{
    bodyIsSet_ = false;
}

ShowGroupNoteRequiredAttributesResponse::~ShowGroupNoteRequiredAttributesResponse() = default;

void ShowGroupNoteRequiredAttributesResponse::validate()
{
}

web::json::value ShowGroupNoteRequiredAttributesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowGroupNoteRequiredAttributesResponse::fromJson(const web::json::value& val)
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


std::vector<NoteRequiredAttributeDto>& ShowGroupNoteRequiredAttributesResponse::getBody()
{
    return body_;
}

void ShowGroupNoteRequiredAttributesResponse::setBody(const std::vector<NoteRequiredAttributeDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowGroupNoteRequiredAttributesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowGroupNoteRequiredAttributesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


