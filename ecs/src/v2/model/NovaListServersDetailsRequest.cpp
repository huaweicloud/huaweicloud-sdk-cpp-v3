

#include "huaweicloud/ecs/v2/model/NovaListServersDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaListServersDetailsRequest::NovaListServersDetailsRequest()
{
    changesSince_ = "";
    changesSinceIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    image_ = "";
    imageIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    notTags_ = "";
    notTagsIsSet_ = false;
    reservationId_ = "";
    reservationIdIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    openStackAPIVersion_ = "";
    openStackAPIVersionIsSet_ = false;
}

NovaListServersDetailsRequest::~NovaListServersDetailsRequest() = default;

void NovaListServersDetailsRequest::validate()
{
}

web::json::value NovaListServersDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(changesSinceIsSet_) {
        val[utility::conversions::to_string_t("changes-since")] = ModelBase::toJson(changesSince_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(notTagsIsSet_) {
        val[utility::conversions::to_string_t("not-tags")] = ModelBase::toJson(notTags_);
    }
    if(reservationIdIsSet_) {
        val[utility::conversions::to_string_t("reservation_id")] = ModelBase::toJson(reservationId_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(openStackAPIVersionIsSet_) {
        val[utility::conversions::to_string_t("OpenStack-API-Version")] = ModelBase::toJson(openStackAPIVersion_);
    }

    return val;
}
bool NovaListServersDetailsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("changes-since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("changes-since"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangesSince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not-tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not-tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reservation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reservation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReservationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OpenStack-API-Version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OpenStack-API-Version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenStackAPIVersion(refVal);
        }
    }
    return ok;
}


std::string NovaListServersDetailsRequest::getChangesSince() const
{
    return changesSince_;
}

void NovaListServersDetailsRequest::setChangesSince(const std::string& value)
{
    changesSince_ = value;
    changesSinceIsSet_ = true;
}

bool NovaListServersDetailsRequest::changesSinceIsSet() const
{
    return changesSinceIsSet_;
}

void NovaListServersDetailsRequest::unsetchangesSince()
{
    changesSinceIsSet_ = false;
}

std::string NovaListServersDetailsRequest::getFlavor() const
{
    return flavor_;
}

void NovaListServersDetailsRequest::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool NovaListServersDetailsRequest::flavorIsSet() const
{
    return flavorIsSet_;
}

void NovaListServersDetailsRequest::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string NovaListServersDetailsRequest::getImage() const
{
    return image_;
}

void NovaListServersDetailsRequest::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool NovaListServersDetailsRequest::imageIsSet() const
{
    return imageIsSet_;
}

void NovaListServersDetailsRequest::unsetimage()
{
    imageIsSet_ = false;
}

std::string NovaListServersDetailsRequest::getIp() const
{
    return ip_;
}

void NovaListServersDetailsRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool NovaListServersDetailsRequest::ipIsSet() const
{
    return ipIsSet_;
}

void NovaListServersDetailsRequest::unsetip()
{
    ipIsSet_ = false;
}

int32_t NovaListServersDetailsRequest::getLimit() const
{
    return limit_;
}

void NovaListServersDetailsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool NovaListServersDetailsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void NovaListServersDetailsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string NovaListServersDetailsRequest::getMarker() const
{
    return marker_;
}

void NovaListServersDetailsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool NovaListServersDetailsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void NovaListServersDetailsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string NovaListServersDetailsRequest::getName() const
{
    return name_;
}

void NovaListServersDetailsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NovaListServersDetailsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void NovaListServersDetailsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string NovaListServersDetailsRequest::getNotTags() const
{
    return notTags_;
}

void NovaListServersDetailsRequest::setNotTags(const std::string& value)
{
    notTags_ = value;
    notTagsIsSet_ = true;
}

bool NovaListServersDetailsRequest::notTagsIsSet() const
{
    return notTagsIsSet_;
}

void NovaListServersDetailsRequest::unsetnotTags()
{
    notTagsIsSet_ = false;
}

std::string NovaListServersDetailsRequest::getReservationId() const
{
    return reservationId_;
}

void NovaListServersDetailsRequest::setReservationId(const std::string& value)
{
    reservationId_ = value;
    reservationIdIsSet_ = true;
}

bool NovaListServersDetailsRequest::reservationIdIsSet() const
{
    return reservationIdIsSet_;
}

void NovaListServersDetailsRequest::unsetreservationId()
{
    reservationIdIsSet_ = false;
}

std::string NovaListServersDetailsRequest::getSortKey() const
{
    return sortKey_;
}

void NovaListServersDetailsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool NovaListServersDetailsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void NovaListServersDetailsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string NovaListServersDetailsRequest::getStatus() const
{
    return status_;
}

void NovaListServersDetailsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NovaListServersDetailsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void NovaListServersDetailsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NovaListServersDetailsRequest::getTags() const
{
    return tags_;
}

void NovaListServersDetailsRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool NovaListServersDetailsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void NovaListServersDetailsRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string NovaListServersDetailsRequest::getOpenStackAPIVersion() const
{
    return openStackAPIVersion_;
}

void NovaListServersDetailsRequest::setOpenStackAPIVersion(const std::string& value)
{
    openStackAPIVersion_ = value;
    openStackAPIVersionIsSet_ = true;
}

bool NovaListServersDetailsRequest::openStackAPIVersionIsSet() const
{
    return openStackAPIVersionIsSet_;
}

void NovaListServersDetailsRequest::unsetopenStackAPIVersion()
{
    openStackAPIVersionIsSet_ = false;
}

}
}
}
}
}


