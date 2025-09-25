

#include "huaweicloud/codehub/v4/model/ListProjectNoteRequiredAttributesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListProjectNoteRequiredAttributesResponse::ListProjectNoteRequiredAttributesResponse()
{
    noteRequiredAttributesIsSet_ = false;
}

ListProjectNoteRequiredAttributesResponse::~ListProjectNoteRequiredAttributesResponse() = default;

void ListProjectNoteRequiredAttributesResponse::validate()
{
}

web::json::value ListProjectNoteRequiredAttributesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(noteRequiredAttributesIsSet_) {
        val[utility::conversions::to_string_t("note_required_attributes")] = ModelBase::toJson(noteRequiredAttributes_);
    }

    return val;
}
bool ListProjectNoteRequiredAttributesResponse::fromJson(const web::json::value& val)
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


std::vector<RequiredAttributeDto>& ListProjectNoteRequiredAttributesResponse::getNoteRequiredAttributes()
{
    return noteRequiredAttributes_;
}

void ListProjectNoteRequiredAttributesResponse::setNoteRequiredAttributes(const std::vector<RequiredAttributeDto>& value)
{
    noteRequiredAttributes_ = value;
    noteRequiredAttributesIsSet_ = true;
}

bool ListProjectNoteRequiredAttributesResponse::noteRequiredAttributesIsSet() const
{
    return noteRequiredAttributesIsSet_;
}

void ListProjectNoteRequiredAttributesResponse::unsetnoteRequiredAttributes()
{
    noteRequiredAttributesIsSet_ = false;
}

}
}
}
}
}


