

#include "huaweicloud/codeartsrepo/v4/model/UpdateProjectNoteRequiredAttributesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateProjectNoteRequiredAttributesResponse::UpdateProjectNoteRequiredAttributesResponse()
{
    noteRequiredAttributesIsSet_ = false;
}

UpdateProjectNoteRequiredAttributesResponse::~UpdateProjectNoteRequiredAttributesResponse() = default;

void UpdateProjectNoteRequiredAttributesResponse::validate()
{
}

web::json::value UpdateProjectNoteRequiredAttributesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(noteRequiredAttributesIsSet_) {
        val[utility::conversions::to_string_t("note_required_attributes")] = ModelBase::toJson(noteRequiredAttributes_);
    }

    return val;
}
bool UpdateProjectNoteRequiredAttributesResponse::fromJson(const web::json::value& val)
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


std::vector<RequiredAttributeDto>& UpdateProjectNoteRequiredAttributesResponse::getNoteRequiredAttributes()
{
    return noteRequiredAttributes_;
}

void UpdateProjectNoteRequiredAttributesResponse::setNoteRequiredAttributes(const std::vector<RequiredAttributeDto>& value)
{
    noteRequiredAttributes_ = value;
    noteRequiredAttributesIsSet_ = true;
}

bool UpdateProjectNoteRequiredAttributesResponse::noteRequiredAttributesIsSet() const
{
    return noteRequiredAttributesIsSet_;
}

void UpdateProjectNoteRequiredAttributesResponse::unsetnoteRequiredAttributes()
{
    noteRequiredAttributesIsSet_ = false;
}

}
}
}
}
}


