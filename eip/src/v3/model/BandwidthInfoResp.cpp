

#include "huaweicloud/eip/v3/model/BandwidthInfoResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




BandwidthInfoResp::BandwidthInfoResp()
{
    bandwidthName_ = "";
    bandwidthNameIsSet_ = false;
    bandwidthNumber_ = 0;
    bandwidthNumberIsSet_ = false;
    bandwidthType_ = "";
    bandwidthTypeIsSet_ = false;
    bandwidthId_ = "";
    bandwidthIdIsSet_ = false;
}

BandwidthInfoResp::~BandwidthInfoResp() = default;

void BandwidthInfoResp::validate()
{
}

web::json::value BandwidthInfoResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthNameIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_name")] = ModelBase::toJson(bandwidthName_);
    }
    if(bandwidthNumberIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_number")] = ModelBase::toJson(bandwidthNumber_);
    }
    if(bandwidthTypeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_type")] = ModelBase::toJson(bandwidthType_);
    }
    if(bandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_id")] = ModelBase::toJson(bandwidthId_);
    }

    return val;
}
bool BandwidthInfoResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthId(refVal);
        }
    }
    return ok;
}


std::string BandwidthInfoResp::getBandwidthName() const
{
    return bandwidthName_;
}

void BandwidthInfoResp::setBandwidthName(const std::string& value)
{
    bandwidthName_ = value;
    bandwidthNameIsSet_ = true;
}

bool BandwidthInfoResp::bandwidthNameIsSet() const
{
    return bandwidthNameIsSet_;
}

void BandwidthInfoResp::unsetbandwidthName()
{
    bandwidthNameIsSet_ = false;
}

int32_t BandwidthInfoResp::getBandwidthNumber() const
{
    return bandwidthNumber_;
}

void BandwidthInfoResp::setBandwidthNumber(int32_t value)
{
    bandwidthNumber_ = value;
    bandwidthNumberIsSet_ = true;
}

bool BandwidthInfoResp::bandwidthNumberIsSet() const
{
    return bandwidthNumberIsSet_;
}

void BandwidthInfoResp::unsetbandwidthNumber()
{
    bandwidthNumberIsSet_ = false;
}

std::string BandwidthInfoResp::getBandwidthType() const
{
    return bandwidthType_;
}

void BandwidthInfoResp::setBandwidthType(const std::string& value)
{
    bandwidthType_ = value;
    bandwidthTypeIsSet_ = true;
}

bool BandwidthInfoResp::bandwidthTypeIsSet() const
{
    return bandwidthTypeIsSet_;
}

void BandwidthInfoResp::unsetbandwidthType()
{
    bandwidthTypeIsSet_ = false;
}

std::string BandwidthInfoResp::getBandwidthId() const
{
    return bandwidthId_;
}

void BandwidthInfoResp::setBandwidthId(const std::string& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool BandwidthInfoResp::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void BandwidthInfoResp::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

}
}
}
}
}


