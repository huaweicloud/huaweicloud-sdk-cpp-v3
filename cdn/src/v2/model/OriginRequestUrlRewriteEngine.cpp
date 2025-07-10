

#include "huaweicloud/cdn/v2/model/OriginRequestUrlRewriteEngine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




OriginRequestUrlRewriteEngine::OriginRequestUrlRewriteEngine()
{
    rewriteType_ = "";
    rewriteTypeIsSet_ = false;
    sourceUrl_ = "";
    sourceUrlIsSet_ = false;
    targetUrl_ = "";
    targetUrlIsSet_ = false;
}

OriginRequestUrlRewriteEngine::~OriginRequestUrlRewriteEngine() = default;

void OriginRequestUrlRewriteEngine::validate()
{
}

web::json::value OriginRequestUrlRewriteEngine::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rewriteTypeIsSet_) {
        val[utility::conversions::to_string_t("rewrite_type")] = ModelBase::toJson(rewriteType_);
    }
    if(sourceUrlIsSet_) {
        val[utility::conversions::to_string_t("source_url")] = ModelBase::toJson(sourceUrl_);
    }
    if(targetUrlIsSet_) {
        val[utility::conversions::to_string_t("target_url")] = ModelBase::toJson(targetUrl_);
    }

    return val;
}
bool OriginRequestUrlRewriteEngine::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rewrite_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rewrite_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRewriteType(refVal);
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


std::string OriginRequestUrlRewriteEngine::getRewriteType() const
{
    return rewriteType_;
}

void OriginRequestUrlRewriteEngine::setRewriteType(const std::string& value)
{
    rewriteType_ = value;
    rewriteTypeIsSet_ = true;
}

bool OriginRequestUrlRewriteEngine::rewriteTypeIsSet() const
{
    return rewriteTypeIsSet_;
}

void OriginRequestUrlRewriteEngine::unsetrewriteType()
{
    rewriteTypeIsSet_ = false;
}

std::string OriginRequestUrlRewriteEngine::getSourceUrl() const
{
    return sourceUrl_;
}

void OriginRequestUrlRewriteEngine::setSourceUrl(const std::string& value)
{
    sourceUrl_ = value;
    sourceUrlIsSet_ = true;
}

bool OriginRequestUrlRewriteEngine::sourceUrlIsSet() const
{
    return sourceUrlIsSet_;
}

void OriginRequestUrlRewriteEngine::unsetsourceUrl()
{
    sourceUrlIsSet_ = false;
}

std::string OriginRequestUrlRewriteEngine::getTargetUrl() const
{
    return targetUrl_;
}

void OriginRequestUrlRewriteEngine::setTargetUrl(const std::string& value)
{
    targetUrl_ = value;
    targetUrlIsSet_ = true;
}

bool OriginRequestUrlRewriteEngine::targetUrlIsSet() const
{
    return targetUrlIsSet_;
}

void OriginRequestUrlRewriteEngine::unsettargetUrl()
{
    targetUrlIsSet_ = false;
}

}
}
}
}
}


