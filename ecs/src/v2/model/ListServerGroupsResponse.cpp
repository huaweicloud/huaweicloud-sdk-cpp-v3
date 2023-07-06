

#include "huaweicloud/ecs/v2/model/ListServerGroupsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServerGroupsResponse::ListServerGroupsResponse()
{
    serverGroupsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListServerGroupsResponse::~ListServerGroupsResponse() = default;

void ListServerGroupsResponse::validate()
{
}

web::json::value ListServerGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupsIsSet_) {
        val[utility::conversions::to_string_t("server_groups")] = ModelBase::toJson(serverGroups_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}

bool ListServerGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<ListServerGroupsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            ListServerGroupsPageInfoResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}

std::vector<ListServerGroupsResult>& ListServerGroupsResponse::getServerGroups()
{
    return serverGroups_;
}

void ListServerGroupsResponse::setServerGroups(const std::vector<ListServerGroupsResult>& value)
{
    serverGroups_ = value;
    serverGroupsIsSet_ = true;
}

bool ListServerGroupsResponse::serverGroupsIsSet() const
{
    return serverGroupsIsSet_;
}

void ListServerGroupsResponse::unsetserverGroups()
{
    serverGroupsIsSet_ = false;
}

ListServerGroupsPageInfoResult ListServerGroupsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListServerGroupsResponse::setPageInfo(const ListServerGroupsPageInfoResult& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListServerGroupsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListServerGroupsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


