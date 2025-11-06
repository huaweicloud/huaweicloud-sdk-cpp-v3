

#include "huaweicloud/codeartsrepo/v4/model/NoteRequiredAttributeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




NoteRequiredAttributeDto::NoteRequiredAttributeDto()
{
    noteRequiredAttributesIsSet_ = false;
}

NoteRequiredAttributeDto::~NoteRequiredAttributeDto() = default;

void NoteRequiredAttributeDto::validate()
{
}

web::json::value NoteRequiredAttributeDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(noteRequiredAttributesIsSet_) {
        val[utility::conversions::to_string_t("note_required_attributes")] = ModelBase::toJson(noteRequiredAttributes_);
    }

    return val;
}
bool NoteRequiredAttributeDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("note_required_attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("note_required_attributes"));
        if(!fieldValue.is_null())
        {
            std::vector<RequiredAttributeDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoteRequiredAttributes(refVal);
        }
    }
    return ok;
}


std::vector<RequiredAttributeDto>& NoteRequiredAttributeDto::getNoteRequiredAttributes()
{
    return noteRequiredAttributes_;
}

void NoteRequiredAttributeDto::setNoteRequiredAttributes(const std::vector<RequiredAttributeDto>& value)
{
    noteRequiredAttributes_ = value;
    noteRequiredAttributesIsSet_ = true;
}

bool NoteRequiredAttributeDto::noteRequiredAttributesIsSet() const
{
    return noteRequiredAttributesIsSet_;
}

void NoteRequiredAttributeDto::unsetnoteRequiredAttributes()
{
    noteRequiredAttributesIsSet_ = false;
}

}
}
}
}
}


