

#include "huaweicloud/eip/v3/model/GeipBindingsInternalResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




GeipBindingsInternalResp::GeipBindingsInternalResp()
{
    geipId_ = "";
    geipIdIsSet_ = false;
    geipIpAddress_ = "";
    geipIpAddressIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    gcbandwidthIsSet_ = false;
    vnicIsSet_ = false;
    vnListIsSet_ = false;
}

GeipBindingsInternalResp::~GeipBindingsInternalResp() = default;

void GeipBindingsInternalResp::validate()
{
}

web::json::value GeipBindingsInternalResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(geipIdIsSet_) {
        val[utility::conversions::to_string_t("geip_id")] = ModelBase::toJson(geipId_);
    }
    if(geipIpAddressIsSet_) {
        val[utility::conversions::to_string_t("geip_ip_address")] = ModelBase::toJson(geipIpAddress_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(gcbandwidthIsSet_) {
        val[utility::conversions::to_string_t("gcbandwidth")] = ModelBase::toJson(gcbandwidth_);
    }
    if(vnicIsSet_) {
        val[utility::conversions::to_string_t("vnic")] = ModelBase::toJson(vnic_);
    }
    if(vnListIsSet_) {
        val[utility::conversions::to_string_t("vn_list")] = ModelBase::toJson(vnList_);
    }

    return val;
}
bool GeipBindingsInternalResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("geip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("geip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("geip_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("geip_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeipIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gcbandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gcbandwidth"));
        if(!fieldValue.is_null())
        {
            BackboneBandwidthResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGcbandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic"));
        if(!fieldValue.is_null())
        {
            InstanceVnicResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vn_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vn_list"));
        if(!fieldValue.is_null())
        {
            std::vector<InstancevirtualListResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnList(refVal);
        }
    }
    return ok;
}


std::string GeipBindingsInternalResp::getGeipId() const
{
    return geipId_;
}

void GeipBindingsInternalResp::setGeipId(const std::string& value)
{
    geipId_ = value;
    geipIdIsSet_ = true;
}

bool GeipBindingsInternalResp::geipIdIsSet() const
{
    return geipIdIsSet_;
}

void GeipBindingsInternalResp::unsetgeipId()
{
    geipIdIsSet_ = false;
}

std::string GeipBindingsInternalResp::getGeipIpAddress() const
{
    return geipIpAddress_;
}

void GeipBindingsInternalResp::setGeipIpAddress(const std::string& value)
{
    geipIpAddress_ = value;
    geipIpAddressIsSet_ = true;
}

bool GeipBindingsInternalResp::geipIpAddressIsSet() const
{
    return geipIpAddressIsSet_;
}

void GeipBindingsInternalResp::unsetgeipIpAddress()
{
    geipIpAddressIsSet_ = false;
}

std::string GeipBindingsInternalResp::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void GeipBindingsInternalResp::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool GeipBindingsInternalResp::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void GeipBindingsInternalResp::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::string GeipBindingsInternalResp::getCreatedAt() const
{
    return createdAt_;
}

void GeipBindingsInternalResp::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GeipBindingsInternalResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GeipBindingsInternalResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string GeipBindingsInternalResp::getUpdatedAt() const
{
    return updatedAt_;
}

void GeipBindingsInternalResp::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool GeipBindingsInternalResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void GeipBindingsInternalResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string GeipBindingsInternalResp::getInstanceType() const
{
    return instanceType_;
}

void GeipBindingsInternalResp::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool GeipBindingsInternalResp::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void GeipBindingsInternalResp::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string GeipBindingsInternalResp::getInstanceId() const
{
    return instanceId_;
}

void GeipBindingsInternalResp::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool GeipBindingsInternalResp::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void GeipBindingsInternalResp::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BackboneBandwidthResp GeipBindingsInternalResp::getGcbandwidth() const
{
    return gcbandwidth_;
}

void GeipBindingsInternalResp::setGcbandwidth(const BackboneBandwidthResp& value)
{
    gcbandwidth_ = value;
    gcbandwidthIsSet_ = true;
}

bool GeipBindingsInternalResp::gcbandwidthIsSet() const
{
    return gcbandwidthIsSet_;
}

void GeipBindingsInternalResp::unsetgcbandwidth()
{
    gcbandwidthIsSet_ = false;
}

InstanceVnicResp GeipBindingsInternalResp::getVnic() const
{
    return vnic_;
}

void GeipBindingsInternalResp::setVnic(const InstanceVnicResp& value)
{
    vnic_ = value;
    vnicIsSet_ = true;
}

bool GeipBindingsInternalResp::vnicIsSet() const
{
    return vnicIsSet_;
}

void GeipBindingsInternalResp::unsetvnic()
{
    vnicIsSet_ = false;
}

std::vector<InstancevirtualListResp>& GeipBindingsInternalResp::getVnList()
{
    return vnList_;
}

void GeipBindingsInternalResp::setVnList(const std::vector<InstancevirtualListResp>& value)
{
    vnList_ = value;
    vnListIsSet_ = true;
}

bool GeipBindingsInternalResp::vnListIsSet() const
{
    return vnListIsSet_;
}

void GeipBindingsInternalResp::unsetvnList()
{
    vnListIsSet_ = false;
}

}
}
}
}
}


