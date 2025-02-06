

#include "huaweicloud/identitycenterstore/v1/model/ListGroupMembershipsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListGroupMembershipsResponse::ListGroupMembershipsResponse()
{
    groupMembershipsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListGroupMembershipsResponse::~ListGroupMembershipsResponse() = default;

void ListGroupMembershipsResponse::validate()
{
}

web::json::value ListGroupMembershipsResponse::toJson() const
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
bool ListGroupMembershipsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_memberships"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_memberships"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupMembershipDto> refVal;
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


std::vector<GroupMembershipDto>& ListGroupMembershipsResponse::getGroupMemberships()
{
    return groupMemberships_;
}

void ListGroupMembershipsResponse::setGroupMemberships(const std::vector<GroupMembershipDto>& value)
{
    groupMemberships_ = value;
    groupMembershipsIsSet_ = true;
}

bool ListGroupMembershipsResponse::groupMembershipsIsSet() const
{
    return groupMembershipsIsSet_;
}

void ListGroupMembershipsResponse::unsetgroupMemberships()
{
    groupMembershipsIsSet_ = false;
}

PageInfoDto ListGroupMembershipsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListGroupMembershipsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListGroupMembershipsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListGroupMembershipsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


