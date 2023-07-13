

#include "huaweicloud/eip/v2/model/ListPublicipsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ListPublicipsRequest::ListPublicipsRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    portIdIsSet_ = false;
    publicIpAddressIsSet_ = false;
    privateIpAddressIsSet_ = false;
    idIsSet_ = false;
    allowShareBandwidthTypeAnyIsSet_ = false;
}

ListPublicipsRequest::~ListPublicipsRequest() = default;

void ListPublicipsRequest::validate()
{
}

web::json::value ListPublicipsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(publicIpAddressIsSet_) {
        val[utility::conversions::to_string_t("public_ip_address")] = ModelBase::toJson(publicIpAddress_);
    }
    if(privateIpAddressIsSet_) {
        val[utility::conversions::to_string_t("private_ip_address")] = ModelBase::toJson(privateIpAddress_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(allowShareBandwidthTypeAnyIsSet_) {
        val[utility::conversions::to_string_t("allow_share_bandwidth_type_any")] = ModelBase::toJson(allowShareBandwidthTypeAny_);
    }

    return val;
}

bool ListPublicipsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_address"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_ip_address"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow_share_bandwidth_type_any"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_share_bandwidth_type_any"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowShareBandwidthTypeAny(refVal);
        }
    }
    return ok;
}

std::string ListPublicipsRequest::getMarker() const
{
    return marker_;
}

void ListPublicipsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListPublicipsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListPublicipsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListPublicipsRequest::getLimit() const
{
    return limit_;
}

void ListPublicipsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPublicipsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPublicipsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListPublicipsRequest::getIpVersion() const
{
    return ipVersion_;
}

void ListPublicipsRequest::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool ListPublicipsRequest::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void ListPublicipsRequest::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string ListPublicipsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListPublicipsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListPublicipsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListPublicipsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getPortId()
{
    return portId_;
}

void ListPublicipsRequest::setPortId(const std::vector<std::string>& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool ListPublicipsRequest::portIdIsSet() const
{
    return portIdIsSet_;
}

void ListPublicipsRequest::unsetportId()
{
    portIdIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getPublicIpAddress()
{
    return publicIpAddress_;
}

void ListPublicipsRequest::setPublicIpAddress(const std::vector<std::string>& value)
{
    publicIpAddress_ = value;
    publicIpAddressIsSet_ = true;
}

bool ListPublicipsRequest::publicIpAddressIsSet() const
{
    return publicIpAddressIsSet_;
}

void ListPublicipsRequest::unsetpublicIpAddress()
{
    publicIpAddressIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getPrivateIpAddress()
{
    return privateIpAddress_;
}

void ListPublicipsRequest::setPrivateIpAddress(const std::vector<std::string>& value)
{
    privateIpAddress_ = value;
    privateIpAddressIsSet_ = true;
}

bool ListPublicipsRequest::privateIpAddressIsSet() const
{
    return privateIpAddressIsSet_;
}

void ListPublicipsRequest::unsetprivateIpAddress()
{
    privateIpAddressIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getId()
{
    return id_;
}

void ListPublicipsRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListPublicipsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListPublicipsRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getAllowShareBandwidthTypeAny()
{
    return allowShareBandwidthTypeAny_;
}

void ListPublicipsRequest::setAllowShareBandwidthTypeAny(const std::vector<std::string>& value)
{
    allowShareBandwidthTypeAny_ = value;
    allowShareBandwidthTypeAnyIsSet_ = true;
}

bool ListPublicipsRequest::allowShareBandwidthTypeAnyIsSet() const
{
    return allowShareBandwidthTypeAnyIsSet_;
}

void ListPublicipsRequest::unsetallowShareBandwidthTypeAny()
{
    allowShareBandwidthTypeAnyIsSet_ = false;
}

}
}
}
}
}


