

#include "huaweicloud/live/v1/model/ShowChannelStatisticReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowChannelStatisticReq::ShowChannelStatisticReq()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    scte35IsSet_ = false;
    regionType_ = "";
    regionTypeIsSet_ = false;
}

ShowChannelStatisticReq::~ShowChannelStatisticReq() = default;

void ShowChannelStatisticReq::validate()
{
}

web::json::value ShowChannelStatisticReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(scte35IsSet_) {
        val[utility::conversions::to_string_t("scte35")] = ModelBase::toJson(scte35_);
    }
    if(regionTypeIsSet_) {
        val[utility::conversions::to_string_t("region_type")] = ModelBase::toJson(regionType_);
    }

    return val;
}
bool ShowChannelStatisticReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scte35"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scte35"));
        if(!fieldValue.is_null())
        {
            SCTE35StatisticReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScte35(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionType(refVal);
        }
    }
    return ok;
}


std::string ShowChannelStatisticReq::getDomain() const
{
    return domain_;
}

void ShowChannelStatisticReq::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowChannelStatisticReq::domainIsSet() const
{
    return domainIsSet_;
}

void ShowChannelStatisticReq::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ShowChannelStatisticReq::getAppName() const
{
    return appName_;
}

void ShowChannelStatisticReq::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ShowChannelStatisticReq::appNameIsSet() const
{
    return appNameIsSet_;
}

void ShowChannelStatisticReq::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ShowChannelStatisticReq::getId() const
{
    return id_;
}

void ShowChannelStatisticReq::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowChannelStatisticReq::idIsSet() const
{
    return idIsSet_;
}

void ShowChannelStatisticReq::unsetid()
{
    idIsSet_ = false;
}

std::string ShowChannelStatisticReq::getType() const
{
    return type_;
}

void ShowChannelStatisticReq::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowChannelStatisticReq::typeIsSet() const
{
    return typeIsSet_;
}

void ShowChannelStatisticReq::unsettype()
{
    typeIsSet_ = false;
}

SCTE35StatisticReq ShowChannelStatisticReq::getScte35() const
{
    return scte35_;
}

void ShowChannelStatisticReq::setScte35(const SCTE35StatisticReq& value)
{
    scte35_ = value;
    scte35IsSet_ = true;
}

bool ShowChannelStatisticReq::scte35IsSet() const
{
    return scte35IsSet_;
}

void ShowChannelStatisticReq::unsetscte35()
{
    scte35IsSet_ = false;
}

std::string ShowChannelStatisticReq::getRegionType() const
{
    return regionType_;
}

void ShowChannelStatisticReq::setRegionType(const std::string& value)
{
    regionType_ = value;
    regionTypeIsSet_ = true;
}

bool ShowChannelStatisticReq::regionTypeIsSet() const
{
    return regionTypeIsSet_;
}

void ShowChannelStatisticReq::unsetregionType()
{
    regionTypeIsSet_ = false;
}

}
}
}
}
}


