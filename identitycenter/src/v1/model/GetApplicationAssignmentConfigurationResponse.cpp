

#include "huaweicloud/identitycenter/v1/model/GetApplicationAssignmentConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetApplicationAssignmentConfigurationResponse::GetApplicationAssignmentConfigurationResponse()
{
    assignmentRequired_ = false;
    assignmentRequiredIsSet_ = false;
}

GetApplicationAssignmentConfigurationResponse::~GetApplicationAssignmentConfigurationResponse() = default;

void GetApplicationAssignmentConfigurationResponse::validate()
{
}

web::json::value GetApplicationAssignmentConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assignmentRequiredIsSet_) {
        val[utility::conversions::to_string_t("assignment_required")] = ModelBase::toJson(assignmentRequired_);
    }

    return val;
}
bool GetApplicationAssignmentConfigurationResponse::fromJson(const web::json::value& val)
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


bool GetApplicationAssignmentConfigurationResponse::isAssignmentRequired() const
{
    return assignmentRequired_;
}

void GetApplicationAssignmentConfigurationResponse::setAssignmentRequired(bool value)
{
    assignmentRequired_ = value;
    assignmentRequiredIsSet_ = true;
}

bool GetApplicationAssignmentConfigurationResponse::assignmentRequiredIsSet() const
{
    return assignmentRequiredIsSet_;
}

void GetApplicationAssignmentConfigurationResponse::unsetassignmentRequired()
{
    assignmentRequiredIsSet_ = false;
}

}
}
}
}
}


