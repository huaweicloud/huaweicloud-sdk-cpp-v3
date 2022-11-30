

#include "huaweicloud/eip/v3/model/AssociatePublicipsOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




AssociatePublicipsOption::AssociatePublicipsOption()
{
    associateInstanceType_ = "";
    associateInstanceTypeIsSet_ = false;
    associateInstanceId_ = "";
    associateInstanceIdIsSet_ = false;
}

AssociatePublicipsOption::~AssociatePublicipsOption() = default;

void AssociatePublicipsOption::validate()
{
}

web::json::value AssociatePublicipsOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(associateInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_type")] = ModelBase::toJson(associateInstanceType_);
    }
    if(associateInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_id")] = ModelBase::toJson(associateInstanceId_);
    }

    return val;
}

bool AssociatePublicipsOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("associate_instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceId(refVal);
        }
    }
    return ok;
}


std::string AssociatePublicipsOption::getAssociateInstanceType() const
{
    return associateInstanceType_;
}

void AssociatePublicipsOption::setAssociateInstanceType(const std::string& value)
{
    associateInstanceType_ = value;
    associateInstanceTypeIsSet_ = true;
}

bool AssociatePublicipsOption::associateInstanceTypeIsSet() const
{
    return associateInstanceTypeIsSet_;
}

void AssociatePublicipsOption::unsetassociateInstanceType()
{
    associateInstanceTypeIsSet_ = false;
}

std::string AssociatePublicipsOption::getAssociateInstanceId() const
{
    return associateInstanceId_;
}

void AssociatePublicipsOption::setAssociateInstanceId(const std::string& value)
{
    associateInstanceId_ = value;
    associateInstanceIdIsSet_ = true;
}

bool AssociatePublicipsOption::associateInstanceIdIsSet() const
{
    return associateInstanceIdIsSet_;
}

void AssociatePublicipsOption::unsetassociateInstanceId()
{
    associateInstanceIdIsSet_ = false;
}

}
}
}
}
}


