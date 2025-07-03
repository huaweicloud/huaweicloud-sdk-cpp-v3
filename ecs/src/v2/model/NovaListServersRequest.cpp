

#include "huaweicloud/ecs/v2/model/NovaListServersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaListServersRequest::NovaListServersRequest()
{
    changesSince_ = "";
    changesSinceIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
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

NovaListServersRequest::~NovaListServersRequest() = default;

void NovaListServersRequest::validate()
{
}

web::json::value NovaListServersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(changesSinceIsSet_) {
        val[utility::conversions::to_string_t("changes-since")] = ModelBase::toJson(changesSince_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(hostIsSet_) {
        val[utility::conversions::to_string_t("host")] = ModelBase::toJson(host_);
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
bool NovaListServersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHost(refVal);
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


std::string NovaListServersRequest::getChangesSince() const
{
    return changesSince_;
}

void NovaListServersRequest::setChangesSince(const std::string& value)
{
    changesSince_ = value;
    changesSinceIsSet_ = true;
}

bool NovaListServersRequest::changesSinceIsSet() const
{
    return changesSinceIsSet_;
}

void NovaListServersRequest::unsetchangesSince()
{
    changesSinceIsSet_ = false;
}

std::string NovaListServersRequest::getFlavor() const
{
    return flavor_;
}

void NovaListServersRequest::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool NovaListServersRequest::flavorIsSet() const
{
    return flavorIsSet_;
}

void NovaListServersRequest::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string NovaListServersRequest::getHost() const
{
    return host_;
}

void NovaListServersRequest::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool NovaListServersRequest::hostIsSet() const
{
    return hostIsSet_;
}

void NovaListServersRequest::unsethost()
{
    hostIsSet_ = false;
}

std::string NovaListServersRequest::getImage() const
{
    return image_;
}

void NovaListServersRequest::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool NovaListServersRequest::imageIsSet() const
{
    return imageIsSet_;
}

void NovaListServersRequest::unsetimage()
{
    imageIsSet_ = false;
}

std::string NovaListServersRequest::getIp() const
{
    return ip_;
}

void NovaListServersRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool NovaListServersRequest::ipIsSet() const
{
    return ipIsSet_;
}

void NovaListServersRequest::unsetip()
{
    ipIsSet_ = false;
}

int32_t NovaListServersRequest::getLimit() const
{
    return limit_;
}

void NovaListServersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool NovaListServersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void NovaListServersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string NovaListServersRequest::getMarker() const
{
    return marker_;
}

void NovaListServersRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool NovaListServersRequest::markerIsSet() const
{
    return markerIsSet_;
}

void NovaListServersRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string NovaListServersRequest::getName() const
{
    return name_;
}

void NovaListServersRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NovaListServersRequest::nameIsSet() const
{
    return nameIsSet_;
}

void NovaListServersRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string NovaListServersRequest::getNotTags() const
{
    return notTags_;
}

void NovaListServersRequest::setNotTags(const std::string& value)
{
    notTags_ = value;
    notTagsIsSet_ = true;
}

bool NovaListServersRequest::notTagsIsSet() const
{
    return notTagsIsSet_;
}

void NovaListServersRequest::unsetnotTags()
{
    notTagsIsSet_ = false;
}

std::string NovaListServersRequest::getReservationId() const
{
    return reservationId_;
}

void NovaListServersRequest::setReservationId(const std::string& value)
{
    reservationId_ = value;
    reservationIdIsSet_ = true;
}

bool NovaListServersRequest::reservationIdIsSet() const
{
    return reservationIdIsSet_;
}

void NovaListServersRequest::unsetreservationId()
{
    reservationIdIsSet_ = false;
}

std::string NovaListServersRequest::getSortKey() const
{
    return sortKey_;
}

void NovaListServersRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool NovaListServersRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void NovaListServersRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string NovaListServersRequest::getStatus() const
{
    return status_;
}

void NovaListServersRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NovaListServersRequest::statusIsSet() const
{
    return statusIsSet_;
}

void NovaListServersRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NovaListServersRequest::getTags() const
{
    return tags_;
}

void NovaListServersRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool NovaListServersRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void NovaListServersRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string NovaListServersRequest::getOpenStackAPIVersion() const
{
    return openStackAPIVersion_;
}

void NovaListServersRequest::setOpenStackAPIVersion(const std::string& value)
{
    openStackAPIVersion_ = value;
    openStackAPIVersionIsSet_ = true;
}

bool NovaListServersRequest::openStackAPIVersionIsSet() const
{
    return openStackAPIVersionIsSet_;
}

void NovaListServersRequest::unsetopenStackAPIVersion()
{
    openStackAPIVersionIsSet_ = false;
}

}
}
}
}
}


