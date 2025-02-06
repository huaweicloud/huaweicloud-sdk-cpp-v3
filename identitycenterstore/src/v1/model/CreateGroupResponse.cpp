

#include "huaweicloud/identitycenterstore/v1/model/CreateGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateGroupResponse::CreateGroupResponse()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
}

CreateGroupResponse::~CreateGroupResponse() = default;

void CreateGroupResponse::validate()
{
}

web::json::value CreateGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }

    return val;
}
bool CreateGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    return ok;
}


std::string CreateGroupResponse::getGroupId() const
{
    return groupId_;
}

void CreateGroupResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateGroupResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateGroupResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string CreateGroupResponse::getIdentityStoreId() const
{
    return identityStoreId_;
}

void CreateGroupResponse::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool CreateGroupResponse::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void CreateGroupResponse::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

}
}
}
}
}


