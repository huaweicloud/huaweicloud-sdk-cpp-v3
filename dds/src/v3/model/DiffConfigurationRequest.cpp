

#include "huaweicloud/dds/v3/model/DiffConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DiffConfigurationRequest::DiffConfigurationRequest()
{
    sourceConfigurationId_ = "";
    sourceConfigurationIdIsSet_ = false;
    targetConfigurationId_ = "";
    targetConfigurationIdIsSet_ = false;
}

DiffConfigurationRequest::~DiffConfigurationRequest() = default;

void DiffConfigurationRequest::validate()
{
}

web::json::value DiffConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceConfigurationIdIsSet_) {
        val[utility::conversions::to_string_t("source_configuration_id")] = ModelBase::toJson(sourceConfigurationId_);
    }
    if(targetConfigurationIdIsSet_) {
        val[utility::conversions::to_string_t("target_configuration_id")] = ModelBase::toJson(targetConfigurationId_);
    }

    return val;
}

bool DiffConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceConfigurationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetConfigurationId(refVal);
        }
    }
    return ok;
}

std::string DiffConfigurationRequest::getSourceConfigurationId() const
{
    return sourceConfigurationId_;
}

void DiffConfigurationRequest::setSourceConfigurationId(const std::string& value)
{
    sourceConfigurationId_ = value;
    sourceConfigurationIdIsSet_ = true;
}

bool DiffConfigurationRequest::sourceConfigurationIdIsSet() const
{
    return sourceConfigurationIdIsSet_;
}

void DiffConfigurationRequest::unsetsourceConfigurationId()
{
    sourceConfigurationIdIsSet_ = false;
}

std::string DiffConfigurationRequest::getTargetConfigurationId() const
{
    return targetConfigurationId_;
}

void DiffConfigurationRequest::setTargetConfigurationId(const std::string& value)
{
    targetConfigurationId_ = value;
    targetConfigurationIdIsSet_ = true;
}

bool DiffConfigurationRequest::targetConfigurationIdIsSet() const
{
    return targetConfigurationIdIsSet_;
}

void DiffConfigurationRequest::unsettargetConfigurationId()
{
    targetConfigurationIdIsSet_ = false;
}

}
}
}
}
}


