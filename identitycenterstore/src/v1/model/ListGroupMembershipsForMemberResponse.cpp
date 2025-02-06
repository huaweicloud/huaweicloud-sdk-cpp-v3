

#include "huaweicloud/identitycenterstore/v1/model/ListGroupMembershipsForMemberResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListGroupMembershipsForMemberResponse::ListGroupMembershipsForMemberResponse()
{
    groupMembershipsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListGroupMembershipsForMemberResponse::~ListGroupMembershipsForMemberResponse() = default;

void ListGroupMembershipsForMemberResponse::validate()
{
}

web::json::value ListGroupMembershipsForMemberResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupMembershipsIsSet_) {
        val[utility::conversions::to_string_t("group_memberships")] = ModelBase::toJson(groupMemberships_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListGroupMembershipsForMemberResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_memberships"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_memberships"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupMembershipItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupMemberships(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<GroupMembershipItem>& ListGroupMembershipsForMemberResponse::getGroupMemberships()
{
    return groupMemberships_;
}

void ListGroupMembershipsForMemberResponse::setGroupMemberships(const std::vector<GroupMembershipItem>& value)
{
    groupMemberships_ = value;
    groupMembershipsIsSet_ = true;
}

bool ListGroupMembershipsForMemberResponse::groupMembershipsIsSet() const
{
    return groupMembershipsIsSet_;
}

void ListGroupMembershipsForMemberResponse::unsetgroupMemberships()
{
    groupMembershipsIsSet_ = false;
}

PageInfoDto ListGroupMembershipsForMemberResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListGroupMembershipsForMemberResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListGroupMembershipsForMemberResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListGroupMembershipsForMemberResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


