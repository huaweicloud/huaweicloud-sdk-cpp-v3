

#include "huaweicloud/codehub/v4/model/UpdateGroupNoteRequiredAttributesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateGroupNoteRequiredAttributesResponse::UpdateGroupNoteRequiredAttributesResponse()
{
    noteRequiredAttributesIsSet_ = false;
}

UpdateGroupNoteRequiredAttributesResponse::~UpdateGroupNoteRequiredAttributesResponse() = default;

void UpdateGroupNoteRequiredAttributesResponse::validate()
{
}

web::json::value UpdateGroupNoteRequiredAttributesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(noteRequiredAttributesIsSet_) {
        val[utility::conversions::to_string_t("note_required_attributes")] = ModelBase::toJson(noteRequiredAttributes_);
    }

    return val;
}
bool UpdateGroupNoteRequiredAttributesResponse::fromJson(const web::json::value& val)
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


std::vector<RequiredAttributeDto>& UpdateGroupNoteRequiredAttributesResponse::getNoteRequiredAttributes()
{
    return noteRequiredAttributes_;
}

void UpdateGroupNoteRequiredAttributesResponse::setNoteRequiredAttributes(const std::vector<RequiredAttributeDto>& value)
{
    noteRequiredAttributes_ = value;
    noteRequiredAttributesIsSet_ = true;
}

bool UpdateGroupNoteRequiredAttributesResponse::noteRequiredAttributesIsSet() const
{
    return noteRequiredAttributesIsSet_;
}

void UpdateGroupNoteRequiredAttributesResponse::unsetnoteRequiredAttributes()
{
    noteRequiredAttributesIsSet_ = false;
}

}
}
}
}
}


