

#include "huaweicloud/vod/v1/model/Review.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




Review::Review()
{
    templateId_ = "";
    templateIdIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
    politics_ = 0;
    politicsIsSet_ = false;
    terrorism_ = 0;
    terrorismIsSet_ = false;
    porn_ = 0;
    pornIsSet_ = false;
}

Review::~Review() = default;

void Review::validate()
{
}

web::json::value Review::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(politicsIsSet_) {
        val[utility::conversions::to_string_t("politics")] = ModelBase::toJson(politics_);
    }
    if(terrorismIsSet_) {
        val[utility::conversions::to_string_t("terrorism")] = ModelBase::toJson(terrorism_);
    }
    if(pornIsSet_) {
        val[utility::conversions::to_string_t("porn")] = ModelBase::toJson(porn_);
    }

    return val;
}

bool Review::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("politics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("politics"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolitics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("terrorism"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("terrorism"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTerrorism(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("porn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("porn"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPorn(refVal);
        }
    }
    return ok;
}


std::string Review::getTemplateId() const
{
    return templateId_;
}

void Review::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool Review::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void Review::unsettemplateId()
{
    templateIdIsSet_ = false;
}

int32_t Review::getInterval() const
{
    return interval_;
}

void Review::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool Review::intervalIsSet() const
{
    return intervalIsSet_;
}

void Review::unsetinterval()
{
    intervalIsSet_ = false;
}

int32_t Review::getPolitics() const
{
    return politics_;
}

void Review::setPolitics(int32_t value)
{
    politics_ = value;
    politicsIsSet_ = true;
}

bool Review::politicsIsSet() const
{
    return politicsIsSet_;
}

void Review::unsetpolitics()
{
    politicsIsSet_ = false;
}

int32_t Review::getTerrorism() const
{
    return terrorism_;
}

void Review::setTerrorism(int32_t value)
{
    terrorism_ = value;
    terrorismIsSet_ = true;
}

bool Review::terrorismIsSet() const
{
    return terrorismIsSet_;
}

void Review::unsetterrorism()
{
    terrorismIsSet_ = false;
}

int32_t Review::getPorn() const
{
    return porn_;
}

void Review::setPorn(int32_t value)
{
    porn_ = value;
    pornIsSet_ = true;
}

bool Review::pornIsSet() const
{
    return pornIsSet_;
}

void Review::unsetporn()
{
    pornIsSet_ = false;
}

}
}
}
}
}


