

#include "huaweicloud/geip/v3/model/ListInternetBandwidthFilterTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListInternetBandwidthFilterTagsResponse::ListInternetBandwidthFilterTagsResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListInternetBandwidthFilterTagsResponse::~ListInternetBandwidthFilterTagsResponse() = default;

void ListInternetBandwidthFilterTagsResponse::validate()
{
}

web::json::value ListInternetBandwidthFilterTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListInternetBandwidthFilterTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<GeipResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<GeipResource>& ListInternetBandwidthFilterTagsResponse::getResources()
{
    return resources_;
}

void ListInternetBandwidthFilterTagsResponse::setResources(const std::vector<GeipResource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListInternetBandwidthFilterTagsResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListInternetBandwidthFilterTagsResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ListInternetBandwidthFilterTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInternetBandwidthFilterTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInternetBandwidthFilterTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInternetBandwidthFilterTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::string ListInternetBandwidthFilterTagsResponse::getRequestId() const
{
    return requestId_;
}

void ListInternetBandwidthFilterTagsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListInternetBandwidthFilterTagsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListInternetBandwidthFilterTagsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListInternetBandwidthFilterTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListInternetBandwidthFilterTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListInternetBandwidthFilterTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListInternetBandwidthFilterTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


