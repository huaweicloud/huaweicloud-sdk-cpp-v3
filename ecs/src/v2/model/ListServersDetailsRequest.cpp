

#include "huaweicloud/ecs/v2/model/ListServersDetailsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServersDetailsRequest::ListServersDetailsRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    notTags_ = "";
    notTagsIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    reservationId_ = "";
    reservationIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    ipEq_ = "";
    ipEqIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
}

ListServersDetailsRequest::~ListServersDetailsRequest() = default;

void ListServersDetailsRequest::validate()
{
}

web::json::value ListServersDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(notTagsIsSet_) {
        val[utility::conversions::to_string_t("not-tags")] = ModelBase::toJson(notTags_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(reservationIdIsSet_) {
        val[utility::conversions::to_string_t("reservation_id")] = ModelBase::toJson(reservationId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(ipEqIsSet_) {
        val[utility::conversions::to_string_t("ip_eq")] = ModelBase::toJson(ipEq_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}

bool ListServersDetailsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ip_eq"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_eq"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpEq(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    return ok;
}

std::string ListServersDetailsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListServersDetailsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListServersDetailsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListServersDetailsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListServersDetailsRequest::getFlavor() const
{
    return flavor_;
}

void ListServersDetailsRequest::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ListServersDetailsRequest::flavorIsSet() const
{
    return flavorIsSet_;
}

void ListServersDetailsRequest::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string ListServersDetailsRequest::getIp() const
{
    return ip_;
}

void ListServersDetailsRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListServersDetailsRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ListServersDetailsRequest::unsetip()
{
    ipIsSet_ = false;
}

int32_t ListServersDetailsRequest::getLimit() const
{
    return limit_;
}

void ListServersDetailsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListServersDetailsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListServersDetailsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListServersDetailsRequest::getName() const
{
    return name_;
}

void ListServersDetailsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListServersDetailsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListServersDetailsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListServersDetailsRequest::getNotTags() const
{
    return notTags_;
}

void ListServersDetailsRequest::setNotTags(const std::string& value)
{
    notTags_ = value;
    notTagsIsSet_ = true;
}

bool ListServersDetailsRequest::notTagsIsSet() const
{
    return notTagsIsSet_;
}

void ListServersDetailsRequest::unsetnotTags()
{
    notTagsIsSet_ = false;
}

int32_t ListServersDetailsRequest::getOffset() const
{
    return offset_;
}

void ListServersDetailsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListServersDetailsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListServersDetailsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListServersDetailsRequest::getReservationId() const
{
    return reservationId_;
}

void ListServersDetailsRequest::setReservationId(const std::string& value)
{
    reservationId_ = value;
    reservationIdIsSet_ = true;
}

bool ListServersDetailsRequest::reservationIdIsSet() const
{
    return reservationIdIsSet_;
}

void ListServersDetailsRequest::unsetreservationId()
{
    reservationIdIsSet_ = false;
}

std::string ListServersDetailsRequest::getStatus() const
{
    return status_;
}

void ListServersDetailsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListServersDetailsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListServersDetailsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListServersDetailsRequest::getTags() const
{
    return tags_;
}

void ListServersDetailsRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListServersDetailsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListServersDetailsRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListServersDetailsRequest::getIpEq() const
{
    return ipEq_;
}

void ListServersDetailsRequest::setIpEq(const std::string& value)
{
    ipEq_ = value;
    ipEqIsSet_ = true;
}

bool ListServersDetailsRequest::ipEqIsSet() const
{
    return ipEqIsSet_;
}

void ListServersDetailsRequest::unsetipEq()
{
    ipEqIsSet_ = false;
}

std::string ListServersDetailsRequest::getServerId() const
{
    return serverId_;
}

void ListServersDetailsRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ListServersDetailsRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ListServersDetailsRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


