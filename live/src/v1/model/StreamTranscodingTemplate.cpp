

#include "huaweicloud/live/v1/model/StreamTranscodingTemplate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




StreamTranscodingTemplate::StreamTranscodingTemplate()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    transType_ = "";
    transTypeIsSet_ = false;
    qualityInfoIsSet_ = false;
}

StreamTranscodingTemplate::~StreamTranscodingTemplate() = default;

void StreamTranscodingTemplate::validate()
{
}

web::json::value StreamTranscodingTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(transTypeIsSet_) {
        val[utility::conversions::to_string_t("trans_type")] = ModelBase::toJson(transType_);
    }
    if(qualityInfoIsSet_) {
        val[utility::conversions::to_string_t("quality_info")] = ModelBase::toJson(qualityInfo_);
    }

    return val;
}

bool StreamTranscodingTemplate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("trans_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trans_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quality_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quality_info"));
        if(!fieldValue.is_null())
        {
            std::vector<QualityInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQualityInfo(refVal);
        }
    }
    return ok;
}


std::string StreamTranscodingTemplate::getDomain() const
{
    return domain_;
}

void StreamTranscodingTemplate::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool StreamTranscodingTemplate::domainIsSet() const
{
    return domainIsSet_;
}

void StreamTranscodingTemplate::unsetdomain()
{
    domainIsSet_ = false;
}

std::string StreamTranscodingTemplate::getAppName() const
{
    return appName_;
}

void StreamTranscodingTemplate::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool StreamTranscodingTemplate::appNameIsSet() const
{
    return appNameIsSet_;
}

void StreamTranscodingTemplate::unsetappName()
{
    appNameIsSet_ = false;
}

std::string StreamTranscodingTemplate::getTransType() const
{
    return transType_;
}

void StreamTranscodingTemplate::setTransType(const std::string& value)
{
    transType_ = value;
    transTypeIsSet_ = true;
}

bool StreamTranscodingTemplate::transTypeIsSet() const
{
    return transTypeIsSet_;
}

void StreamTranscodingTemplate::unsettransType()
{
    transTypeIsSet_ = false;
}

std::vector<QualityInfo>& StreamTranscodingTemplate::getQualityInfo()
{
    return qualityInfo_;
}

void StreamTranscodingTemplate::setQualityInfo(const std::vector<QualityInfo>& value)
{
    qualityInfo_ = value;
    qualityInfoIsSet_ = true;
}

bool StreamTranscodingTemplate::qualityInfoIsSet() const
{
    return qualityInfoIsSet_;
}

void StreamTranscodingTemplate::unsetqualityInfo()
{
    qualityInfoIsSet_ = false;
}

}
}
}
}
}


