

#include "huaweicloud/rgc/v1/model/DisableControlOperateReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




DisableControlOperateReqBody::DisableControlOperateReqBody()
{
    identifier_ = "";
    identifierIsSet_ = false;
    targetIdentifier_ = "";
    targetIdentifierIsSet_ = false;
}

DisableControlOperateReqBody::~DisableControlOperateReqBody() = default;

void DisableControlOperateReqBody::validate()
{
}

web::json::value DisableControlOperateReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(targetIdentifierIsSet_) {
        val[utility::conversions::to_string_t("target_identifier")] = ModelBase::toJson(targetIdentifier_);
    }

    return val;
}
bool DisableControlOperateReqBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DisableControlOperateReqBody::getIdentifier() const
{
    return identifier_;
}

void DisableControlOperateReqBody::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool DisableControlOperateReqBody::identifierIsSet() const
{
    return identifierIsSet_;
}

void DisableControlOperateReqBody::unsetidentifier()
{
    identifierIsSet_ = false;
}

std::string DisableControlOperateReqBody::getTargetIdentifier() const
{
    return targetIdentifier_;
}

void DisableControlOperateReqBody::setTargetIdentifier(const std::string& value)
{
    targetIdentifier_ = value;
    targetIdentifierIsSet_ = true;
}

bool DisableControlOperateReqBody::targetIdentifierIsSet() const
{
    return targetIdentifierIsSet_;
}

void DisableControlOperateReqBody::unsettargetIdentifier()
{
    targetIdentifierIsSet_ = false;
}

}
}
}
}
}


