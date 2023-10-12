

#include "huaweicloud/gaussdbfornosql/v3/model/CompareConfigurationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CompareConfigurationRequestBody::CompareConfigurationRequestBody()
{
    sourceConfigurationId_ = "";
    sourceConfigurationIdIsSet_ = false;
    targetConfigurationId_ = "";
    targetConfigurationIdIsSet_ = false;
}

CompareConfigurationRequestBody::~CompareConfigurationRequestBody() = default;

void CompareConfigurationRequestBody::validate()
{
}

web::json::value CompareConfigurationRequestBody::toJson() const
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
bool CompareConfigurationRequestBody::fromJson(const web::json::value& val)
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


std::string CompareConfigurationRequestBody::getSourceConfigurationId() const
{
    return sourceConfigurationId_;
}

void CompareConfigurationRequestBody::setSourceConfigurationId(const std::string& value)
{
    sourceConfigurationId_ = value;
    sourceConfigurationIdIsSet_ = true;
}

bool CompareConfigurationRequestBody::sourceConfigurationIdIsSet() const
{
    return sourceConfigurationIdIsSet_;
}

void CompareConfigurationRequestBody::unsetsourceConfigurationId()
{
    sourceConfigurationIdIsSet_ = false;
}

std::string CompareConfigurationRequestBody::getTargetConfigurationId() const
{
    return targetConfigurationId_;
}

void CompareConfigurationRequestBody::setTargetConfigurationId(const std::string& value)
{
    targetConfigurationId_ = value;
    targetConfigurationIdIsSet_ = true;
}

bool CompareConfigurationRequestBody::targetConfigurationIdIsSet() const
{
    return targetConfigurationIdIsSet_;
}

void CompareConfigurationRequestBody::unsettargetConfigurationId()
{
    targetConfigurationIdIsSet_ = false;
}

}
}
}
}
}


