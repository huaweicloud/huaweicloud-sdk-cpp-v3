

#include "huaweicloud/identitycenter/v1/model/AssignmentConfigDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




AssignmentConfigDto::AssignmentConfigDto()
{
    assignmentRequired_ = false;
    assignmentRequiredIsSet_ = false;
}

AssignmentConfigDto::~AssignmentConfigDto() = default;

void AssignmentConfigDto::validate()
{
}

web::json::value AssignmentConfigDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assignmentRequiredIsSet_) {
        val[utility::conversions::to_string_t("assignment_required")] = ModelBase::toJson(assignmentRequired_);
    }

    return val;
}
bool AssignmentConfigDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("assignment_required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignment_required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignmentRequired(refVal);
        }
    }
    return ok;
}


bool AssignmentConfigDto::isAssignmentRequired() const
{
    return assignmentRequired_;
}

void AssignmentConfigDto::setAssignmentRequired(bool value)
{
    assignmentRequired_ = value;
    assignmentRequiredIsSet_ = true;
}

bool AssignmentConfigDto::assignmentRequiredIsSet() const
{
    return assignmentRequiredIsSet_;
}

void AssignmentConfigDto::unsetassignmentRequired()
{
    assignmentRequiredIsSet_ = false;
}

}
}
}
}
}


