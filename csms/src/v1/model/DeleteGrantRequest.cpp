

#include "huaweicloud/csms/v1/model/DeleteGrantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




DeleteGrantRequest::DeleteGrantRequest()
{
    granteeUser_ = "";
    granteeUserIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

DeleteGrantRequest::~DeleteGrantRequest() = default;

void DeleteGrantRequest::validate()
{
}

web::json::value DeleteGrantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(granteeUserIsSet_) {
        val[utility::conversions::to_string_t("grantee_user")] = ModelBase::toJson(granteeUser_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool DeleteGrantRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("grantee_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grantee_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGranteeUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    return ok;
}


std::string DeleteGrantRequest::getGranteeUser() const
{
    return granteeUser_;
}

void DeleteGrantRequest::setGranteeUser(const std::string& value)
{
    granteeUser_ = value;
    granteeUserIsSet_ = true;
}

bool DeleteGrantRequest::granteeUserIsSet() const
{
    return granteeUserIsSet_;
}

void DeleteGrantRequest::unsetgranteeUser()
{
    granteeUserIsSet_ = false;
}

std::string DeleteGrantRequest::getResourceId() const
{
    return resourceId_;
}

void DeleteGrantRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool DeleteGrantRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void DeleteGrantRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


