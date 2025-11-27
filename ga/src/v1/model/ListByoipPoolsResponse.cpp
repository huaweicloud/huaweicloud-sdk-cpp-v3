

#include "huaweicloud/ga/v1/model/ListByoipPoolsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListByoipPoolsResponse::ListByoipPoolsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    byoipPoolsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListByoipPoolsResponse::~ListByoipPoolsResponse() = default;

void ListByoipPoolsResponse::validate()
{
}

web::json::value ListByoipPoolsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(byoipPoolsIsSet_) {
        val[utility::conversions::to_string_t("byoip_pools")] = ModelBase::toJson(byoipPools_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListByoipPoolsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("byoip_pools"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("byoip_pools"));
        if(!fieldValue.is_null())
        {
            std::vector<ByoipPool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setByoipPools(refVal);
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


std::string ListByoipPoolsResponse::getRequestId() const
{
    return requestId_;
}

void ListByoipPoolsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListByoipPoolsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListByoipPoolsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<ByoipPool>& ListByoipPoolsResponse::getByoipPools()
{
    return byoipPools_;
}

void ListByoipPoolsResponse::setByoipPools(const std::vector<ByoipPool>& value)
{
    byoipPools_ = value;
    byoipPoolsIsSet_ = true;
}

bool ListByoipPoolsResponse::byoipPoolsIsSet() const
{
    return byoipPoolsIsSet_;
}

void ListByoipPoolsResponse::unsetbyoipPools()
{
    byoipPoolsIsSet_ = false;
}

PageInfo ListByoipPoolsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListByoipPoolsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListByoipPoolsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListByoipPoolsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


