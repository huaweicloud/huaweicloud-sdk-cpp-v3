

#include "huaweicloud/cdn/v1/model/OriginRequestUrlRewrite.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




OriginRequestUrlRewrite::OriginRequestUrlRewrite()
{
    priority_ = 0;
    priorityIsSet_ = false;
    matchType_ = "";
    matchTypeIsSet_ = false;
    sourceUrl_ = "";
    sourceUrlIsSet_ = false;
    targetUrl_ = "";
    targetUrlIsSet_ = false;
}

OriginRequestUrlRewrite::~OriginRequestUrlRewrite() = default;

void OriginRequestUrlRewrite::validate()
{
}

web::json::value OriginRequestUrlRewrite::toJson() const
{
    web::json::value val = web::json::value::object();

    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(matchTypeIsSet_) {
        val[utility::conversions::to_string_t("match_type")] = ModelBase::toJson(matchType_);
    }
    if(sourceUrlIsSet_) {
        val[utility::conversions::to_string_t("source_url")] = ModelBase::toJson(sourceUrl_);
    }
    if(targetUrlIsSet_) {
        val[utility::conversions::to_string_t("target_url")] = ModelBase::toJson(targetUrl_);
    }

    return val;
}
bool OriginRequestUrlRewrite::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("match_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetUrl(refVal);
        }
    }
    return ok;
}


int32_t OriginRequestUrlRewrite::getPriority() const
{
    return priority_;
}

void OriginRequestUrlRewrite::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool OriginRequestUrlRewrite::priorityIsSet() const
{
    return priorityIsSet_;
}

void OriginRequestUrlRewrite::unsetpriority()
{
    priorityIsSet_ = false;
}

std::string OriginRequestUrlRewrite::getMatchType() const
{
    return matchType_;
}

void OriginRequestUrlRewrite::setMatchType(const std::string& value)
{
    matchType_ = value;
    matchTypeIsSet_ = true;
}

bool OriginRequestUrlRewrite::matchTypeIsSet() const
{
    return matchTypeIsSet_;
}

void OriginRequestUrlRewrite::unsetmatchType()
{
    matchTypeIsSet_ = false;
}

std::string OriginRequestUrlRewrite::getSourceUrl() const
{
    return sourceUrl_;
}

void OriginRequestUrlRewrite::setSourceUrl(const std::string& value)
{
    sourceUrl_ = value;
    sourceUrlIsSet_ = true;
}

bool OriginRequestUrlRewrite::sourceUrlIsSet() const
{
    return sourceUrlIsSet_;
}

void OriginRequestUrlRewrite::unsetsourceUrl()
{
    sourceUrlIsSet_ = false;
}

std::string OriginRequestUrlRewrite::getTargetUrl() const
{
    return targetUrl_;
}

void OriginRequestUrlRewrite::setTargetUrl(const std::string& value)
{
    targetUrl_ = value;
    targetUrlIsSet_ = true;
}

bool OriginRequestUrlRewrite::targetUrlIsSet() const
{
    return targetUrlIsSet_;
}

void OriginRequestUrlRewrite::unsettargetUrl()
{
    targetUrlIsSet_ = false;
}

}
}
}
}
}


