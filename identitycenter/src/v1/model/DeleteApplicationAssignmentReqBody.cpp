

#include "huaweicloud/identitycenter/v1/model/DeleteApplicationAssignmentReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DeleteApplicationAssignmentReqBody::DeleteApplicationAssignmentReqBody()
{
    principalId_ = "";
    principalIdIsSet_ = false;
    principalType_ = "";
    principalTypeIsSet_ = false;
}

DeleteApplicationAssignmentReqBody::~DeleteApplicationAssignmentReqBody() = default;

void DeleteApplicationAssignmentReqBody::validate()
{
}

web::json::value DeleteApplicationAssignmentReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(principalIdIsSet_) {
        val[utility::conversions::to_string_t("principal_id")] = ModelBase::toJson(principalId_);
    }
    if(principalTypeIsSet_) {
        val[utility::conversions::to_string_t("principal_type")] = ModelBase::toJson(principalType_);
    }

    return val;
}
bool DeleteApplicationAssignmentReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("principal_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principal_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalType(refVal);
        }
    }
    return ok;
}


std::string DeleteApplicationAssignmentReqBody::getPrincipalId() const
{
    return principalId_;
}

void DeleteApplicationAssignmentReqBody::setPrincipalId(const std::string& value)
{
    principalId_ = value;
    principalIdIsSet_ = true;
}

bool DeleteApplicationAssignmentReqBody::principalIdIsSet() const
{
    return principalIdIsSet_;
}

void DeleteApplicationAssignmentReqBody::unsetprincipalId()
{
    principalIdIsSet_ = false;
}

std::string DeleteApplicationAssignmentReqBody::getPrincipalType() const
{
    return principalType_;
}

void DeleteApplicationAssignmentReqBody::setPrincipalType(const std::string& value)
{
    principalType_ = value;
    principalTypeIsSet_ = true;
}

bool DeleteApplicationAssignmentReqBody::principalTypeIsSet() const
{
    return principalTypeIsSet_;
}

void DeleteApplicationAssignmentReqBody::unsetprincipalType()
{
    principalTypeIsSet_ = false;
}

}
}
}
}
}


