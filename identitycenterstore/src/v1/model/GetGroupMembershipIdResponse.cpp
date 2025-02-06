

#include "huaweicloud/identitycenterstore/v1/model/GetGroupMembershipIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GetGroupMembershipIdResponse::GetGroupMembershipIdResponse()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    membershipId_ = "";
    membershipIdIsSet_ = false;
}

GetGroupMembershipIdResponse::~GetGroupMembershipIdResponse() = default;

void GetGroupMembershipIdResponse::validate()
{
}

web::json::value GetGroupMembershipIdResponse::toJson() const
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
bool GetGroupMembershipIdResponse::fromJson(const web::json::value& val)
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


std::string GetGroupMembershipIdResponse::getIdentityStoreId() const
{
    return identityStoreId_;
}

void GetGroupMembershipIdResponse::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool GetGroupMembershipIdResponse::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void GetGroupMembershipIdResponse::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string GetGroupMembershipIdResponse::getMembershipId() const
{
    return membershipId_;
}

void GetGroupMembershipIdResponse::setMembershipId(const std::string& value)
{
    membershipId_ = value;
    membershipIdIsSet_ = true;
}

bool GetGroupMembershipIdResponse::membershipIdIsSet() const
{
    return membershipIdIsSet_;
}

void GetGroupMembershipIdResponse::unsetmembershipId()
{
    membershipIdIsSet_ = false;
}

}
}
}
}
}


