

#include "huaweicloud/organizations/v1/model/PolicyTypeReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




PolicyTypeReqBody::PolicyTypeReqBody()
{
    policyType_ = "";
    policyTypeIsSet_ = false;
    rootId_ = "";
    rootIdIsSet_ = false;
}

PolicyTypeReqBody::~PolicyTypeReqBody() = default;

void PolicyTypeReqBody::validate()
{
}

web::json::value PolicyTypeReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyTypeIsSet_) {
        val[utility::conversions::to_string_t("policy_type")] = ModelBase::toJson(policyType_);
    }
    if(rootIdIsSet_) {
        val[utility::conversions::to_string_t("root_id")] = ModelBase::toJson(rootId_);
    }

    return val;
}
bool PolicyTypeReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("root_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootId(refVal);
        }
    }
    return ok;
}


std::string PolicyTypeReqBody::getPolicyType() const
{
    return policyType_;
}

void PolicyTypeReqBody::setPolicyType(const std::string& value)
{
    policyType_ = value;
    policyTypeIsSet_ = true;
}

bool PolicyTypeReqBody::policyTypeIsSet() const
{
    return policyTypeIsSet_;
}

void PolicyTypeReqBody::unsetpolicyType()
{
    policyTypeIsSet_ = false;
}

std::string PolicyTypeReqBody::getRootId() const
{
    return rootId_;
}

void PolicyTypeReqBody::setRootId(const std::string& value)
{
    rootId_ = value;
    rootIdIsSet_ = true;
}

bool PolicyTypeReqBody::rootIdIsSet() const
{
    return rootIdIsSet_;
}

void PolicyTypeReqBody::unsetrootId()
{
    rootIdIsSet_ = false;
}

}
}
}
}
}


