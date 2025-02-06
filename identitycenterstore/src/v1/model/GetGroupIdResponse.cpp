

#include "huaweicloud/identitycenterstore/v1/model/GetGroupIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GetGroupIdResponse::GetGroupIdResponse()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
}

GetGroupIdResponse::~GetGroupIdResponse() = default;

void GetGroupIdResponse::validate()
{
}

web::json::value GetGroupIdResponse::toJson() const
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
bool GetGroupIdResponse::fromJson(const web::json::value& val)
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


std::string GetGroupIdResponse::getGroupId() const
{
    return groupId_;
}

void GetGroupIdResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool GetGroupIdResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void GetGroupIdResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string GetGroupIdResponse::getIdentityStoreId() const
{
    return identityStoreId_;
}

void GetGroupIdResponse::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool GetGroupIdResponse::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void GetGroupIdResponse::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

}
}
}
}
}


