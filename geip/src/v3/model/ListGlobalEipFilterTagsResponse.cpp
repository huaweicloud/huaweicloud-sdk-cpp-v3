

#include "huaweicloud/geip/v3/model/ListGlobalEipFilterTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGlobalEipFilterTagsResponse::ListGlobalEipFilterTagsResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListGlobalEipFilterTagsResponse::~ListGlobalEipFilterTagsResponse() = default;

void ListGlobalEipFilterTagsResponse::validate()
{
}

web::json::value ListGlobalEipFilterTagsResponse::toJson() const
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
bool ListGlobalEipFilterTagsResponse::fromJson(const web::json::value& val)
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


std::vector<GeipResource>& ListGlobalEipFilterTagsResponse::getResources()
{
    return resources_;
}

void ListGlobalEipFilterTagsResponse::setResources(const std::vector<GeipResource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListGlobalEipFilterTagsResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListGlobalEipFilterTagsResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ListGlobalEipFilterTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListGlobalEipFilterTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListGlobalEipFilterTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListGlobalEipFilterTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::string ListGlobalEipFilterTagsResponse::getRequestId() const
{
    return requestId_;
}

void ListGlobalEipFilterTagsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListGlobalEipFilterTagsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListGlobalEipFilterTagsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListGlobalEipFilterTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListGlobalEipFilterTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListGlobalEipFilterTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListGlobalEipFilterTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


