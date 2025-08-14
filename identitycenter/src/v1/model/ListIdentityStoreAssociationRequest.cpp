

#include "huaweicloud/identitycenter/v1/model/ListIdentityStoreAssociationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListIdentityStoreAssociationRequest::ListIdentityStoreAssociationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListIdentityStoreAssociationRequest::~ListIdentityStoreAssociationRequest() = default;

void ListIdentityStoreAssociationRequest::validate()
{
}

web::json::value ListIdentityStoreAssociationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListIdentityStoreAssociationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListIdentityStoreAssociationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListIdentityStoreAssociationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListIdentityStoreAssociationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListIdentityStoreAssociationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListIdentityStoreAssociationRequest::getInstanceId() const
{
    return instanceId_;
}

void ListIdentityStoreAssociationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListIdentityStoreAssociationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListIdentityStoreAssociationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


