

#include "huaweicloud/geip/v3/model/GlobalConnectionBandwidthInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




GlobalConnectionBandwidthInfo::GlobalConnectionBandwidthInfo()
{
    gcbId_ = "";
    gcbIdIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    gcbType_ = "";
    gcbTypeIsSet_ = false;
    adminState_ = "";
    adminStateIsSet_ = false;
    slaLevel_ = "";
    slaLevelIsSet_ = false;
    dscp_ = 0;
    dscpIsSet_ = false;
}

GlobalConnectionBandwidthInfo::~GlobalConnectionBandwidthInfo() = default;

void GlobalConnectionBandwidthInfo::validate()
{
}

web::json::value GlobalConnectionBandwidthInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gcbIdIsSet_) {
        val[utility::conversions::to_string_t("gcb_id")] = ModelBase::toJson(gcbId_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(gcbTypeIsSet_) {
        val[utility::conversions::to_string_t("gcb_type")] = ModelBase::toJson(gcbType_);
    }
    if(adminStateIsSet_) {
        val[utility::conversions::to_string_t("admin_state")] = ModelBase::toJson(adminState_);
    }
    if(slaLevelIsSet_) {
        val[utility::conversions::to_string_t("sla_level")] = ModelBase::toJson(slaLevel_);
    }
    if(dscpIsSet_) {
        val[utility::conversions::to_string_t("dscp")] = ModelBase::toJson(dscp_);
    }

    return val;
}
bool GlobalConnectionBandwidthInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("gcb_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gcb_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGcbId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("gcb_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gcb_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGcbType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("admin_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminState(refVal);
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


std::string GlobalConnectionBandwidthInfo::getGcbId() const
{
    return gcbId_;
}

void GlobalConnectionBandwidthInfo::setGcbId(const std::string& value)
{
    gcbId_ = value;
    gcbIdIsSet_ = true;
}

bool GlobalConnectionBandwidthInfo::gcbIdIsSet() const
{
    return gcbIdIsSet_;
}

void GlobalConnectionBandwidthInfo::unsetgcbId()
{
    gcbIdIsSet_ = false;
}

int32_t GlobalConnectionBandwidthInfo::getSize() const
{
    return size_;
}

void GlobalConnectionBandwidthInfo::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool GlobalConnectionBandwidthInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void GlobalConnectionBandwidthInfo::unsetsize()
{
    sizeIsSet_ = false;
}

std::string GlobalConnectionBandwidthInfo::getGcbType() const
{
    return gcbType_;
}

void GlobalConnectionBandwidthInfo::setGcbType(const std::string& value)
{
    gcbType_ = value;
    gcbTypeIsSet_ = true;
}

bool GlobalConnectionBandwidthInfo::gcbTypeIsSet() const
{
    return gcbTypeIsSet_;
}

void GlobalConnectionBandwidthInfo::unsetgcbType()
{
    gcbTypeIsSet_ = false;
}

std::string GlobalConnectionBandwidthInfo::getAdminState() const
{
    return adminState_;
}

void GlobalConnectionBandwidthInfo::setAdminState(const std::string& value)
{
    adminState_ = value;
    adminStateIsSet_ = true;
}

bool GlobalConnectionBandwidthInfo::adminStateIsSet() const
{
    return adminStateIsSet_;
}

void GlobalConnectionBandwidthInfo::unsetadminState()
{
    adminStateIsSet_ = false;
}

std::string GlobalConnectionBandwidthInfo::getSlaLevel() const
{
    return slaLevel_;
}

void GlobalConnectionBandwidthInfo::setSlaLevel(const std::string& value)
{
    slaLevel_ = value;
    slaLevelIsSet_ = true;
}

bool GlobalConnectionBandwidthInfo::slaLevelIsSet() const
{
    return slaLevelIsSet_;
}

void GlobalConnectionBandwidthInfo::unsetslaLevel()
{
    slaLevelIsSet_ = false;
}

int32_t GlobalConnectionBandwidthInfo::getDscp() const
{
    return dscp_;
}

void GlobalConnectionBandwidthInfo::setDscp(int32_t value)
{
    dscp_ = value;
    dscpIsSet_ = true;
}

bool GlobalConnectionBandwidthInfo::dscpIsSet() const
{
    return dscpIsSet_;
}

void GlobalConnectionBandwidthInfo::unsetdscp()
{
    dscpIsSet_ = false;
}

}
}
}
}
}


