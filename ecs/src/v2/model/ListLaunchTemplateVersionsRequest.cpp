

#include "huaweicloud/ecs/v2/model/ListLaunchTemplateVersionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListLaunchTemplateVersionsRequest::ListLaunchTemplateVersionsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    launchTemplateId_ = "";
    launchTemplateIdIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    flavorId_ = "";
    flavorIdIsSet_ = false;
    versionIsSet_ = false;
}

ListLaunchTemplateVersionsRequest::~ListLaunchTemplateVersionsRequest() = default;

void ListLaunchTemplateVersionsRequest::validate()
{
}

web::json::value ListLaunchTemplateVersionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(launchTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("launch_template_id")] = ModelBase::toJson(launchTemplateId_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool ListLaunchTemplateVersionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("launch_template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("launch_template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLaunchTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


int32_t ListLaunchTemplateVersionsRequest::getLimit() const
{
    return limit_;
}

void ListLaunchTemplateVersionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLaunchTemplateVersionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLaunchTemplateVersionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListLaunchTemplateVersionsRequest::getMarker() const
{
    return marker_;
}

void ListLaunchTemplateVersionsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListLaunchTemplateVersionsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListLaunchTemplateVersionsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListLaunchTemplateVersionsRequest::getLaunchTemplateId() const
{
    return launchTemplateId_;
}

void ListLaunchTemplateVersionsRequest::setLaunchTemplateId(const std::string& value)
{
    launchTemplateId_ = value;
    launchTemplateIdIsSet_ = true;
}

bool ListLaunchTemplateVersionsRequest::launchTemplateIdIsSet() const
{
    return launchTemplateIdIsSet_;
}

void ListLaunchTemplateVersionsRequest::unsetlaunchTemplateId()
{
    launchTemplateIdIsSet_ = false;
}

std::string ListLaunchTemplateVersionsRequest::getImageId() const
{
    return imageId_;
}

void ListLaunchTemplateVersionsRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ListLaunchTemplateVersionsRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ListLaunchTemplateVersionsRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ListLaunchTemplateVersionsRequest::getFlavorId() const
{
    return flavorId_;
}

void ListLaunchTemplateVersionsRequest::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool ListLaunchTemplateVersionsRequest::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void ListLaunchTemplateVersionsRequest::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

std::vector<int32_t>& ListLaunchTemplateVersionsRequest::getVersion()
{
    return version_;
}

void ListLaunchTemplateVersionsRequest::setVersion(std::vector<int32_t> value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListLaunchTemplateVersionsRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ListLaunchTemplateVersionsRequest::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


