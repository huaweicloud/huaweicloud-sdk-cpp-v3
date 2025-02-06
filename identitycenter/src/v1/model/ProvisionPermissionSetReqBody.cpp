

#include "huaweicloud/identitycenter/v1/model/ProvisionPermissionSetReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ProvisionPermissionSetReqBody::ProvisionPermissionSetReqBody()
{
    targetId_ = "";
    targetIdIsSet_ = false;
    targetType_ = "";
    targetTypeIsSet_ = false;
}

ProvisionPermissionSetReqBody::~ProvisionPermissionSetReqBody() = default;

void ProvisionPermissionSetReqBody::validate()
{
}

web::json::value ProvisionPermissionSetReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
    }
    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }

    return val;
}
bool ProvisionPermissionSetReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
        }
    }
    return ok;
}


std::string ProvisionPermissionSetReqBody::getTargetId() const
{
    return targetId_;
}

void ProvisionPermissionSetReqBody::setTargetId(const std::string& value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool ProvisionPermissionSetReqBody::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void ProvisionPermissionSetReqBody::unsettargetId()
{
    targetIdIsSet_ = false;
}

std::string ProvisionPermissionSetReqBody::getTargetType() const
{
    return targetType_;
}

void ProvisionPermissionSetReqBody::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool ProvisionPermissionSetReqBody::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void ProvisionPermissionSetReqBody::unsettargetType()
{
    targetTypeIsSet_ = false;
}

}
}
}
}
}


