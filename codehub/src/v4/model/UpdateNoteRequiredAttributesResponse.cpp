

#include "huaweicloud/codehub/v4/model/UpdateNoteRequiredAttributesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateNoteRequiredAttributesResponse::UpdateNoteRequiredAttributesResponse()
{
    noteRequiredAttributesIsSet_ = false;
}

UpdateNoteRequiredAttributesResponse::~UpdateNoteRequiredAttributesResponse() = default;

void UpdateNoteRequiredAttributesResponse::validate()
{
}

web::json::value UpdateNoteRequiredAttributesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(noteRequiredAttributesIsSet_) {
        val[utility::conversions::to_string_t("note_required_attributes")] = ModelBase::toJson(noteRequiredAttributes_);
    }

    return val;
}
bool UpdateNoteRequiredAttributesResponse::fromJson(const web::json::value& val)
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


std::vector<RequiredAttributeDto>& UpdateNoteRequiredAttributesResponse::getNoteRequiredAttributes()
{
    return noteRequiredAttributes_;
}

void UpdateNoteRequiredAttributesResponse::setNoteRequiredAttributes(const std::vector<RequiredAttributeDto>& value)
{
    noteRequiredAttributes_ = value;
    noteRequiredAttributesIsSet_ = true;
}

bool UpdateNoteRequiredAttributesResponse::noteRequiredAttributesIsSet() const
{
    return noteRequiredAttributesIsSet_;
}

void UpdateNoteRequiredAttributesResponse::unsetnoteRequiredAttributes()
{
    noteRequiredAttributesIsSet_ = false;
}

}
}
}
}
}


