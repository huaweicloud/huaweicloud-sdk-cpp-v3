

#include "huaweicloud/rds/v3/model/CompareConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CompareConfigurationResponse::CompareConfigurationResponse()
{
    sourceId_ = "";
    sourceIdIsSet_ = false;
    targetId_ = "";
    targetIdIsSet_ = false;
    sourceName_ = "";
    sourceNameIsSet_ = false;
    targetName_ = "";
    targetNameIsSet_ = false;
    parametersIsSet_ = false;
}

CompareConfigurationResponse::~CompareConfigurationResponse() = default;

void CompareConfigurationResponse::validate()
{
}

web::json::value CompareConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIdIsSet_) {
        val[utility::conversions::to_string_t("source_id")] = ModelBase::toJson(sourceId_);
    }
    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
    }
    if(sourceNameIsSet_) {
        val[utility::conversions::to_string_t("source_name")] = ModelBase::toJson(sourceName_);
    }
    if(targetNameIsSet_) {
        val[utility::conversions::to_string_t("target_name")] = ModelBase::toJson(targetName_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }

    return val;
}
bool CompareConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<ParamGroupParameterDiff> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    return ok;
}


std::string CompareConfigurationResponse::getSourceId() const
{
    return sourceId_;
}

void CompareConfigurationResponse::setSourceId(const std::string& value)
{
    sourceId_ = value;
    sourceIdIsSet_ = true;
}

bool CompareConfigurationResponse::sourceIdIsSet() const
{
    return sourceIdIsSet_;
}

void CompareConfigurationResponse::unsetsourceId()
{
    sourceIdIsSet_ = false;
}

std::string CompareConfigurationResponse::getTargetId() const
{
    return targetId_;
}

void CompareConfigurationResponse::setTargetId(const std::string& value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool CompareConfigurationResponse::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void CompareConfigurationResponse::unsettargetId()
{
    targetIdIsSet_ = false;
}

std::string CompareConfigurationResponse::getSourceName() const
{
    return sourceName_;
}

void CompareConfigurationResponse::setSourceName(const std::string& value)
{
    sourceName_ = value;
    sourceNameIsSet_ = true;
}

bool CompareConfigurationResponse::sourceNameIsSet() const
{
    return sourceNameIsSet_;
}

void CompareConfigurationResponse::unsetsourceName()
{
    sourceNameIsSet_ = false;
}

std::string CompareConfigurationResponse::getTargetName() const
{
    return targetName_;
}

void CompareConfigurationResponse::setTargetName(const std::string& value)
{
    targetName_ = value;
    targetNameIsSet_ = true;
}

bool CompareConfigurationResponse::targetNameIsSet() const
{
    return targetNameIsSet_;
}

void CompareConfigurationResponse::unsettargetName()
{
    targetNameIsSet_ = false;
}

std::vector<ParamGroupParameterDiff>& CompareConfigurationResponse::getParameters()
{
    return parameters_;
}

void CompareConfigurationResponse::setParameters(const std::vector<ParamGroupParameterDiff>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool CompareConfigurationResponse::parametersIsSet() const
{
    return parametersIsSet_;
}

void CompareConfigurationResponse::unsetparameters()
{
    parametersIsSet_ = false;
}

}
}
}
}
}


