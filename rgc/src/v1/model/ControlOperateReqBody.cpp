

#include "huaweicloud/rgc/v1/model/ControlOperateReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ControlOperateReqBody::ControlOperateReqBody()
{
    identifier_ = "";
    identifierIsSet_ = false;
    targetIdentifier_ = "";
    targetIdentifierIsSet_ = false;
    parametersIsSet_ = false;
}

ControlOperateReqBody::~ControlOperateReqBody() = default;

void ControlOperateReqBody::validate()
{
}

web::json::value ControlOperateReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(targetIdentifierIsSet_) {
        val[utility::conversions::to_string_t("target_identifier")] = ModelBase::toJson(targetIdentifier_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }

    return val;
}
bool ControlOperateReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_identifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetIdentifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<EnableControlParameters> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    return ok;
}


std::string ControlOperateReqBody::getIdentifier() const
{
    return identifier_;
}

void ControlOperateReqBody::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool ControlOperateReqBody::identifierIsSet() const
{
    return identifierIsSet_;
}

void ControlOperateReqBody::unsetidentifier()
{
    identifierIsSet_ = false;
}

std::string ControlOperateReqBody::getTargetIdentifier() const
{
    return targetIdentifier_;
}

void ControlOperateReqBody::setTargetIdentifier(const std::string& value)
{
    targetIdentifier_ = value;
    targetIdentifierIsSet_ = true;
}

bool ControlOperateReqBody::targetIdentifierIsSet() const
{
    return targetIdentifierIsSet_;
}

void ControlOperateReqBody::unsettargetIdentifier()
{
    targetIdentifierIsSet_ = false;
}

std::vector<EnableControlParameters>& ControlOperateReqBody::getParameters()
{
    return parameters_;
}

void ControlOperateReqBody::setParameters(const std::vector<EnableControlParameters>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool ControlOperateReqBody::parametersIsSet() const
{
    return parametersIsSet_;
}

void ControlOperateReqBody::unsetparameters()
{
    parametersIsSet_ = false;
}

}
}
}
}
}


