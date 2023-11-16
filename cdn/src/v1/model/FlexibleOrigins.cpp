

#include "huaweicloud/cdn/v1/model/FlexibleOrigins.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




FlexibleOrigins::FlexibleOrigins()
{
    matchType_ = "";
    matchTypeIsSet_ = false;
    matchPattern_ = "";
    matchPatternIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    backSourcesIsSet_ = false;
}

FlexibleOrigins::~FlexibleOrigins() = default;

void FlexibleOrigins::validate()
{
}

web::json::value FlexibleOrigins::toJson() const
{
    web::json::value val = web::json::value::object();

    if(matchTypeIsSet_) {
        val[utility::conversions::to_string_t("match_type")] = ModelBase::toJson(matchType_);
    }
    if(matchPatternIsSet_) {
        val[utility::conversions::to_string_t("match_pattern")] = ModelBase::toJson(matchPattern_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(backSourcesIsSet_) {
        val[utility::conversions::to_string_t("back_sources")] = ModelBase::toJson(backSources_);
    }

    return val;
}
bool FlexibleOrigins::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("match_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("match_pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_pattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchPattern(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("back_sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("back_sources"));
        if(!fieldValue.is_null())
        {
            std::vector<BackSources> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackSources(refVal);
        }
    }
    return ok;
}


std::string FlexibleOrigins::getMatchType() const
{
    return matchType_;
}

void FlexibleOrigins::setMatchType(const std::string& value)
{
    matchType_ = value;
    matchTypeIsSet_ = true;
}

bool FlexibleOrigins::matchTypeIsSet() const
{
    return matchTypeIsSet_;
}

void FlexibleOrigins::unsetmatchType()
{
    matchTypeIsSet_ = false;
}

std::string FlexibleOrigins::getMatchPattern() const
{
    return matchPattern_;
}

void FlexibleOrigins::setMatchPattern(const std::string& value)
{
    matchPattern_ = value;
    matchPatternIsSet_ = true;
}

bool FlexibleOrigins::matchPatternIsSet() const
{
    return matchPatternIsSet_;
}

void FlexibleOrigins::unsetmatchPattern()
{
    matchPatternIsSet_ = false;
}

int32_t FlexibleOrigins::getPriority() const
{
    return priority_;
}

void FlexibleOrigins::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool FlexibleOrigins::priorityIsSet() const
{
    return priorityIsSet_;
}

void FlexibleOrigins::unsetpriority()
{
    priorityIsSet_ = false;
}

std::vector<BackSources>& FlexibleOrigins::getBackSources()
{
    return backSources_;
}

void FlexibleOrigins::setBackSources(const std::vector<BackSources>& value)
{
    backSources_ = value;
    backSourcesIsSet_ = true;
}

bool FlexibleOrigins::backSourcesIsSet() const
{
    return backSourcesIsSet_;
}

void FlexibleOrigins::unsetbackSources()
{
    backSourcesIsSet_ = false;
}

}
}
}
}
}


