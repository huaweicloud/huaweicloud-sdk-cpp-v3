

#include "huaweicloud/rgc/v1/model/EnableControlOperateReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




EnableControlOperateReqBody::EnableControlOperateReqBody()
{
    identifier_ = "";
    identifierIsSet_ = false;
    targetIdentifier_ = "";
    targetIdentifierIsSet_ = false;
    parametersIsSet_ = false;
}

EnableControlOperateReqBody::~EnableControlOperateReqBody() = default;

void EnableControlOperateReqBody::validate()
{
}

web::json::value EnableControlOperateReqBody::toJson() const
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
bool EnableControlOperateReqBody::fromJson(const web::json::value& val)
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


std::string EnableControlOperateReqBody::getIdentifier() const
{
    return identifier_;
}

void EnableControlOperateReqBody::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool EnableControlOperateReqBody::identifierIsSet() const
{
    return identifierIsSet_;
}

void EnableControlOperateReqBody::unsetidentifier()
{
    identifierIsSet_ = false;
}

std::string EnableControlOperateReqBody::getTargetIdentifier() const
{
    return targetIdentifier_;
}

void EnableControlOperateReqBody::setTargetIdentifier(const std::string& value)
{
    targetIdentifier_ = value;
    targetIdentifierIsSet_ = true;
}

bool EnableControlOperateReqBody::targetIdentifierIsSet() const
{
    return targetIdentifierIsSet_;
}

void EnableControlOperateReqBody::unsettargetIdentifier()
{
    targetIdentifierIsSet_ = false;
}

std::vector<EnableControlParameters>& EnableControlOperateReqBody::getParameters()
{
    return parameters_;
}

void EnableControlOperateReqBody::setParameters(const std::vector<EnableControlParameters>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool EnableControlOperateReqBody::parametersIsSet() const
{
    return parametersIsSet_;
}

void EnableControlOperateReqBody::unsetparameters()
{
    parametersIsSet_ = false;
}

}
}
}
}
}


