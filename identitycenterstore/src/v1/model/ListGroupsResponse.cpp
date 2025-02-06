

#include "huaweicloud/identitycenterstore/v1/model/ListGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListGroupsResponse::ListGroupsResponse()
{
    groupsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListGroupsResponse::~ListGroupsResponse() = default;

void ListGroupsResponse::validate()
{
}

web::json::value ListGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupsIsSet_) {
        val[utility::conversions::to_string_t("groups")] = ModelBase::toJson(groups_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groups"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroups(refVal);
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


std::vector<GroupDto>& ListGroupsResponse::getGroups()
{
    return groups_;
}

void ListGroupsResponse::setGroups(const std::vector<GroupDto>& value)
{
    groups_ = value;
    groupsIsSet_ = true;
}

bool ListGroupsResponse::groupsIsSet() const
{
    return groupsIsSet_;
}

void ListGroupsResponse::unsetgroups()
{
    groupsIsSet_ = false;
}

PageInfoDto ListGroupsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListGroupsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListGroupsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListGroupsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


