

#include "huaweicloud/eip/v3/model/ListPublicipPoolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListPublicipPoolResponse::ListPublicipPoolResponse()
{
    publicipPoolsIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListPublicipPoolResponse::~ListPublicipPoolResponse() = default;

void ListPublicipPoolResponse::validate()
{
}

web::json::value ListPublicipPoolResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipPoolsIsSet_) {
        val[utility::conversions::to_string_t("publicip_pools")] = ModelBase::toJson(publicipPools_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListPublicipPoolResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_pools"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_pools"));
        if(!fieldValue.is_null())
        {
            std::vector<PublicipPoolShowResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipPools(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<PublicipPoolShowResp>& ListPublicipPoolResponse::getPublicipPools()
{
    return publicipPools_;
}

void ListPublicipPoolResponse::setPublicipPools(const std::vector<PublicipPoolShowResp>& value)
{
    publicipPools_ = value;
    publicipPoolsIsSet_ = true;
}

bool ListPublicipPoolResponse::publicipPoolsIsSet() const
{
    return publicipPoolsIsSet_;
}

void ListPublicipPoolResponse::unsetpublicipPools()
{
    publicipPoolsIsSet_ = false;
}

std::string ListPublicipPoolResponse::getRequestId() const
{
    return requestId_;
}

void ListPublicipPoolResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListPublicipPoolResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListPublicipPoolResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

PageInfoOption ListPublicipPoolResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListPublicipPoolResponse::setPageInfo(const PageInfoOption& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListPublicipPoolResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListPublicipPoolResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


