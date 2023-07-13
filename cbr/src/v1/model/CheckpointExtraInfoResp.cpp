

#include "huaweicloud/cbr/v1/model/CheckpointExtraInfoResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CheckpointExtraInfoResp::CheckpointExtraInfoResp()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    retentionDuration_ = 0;
    retentionDurationIsSet_ = false;
}

CheckpointExtraInfoResp::~CheckpointExtraInfoResp() = default;

void CheckpointExtraInfoResp::validate()
{
}

web::json::value CheckpointExtraInfoResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(retentionDurationIsSet_) {
        val[utility::conversions::to_string_t("retention_duration")] = ModelBase::toJson(retentionDuration_);
    }

    return val;
}

bool CheckpointExtraInfoResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionDuration(refVal);
        }
    }
    return ok;
}

std::string CheckpointExtraInfoResp::getName() const
{
    return name_;
}

void CheckpointExtraInfoResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CheckpointExtraInfoResp::nameIsSet() const
{
    return nameIsSet_;
}

void CheckpointExtraInfoResp::unsetname()
{
    nameIsSet_ = false;
}

std::string CheckpointExtraInfoResp::getDescription() const
{
    return description_;
}

void CheckpointExtraInfoResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CheckpointExtraInfoResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CheckpointExtraInfoResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t CheckpointExtraInfoResp::getRetentionDuration() const
{
    return retentionDuration_;
}

void CheckpointExtraInfoResp::setRetentionDuration(int32_t value)
{
    retentionDuration_ = value;
    retentionDurationIsSet_ = true;
}

bool CheckpointExtraInfoResp::retentionDurationIsSet() const
{
    return retentionDurationIsSet_;
}

void CheckpointExtraInfoResp::unsetretentionDuration()
{
    retentionDurationIsSet_ = false;
}

}
}
}
}
}


