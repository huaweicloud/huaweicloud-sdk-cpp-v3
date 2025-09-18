

#include "huaweicloud/ga/v1/model/ListIpGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListIpGroupsResponse::ListIpGroupsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    ipGroupsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListIpGroupsResponse::~ListIpGroupsResponse() = default;

void ListIpGroupsResponse::validate()
{
}

web::json::value ListIpGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(ipGroupsIsSet_) {
        val[utility::conversions::to_string_t("ip_groups")] = ModelBase::toJson(ipGroups_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListIpGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<IpGroupDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::string ListIpGroupsResponse::getRequestId() const
{
    return requestId_;
}

void ListIpGroupsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListIpGroupsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListIpGroupsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<IpGroupDetail>& ListIpGroupsResponse::getIpGroups()
{
    return ipGroups_;
}

void ListIpGroupsResponse::setIpGroups(const std::vector<IpGroupDetail>& value)
{
    ipGroups_ = value;
    ipGroupsIsSet_ = true;
}

bool ListIpGroupsResponse::ipGroupsIsSet() const
{
    return ipGroupsIsSet_;
}

void ListIpGroupsResponse::unsetipGroups()
{
    ipGroupsIsSet_ = false;
}

PageInfo ListIpGroupsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListIpGroupsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListIpGroupsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListIpGroupsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


