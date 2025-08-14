

#include "huaweicloud/iotda/v5/model/ListProductsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListProductsRequest::ListProductsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    productName_ = "";
    productNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListProductsRequest::~ListProductsRequest() = default;

void ListProductsRequest::validate()
{
}

web::json::value ListProductsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(productNameIsSet_) {
        val[utility::conversions::to_string_t("product_name")] = ModelBase::toJson(productName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListProductsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListProductsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListProductsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListProductsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListProductsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListProductsRequest::getLimit() const
{
    return limit_;
}

void ListProductsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProductsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProductsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListProductsRequest::getMarker() const
{
    return marker_;
}

void ListProductsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListProductsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListProductsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListProductsRequest::getAppId() const
{
    return appId_;
}

void ListProductsRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListProductsRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListProductsRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ListProductsRequest::getProductName() const
{
    return productName_;
}

void ListProductsRequest::setProductName(const std::string& value)
{
    productName_ = value;
    productNameIsSet_ = true;
}

bool ListProductsRequest::productNameIsSet() const
{
    return productNameIsSet_;
}

void ListProductsRequest::unsetproductName()
{
    productNameIsSet_ = false;
}

int32_t ListProductsRequest::getOffset() const
{
    return offset_;
}

void ListProductsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProductsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProductsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


