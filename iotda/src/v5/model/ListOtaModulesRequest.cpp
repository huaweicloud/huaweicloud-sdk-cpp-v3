

#include "huaweicloud/iotda/v5/model/ListOtaModulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListOtaModulesRequest::ListOtaModulesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListOtaModulesRequest::~ListOtaModulesRequest() = default;

void ListOtaModulesRequest::validate()
{
}

web::json::value ListOtaModulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListOtaModulesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
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


std::string ListOtaModulesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListOtaModulesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListOtaModulesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListOtaModulesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListOtaModulesRequest::getAppId() const
{
    return appId_;
}

void ListOtaModulesRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListOtaModulesRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListOtaModulesRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ListOtaModulesRequest::getProductId() const
{
    return productId_;
}

void ListOtaModulesRequest::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ListOtaModulesRequest::productIdIsSet() const
{
    return productIdIsSet_;
}

void ListOtaModulesRequest::unsetproductId()
{
    productIdIsSet_ = false;
}

int32_t ListOtaModulesRequest::getLimit() const
{
    return limit_;
}

void ListOtaModulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOtaModulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListOtaModulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListOtaModulesRequest::getMarker() const
{
    return marker_;
}

void ListOtaModulesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListOtaModulesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListOtaModulesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListOtaModulesRequest::getOffset() const
{
    return offset_;
}

void ListOtaModulesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListOtaModulesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListOtaModulesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


