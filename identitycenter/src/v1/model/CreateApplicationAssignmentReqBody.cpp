

#include "huaweicloud/identitycenter/v1/model/CreateApplicationAssignmentReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreateApplicationAssignmentReqBody::CreateApplicationAssignmentReqBody()
{
    principalId_ = "";
    principalIdIsSet_ = false;
    principalType_ = "";
    principalTypeIsSet_ = false;
}

CreateApplicationAssignmentReqBody::~CreateApplicationAssignmentReqBody() = default;

void CreateApplicationAssignmentReqBody::validate()
{
}

web::json::value CreateApplicationAssignmentReqBody::toJson() const
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
bool CreateApplicationAssignmentReqBody::fromJson(const web::json::value& val)
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


std::string CreateApplicationAssignmentReqBody::getPrincipalId() const
{
    return principalId_;
}

void CreateApplicationAssignmentReqBody::setPrincipalId(const std::string& value)
{
    principalId_ = value;
    principalIdIsSet_ = true;
}

bool CreateApplicationAssignmentReqBody::principalIdIsSet() const
{
    return principalIdIsSet_;
}

void CreateApplicationAssignmentReqBody::unsetprincipalId()
{
    principalIdIsSet_ = false;
}

std::string CreateApplicationAssignmentReqBody::getPrincipalType() const
{
    return principalType_;
}

void CreateApplicationAssignmentReqBody::setPrincipalType(const std::string& value)
{
    principalType_ = value;
    principalTypeIsSet_ = true;
}

bool CreateApplicationAssignmentReqBody::principalTypeIsSet() const
{
    return principalTypeIsSet_;
}

void CreateApplicationAssignmentReqBody::unsetprincipalType()
{
    principalTypeIsSet_ = false;
}

}
}
}
}
}


