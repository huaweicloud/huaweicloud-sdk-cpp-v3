

#include "huaweicloud/codeartsdeploy/v2/model/StepInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




StepInfo::StepInfo()
{
    region_ = "";
    regionIsSet_ = false;
    id_ = 0L;
    idIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    currentOffset_ = 0;
    currentOffsetIsSet_ = false;
    elapsedTime_ = 0L;
    elapsedTimeIsSet_ = false;
    faqUrl_ = "";
    faqUrlIsSet_ = false;
}

StepInfo::~StepInfo() = default;

void StepInfo::validate()
{
}

web::json::value StepInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(currentOffsetIsSet_) {
        val[utility::conversions::to_string_t("current_offset")] = ModelBase::toJson(currentOffset_);
    }
    if(elapsedTimeIsSet_) {
        val[utility::conversions::to_string_t("elapsed_time")] = ModelBase::toJson(elapsedTime_);
    }
    if(faqUrlIsSet_) {
        val[utility::conversions::to_string_t("faq_url")] = ModelBase::toJson(faqUrl_);
    }

    return val;
}
bool StepInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elapsed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elapsed_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElapsedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("faq_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("faq_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaqUrl(refVal);
        }
    }
    return ok;
}


std::string StepInfo::getRegion() const
{
    return region_;
}

void StepInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool StepInfo::regionIsSet() const
{
    return regionIsSet_;
}

void StepInfo::unsetregion()
{
    regionIsSet_ = false;
}

int64_t StepInfo::getId() const
{
    return id_;
}

void StepInfo::setId(int64_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StepInfo::idIsSet() const
{
    return idIsSet_;
}

void StepInfo::unsetid()
{
    idIsSet_ = false;
}

int32_t StepInfo::getOffset() const
{
    return offset_;
}

void StepInfo::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool StepInfo::offsetIsSet() const
{
    return offsetIsSet_;
}

void StepInfo::unsetoffset()
{
    offsetIsSet_ = false;
}

bool StepInfo::isEnable() const
{
    return enable_;
}

void StepInfo::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool StepInfo::enableIsSet() const
{
    return enableIsSet_;
}

void StepInfo::unsetenable()
{
    enableIsSet_ = false;
}

std::string StepInfo::getName() const
{
    return name_;
}

void StepInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StepInfo::nameIsSet() const
{
    return nameIsSet_;
}

void StepInfo::unsetname()
{
    nameIsSet_ = false;
}

int32_t StepInfo::getCurrentOffset() const
{
    return currentOffset_;
}

void StepInfo::setCurrentOffset(int32_t value)
{
    currentOffset_ = value;
    currentOffsetIsSet_ = true;
}

bool StepInfo::currentOffsetIsSet() const
{
    return currentOffsetIsSet_;
}

void StepInfo::unsetcurrentOffset()
{
    currentOffsetIsSet_ = false;
}

int64_t StepInfo::getElapsedTime() const
{
    return elapsedTime_;
}

void StepInfo::setElapsedTime(int64_t value)
{
    elapsedTime_ = value;
    elapsedTimeIsSet_ = true;
}

bool StepInfo::elapsedTimeIsSet() const
{
    return elapsedTimeIsSet_;
}

void StepInfo::unsetelapsedTime()
{
    elapsedTimeIsSet_ = false;
}

std::string StepInfo::getFaqUrl() const
{
    return faqUrl_;
}

void StepInfo::setFaqUrl(const std::string& value)
{
    faqUrl_ = value;
    faqUrlIsSet_ = true;
}

bool StepInfo::faqUrlIsSet() const
{
    return faqUrlIsSet_;
}

void StepInfo::unsetfaqUrl()
{
    faqUrlIsSet_ = false;
}

}
}
}
}
}


