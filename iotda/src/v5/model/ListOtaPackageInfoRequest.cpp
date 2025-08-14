

#include "huaweicloud/iotda/v5/model/ListOtaPackageInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListOtaPackageInfoRequest::ListOtaPackageInfoRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    packageType_ = "";
    packageTypeIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListOtaPackageInfoRequest::~ListOtaPackageInfoRequest() = default;

void ListOtaPackageInfoRequest::validate()
{
}

web::json::value ListOtaPackageInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(packageTypeIsSet_) {
        val[utility::conversions::to_string_t("package_type")] = ModelBase::toJson(packageType_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
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
bool ListOtaPackageInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("package_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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


std::string ListOtaPackageInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void ListOtaPackageInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListOtaPackageInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListOtaPackageInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListOtaPackageInfoRequest::getAppId() const
{
    return appId_;
}

void ListOtaPackageInfoRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListOtaPackageInfoRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListOtaPackageInfoRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ListOtaPackageInfoRequest::getPackageType() const
{
    return packageType_;
}

void ListOtaPackageInfoRequest::setPackageType(const std::string& value)
{
    packageType_ = value;
    packageTypeIsSet_ = true;
}

bool ListOtaPackageInfoRequest::packageTypeIsSet() const
{
    return packageTypeIsSet_;
}

void ListOtaPackageInfoRequest::unsetpackageType()
{
    packageTypeIsSet_ = false;
}

std::string ListOtaPackageInfoRequest::getProductId() const
{
    return productId_;
}

void ListOtaPackageInfoRequest::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ListOtaPackageInfoRequest::productIdIsSet() const
{
    return productIdIsSet_;
}

void ListOtaPackageInfoRequest::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string ListOtaPackageInfoRequest::getVersion() const
{
    return version_;
}

void ListOtaPackageInfoRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListOtaPackageInfoRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ListOtaPackageInfoRequest::unsetversion()
{
    versionIsSet_ = false;
}

int32_t ListOtaPackageInfoRequest::getLimit() const
{
    return limit_;
}

void ListOtaPackageInfoRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOtaPackageInfoRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListOtaPackageInfoRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListOtaPackageInfoRequest::getMarker() const
{
    return marker_;
}

void ListOtaPackageInfoRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListOtaPackageInfoRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListOtaPackageInfoRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListOtaPackageInfoRequest::getOffset() const
{
    return offset_;
}

void ListOtaPackageInfoRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListOtaPackageInfoRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListOtaPackageInfoRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


