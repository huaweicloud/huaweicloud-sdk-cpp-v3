

#include "huaweicloud/eip/v3/model/ListPublicipsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListPublicipsResponse::ListPublicipsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    publicipsIsSet_ = false;
    pageInfoIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListPublicipsResponse::~ListPublicipsResponse() = default;

void ListPublicipsResponse::validate()
{
}

web::json::value ListPublicipsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(publicipsIsSet_) {
        val[utility::conversions::to_string_t("publicips")] = ModelBase::toJson(publicips_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListPublicipsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("publicips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicips"));
        if(!fieldValue.is_null())
        {
            std::vector<PublicipSingleShowResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicips(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::string ListPublicipsResponse::getRequestId() const
{
    return requestId_;
}

void ListPublicipsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListPublicipsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListPublicipsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<PublicipSingleShowResp>& ListPublicipsResponse::getPublicips()
{
    return publicips_;
}

void ListPublicipsResponse::setPublicips(const std::vector<PublicipSingleShowResp>& value)
{
    publicips_ = value;
    publicipsIsSet_ = true;
}

bool ListPublicipsResponse::publicipsIsSet() const
{
    return publicipsIsSet_;
}

void ListPublicipsResponse::unsetpublicips()
{
    publicipsIsSet_ = false;
}

PageInfoOption ListPublicipsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListPublicipsResponse::setPageInfo(const PageInfoOption& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListPublicipsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListPublicipsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

int32_t ListPublicipsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListPublicipsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListPublicipsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListPublicipsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


