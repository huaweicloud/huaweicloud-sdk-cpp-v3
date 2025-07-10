

#include "huaweicloud/rds/v3/model/GetJobInfoResponseBody_job_entities_volume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetJobInfoResponseBody_job_entities_volume::GetJobInfoResponseBody_job_entities_volume()
{
    type_ = "";
    typeIsSet_ = false;
    originalSize_ = "";
    originalSizeIsSet_ = false;
    targetSize_ = "";
    targetSizeIsSet_ = false;
}

GetJobInfoResponseBody_job_entities_volume::~GetJobInfoResponseBody_job_entities_volume() = default;

void GetJobInfoResponseBody_job_entities_volume::validate()
{
}

web::json::value GetJobInfoResponseBody_job_entities_volume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(originalSizeIsSet_) {
        val[utility::conversions::to_string_t("original_size")] = ModelBase::toJson(originalSize_);
    }
    if(targetSizeIsSet_) {
        val[utility::conversions::to_string_t("target_size")] = ModelBase::toJson(targetSize_);
    }

    return val;
}
bool GetJobInfoResponseBody_job_entities_volume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("original_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("original_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginalSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetSize(refVal);
        }
    }
    return ok;
}


std::string GetJobInfoResponseBody_job_entities_volume::getType() const
{
    return type_;
}

void GetJobInfoResponseBody_job_entities_volume::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool GetJobInfoResponseBody_job_entities_volume::typeIsSet() const
{
    return typeIsSet_;
}

void GetJobInfoResponseBody_job_entities_volume::unsettype()
{
    typeIsSet_ = false;
}

std::string GetJobInfoResponseBody_job_entities_volume::getOriginalSize() const
{
    return originalSize_;
}

void GetJobInfoResponseBody_job_entities_volume::setOriginalSize(const std::string& value)
{
    originalSize_ = value;
    originalSizeIsSet_ = true;
}

bool GetJobInfoResponseBody_job_entities_volume::originalSizeIsSet() const
{
    return originalSizeIsSet_;
}

void GetJobInfoResponseBody_job_entities_volume::unsetoriginalSize()
{
    originalSizeIsSet_ = false;
}

std::string GetJobInfoResponseBody_job_entities_volume::getTargetSize() const
{
    return targetSize_;
}

void GetJobInfoResponseBody_job_entities_volume::setTargetSize(const std::string& value)
{
    targetSize_ = value;
    targetSizeIsSet_ = true;
}

bool GetJobInfoResponseBody_job_entities_volume::targetSizeIsSet() const
{
    return targetSizeIsSet_;
}

void GetJobInfoResponseBody_job_entities_volume::unsettargetSize()
{
    targetSizeIsSet_ = false;
}

}
}
}
}
}


