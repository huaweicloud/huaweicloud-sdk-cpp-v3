

#include "huaweicloud/ga/v1/model/ListEndpointGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListEndpointGroupsResponse::ListEndpointGroupsResponse()
{
    endpointGroupsIsSet_ = false;
    pageInfoIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListEndpointGroupsResponse::~ListEndpointGroupsResponse() = default;

void ListEndpointGroupsResponse::validate()
{
}

web::json::value ListEndpointGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointGroupsIsSet_) {
        val[utility::conversions::to_string_t("endpoint_groups")] = ModelBase::toJson(endpointGroups_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ListEndpointGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<EndpointGroupDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointGroups(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::vector<EndpointGroupDetail>& ListEndpointGroupsResponse::getEndpointGroups()
{
    return endpointGroups_;
}

void ListEndpointGroupsResponse::setEndpointGroups(const std::vector<EndpointGroupDetail>& value)
{
    endpointGroups_ = value;
    endpointGroupsIsSet_ = true;
}

bool ListEndpointGroupsResponse::endpointGroupsIsSet() const
{
    return endpointGroupsIsSet_;
}

void ListEndpointGroupsResponse::unsetendpointGroups()
{
    endpointGroupsIsSet_ = false;
}

PageInfo ListEndpointGroupsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListEndpointGroupsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListEndpointGroupsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListEndpointGroupsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListEndpointGroupsResponse::getRequestId() const
{
    return requestId_;
}

void ListEndpointGroupsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListEndpointGroupsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListEndpointGroupsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


