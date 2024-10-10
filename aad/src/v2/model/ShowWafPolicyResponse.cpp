

#include "huaweicloud/aad/v2/model/ShowWafPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowWafPolicyResponse::ShowWafPolicyResponse()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    overseasType_ = 0;
    overseasTypeIsSet_ = false;
    optionsIsSet_ = false;
    level_ = 0;
    levelIsSet_ = false;
    mode_ = 0;
    modeIsSet_ = false;
}

ShowWafPolicyResponse::~ShowWafPolicyResponse() = default;

void ShowWafPolicyResponse::validate()
{
}

web::json::value ShowWafPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(overseasTypeIsSet_) {
        val[utility::conversions::to_string_t("overseas_type")] = ModelBase::toJson(overseasType_);
    }
    if(optionsIsSet_) {
        val[utility::conversions::to_string_t("options")] = ModelBase::toJson(options_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool ShowWafPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("overseas_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overseas_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverseasType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("options"));
        if(!fieldValue.is_null())
        {
            WafPolicyOptions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string ShowWafPolicyResponse::getDomainName() const
{
    return domainName_;
}

void ShowWafPolicyResponse::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowWafPolicyResponse::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowWafPolicyResponse::unsetdomainName()
{
    domainNameIsSet_ = false;
}

int32_t ShowWafPolicyResponse::getOverseasType() const
{
    return overseasType_;
}

void ShowWafPolicyResponse::setOverseasType(int32_t value)
{
    overseasType_ = value;
    overseasTypeIsSet_ = true;
}

bool ShowWafPolicyResponse::overseasTypeIsSet() const
{
    return overseasTypeIsSet_;
}

void ShowWafPolicyResponse::unsetoverseasType()
{
    overseasTypeIsSet_ = false;
}

WafPolicyOptions ShowWafPolicyResponse::getOptions() const
{
    return options_;
}

void ShowWafPolicyResponse::setOptions(const WafPolicyOptions& value)
{
    options_ = value;
    optionsIsSet_ = true;
}

bool ShowWafPolicyResponse::optionsIsSet() const
{
    return optionsIsSet_;
}

void ShowWafPolicyResponse::unsetoptions()
{
    optionsIsSet_ = false;
}

int32_t ShowWafPolicyResponse::getLevel() const
{
    return level_;
}

void ShowWafPolicyResponse::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ShowWafPolicyResponse::levelIsSet() const
{
    return levelIsSet_;
}

void ShowWafPolicyResponse::unsetlevel()
{
    levelIsSet_ = false;
}

int32_t ShowWafPolicyResponse::getMode() const
{
    return mode_;
}

void ShowWafPolicyResponse::setMode(int32_t value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ShowWafPolicyResponse::modeIsSet() const
{
    return modeIsSet_;
}

void ShowWafPolicyResponse::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


