

#include "huaweicloud/identitycenterstore/v1/model/CreateGroupMembershipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateGroupMembershipResponse::CreateGroupMembershipResponse()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    membershipId_ = "";
    membershipIdIsSet_ = false;
}

CreateGroupMembershipResponse::~CreateGroupMembershipResponse() = default;

void CreateGroupMembershipResponse::validate()
{
}

web::json::value CreateGroupMembershipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(membershipIdIsSet_) {
        val[utility::conversions::to_string_t("membership_id")] = ModelBase::toJson(membershipId_);
    }

    return val;
}
bool CreateGroupMembershipResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("membership_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("membership_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMembershipId(refVal);
        }
    }
    return ok;
}


std::string CreateGroupMembershipResponse::getIdentityStoreId() const
{
    return identityStoreId_;
}

void CreateGroupMembershipResponse::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool CreateGroupMembershipResponse::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void CreateGroupMembershipResponse::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string CreateGroupMembershipResponse::getMembershipId() const
{
    return membershipId_;
}

void CreateGroupMembershipResponse::setMembershipId(const std::string& value)
{
    membershipId_ = value;
    membershipIdIsSet_ = true;
}

bool CreateGroupMembershipResponse::membershipIdIsSet() const
{
    return membershipIdIsSet_;
}

void CreateGroupMembershipResponse::unsetmembershipId()
{
    membershipIdIsSet_ = false;
}

}
}
}
}
}


