

#include "huaweicloud/eip/v3/model/BackboneBandwidthResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




BackboneBandwidthResp::BackboneBandwidthResp()
{
    id_ = "";
    idIsSet_ = false;
    adminStatus_ = "";
    adminStatusIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    shortId_ = "";
    shortIdIsSet_ = false;
    slaLevel_ = "";
    slaLevelIsSet_ = false;
    dscp_ = 0;
    dscpIsSet_ = false;
}

BackboneBandwidthResp::~BackboneBandwidthResp() = default;

void BackboneBandwidthResp::validate()
{
}

web::json::value BackboneBandwidthResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(adminStatusIsSet_) {
        val[utility::conversions::to_string_t("admin_status")] = ModelBase::toJson(adminStatus_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(shortIdIsSet_) {
        val[utility::conversions::to_string_t("short_id")] = ModelBase::toJson(shortId_);
    }
    if(slaLevelIsSet_) {
        val[utility::conversions::to_string_t("sla_level")] = ModelBase::toJson(slaLevel_);
    }
    if(dscpIsSet_) {
        val[utility::conversions::to_string_t("dscp")] = ModelBase::toJson(dscp_);
    }

    return val;
}
bool BackboneBandwidthResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("admin_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("short_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("short_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sla_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sla_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dscp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dscp"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDscp(refVal);
        }
    }
    return ok;
}


std::string BackboneBandwidthResp::getId() const
{
    return id_;
}

void BackboneBandwidthResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BackboneBandwidthResp::idIsSet() const
{
    return idIsSet_;
}

void BackboneBandwidthResp::unsetid()
{
    idIsSet_ = false;
}

std::string BackboneBandwidthResp::getAdminStatus() const
{
    return adminStatus_;
}

void BackboneBandwidthResp::setAdminStatus(const std::string& value)
{
    adminStatus_ = value;
    adminStatusIsSet_ = true;
}

bool BackboneBandwidthResp::adminStatusIsSet() const
{
    return adminStatusIsSet_;
}

void BackboneBandwidthResp::unsetadminStatus()
{
    adminStatusIsSet_ = false;
}

int32_t BackboneBandwidthResp::getSize() const
{
    return size_;
}

void BackboneBandwidthResp::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BackboneBandwidthResp::sizeIsSet() const
{
    return sizeIsSet_;
}

void BackboneBandwidthResp::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BackboneBandwidthResp::getShortId() const
{
    return shortId_;
}

void BackboneBandwidthResp::setShortId(const std::string& value)
{
    shortId_ = value;
    shortIdIsSet_ = true;
}

bool BackboneBandwidthResp::shortIdIsSet() const
{
    return shortIdIsSet_;
}

void BackboneBandwidthResp::unsetshortId()
{
    shortIdIsSet_ = false;
}

std::string BackboneBandwidthResp::getSlaLevel() const
{
    return slaLevel_;
}

void BackboneBandwidthResp::setSlaLevel(const std::string& value)
{
    slaLevel_ = value;
    slaLevelIsSet_ = true;
}

bool BackboneBandwidthResp::slaLevelIsSet() const
{
    return slaLevelIsSet_;
}

void BackboneBandwidthResp::unsetslaLevel()
{
    slaLevelIsSet_ = false;
}

int32_t BackboneBandwidthResp::getDscp() const
{
    return dscp_;
}

void BackboneBandwidthResp::setDscp(int32_t value)
{
    dscp_ = value;
    dscpIsSet_ = true;
}

bool BackboneBandwidthResp::dscpIsSet() const
{
    return dscpIsSet_;
}

void BackboneBandwidthResp::unsetdscp()
{
    dscpIsSet_ = false;
}

}
}
}
}
}


