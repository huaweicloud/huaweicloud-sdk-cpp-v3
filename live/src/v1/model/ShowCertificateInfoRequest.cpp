

#include "huaweicloud/live/v1/model/ShowCertificateInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowCertificateInfoRequest::ShowCertificateInfoRequest()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowCertificateInfoRequest::~ShowCertificateInfoRequest() = default;

void ShowCertificateInfoRequest::validate()
{
}

web::json::value ShowCertificateInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playDomainIsSet_) {
        val[utility::conversions::to_string_t("play_domain")] = ModelBase::toJson(playDomain_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowCertificateInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("play_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayDomain(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ShowCertificateInfoRequest::getPlayDomain() const
{
    return playDomain_;
}

void ShowCertificateInfoRequest::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool ShowCertificateInfoRequest::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void ShowCertificateInfoRequest::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

int32_t ShowCertificateInfoRequest::getOffset() const
{
    return offset_;
}

void ShowCertificateInfoRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowCertificateInfoRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowCertificateInfoRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowCertificateInfoRequest::getLimit() const
{
    return limit_;
}

void ShowCertificateInfoRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowCertificateInfoRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowCertificateInfoRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


