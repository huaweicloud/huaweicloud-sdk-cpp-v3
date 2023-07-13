

#include "huaweicloud/eip/v3/model/DisassociatePublicipsOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DisassociatePublicipsOption::DisassociatePublicipsOption()
{
    associateInstanceType_ = "";
    associateInstanceTypeIsSet_ = false;
    associateInstanceId_ = "";
    associateInstanceIdIsSet_ = false;
}

DisassociatePublicipsOption::~DisassociatePublicipsOption() = default;

void DisassociatePublicipsOption::validate()
{
}

web::json::value DisassociatePublicipsOption::toJson() const
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

bool DisassociatePublicipsOption::fromJson(const web::json::value& val)
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

std::string DisassociatePublicipsOption::getAssociateInstanceType() const
{
    return associateInstanceType_;
}

void DisassociatePublicipsOption::setAssociateInstanceType(const std::string& value)
{
    associateInstanceType_ = value;
    associateInstanceTypeIsSet_ = true;
}

bool DisassociatePublicipsOption::associateInstanceTypeIsSet() const
{
    return associateInstanceTypeIsSet_;
}

void DisassociatePublicipsOption::unsetassociateInstanceType()
{
    associateInstanceTypeIsSet_ = false;
}

std::string DisassociatePublicipsOption::getAssociateInstanceId() const
{
    return associateInstanceId_;
}

void DisassociatePublicipsOption::setAssociateInstanceId(const std::string& value)
{
    associateInstanceId_ = value;
    associateInstanceIdIsSet_ = true;
}

bool DisassociatePublicipsOption::associateInstanceIdIsSet() const
{
    return associateInstanceIdIsSet_;
}

void DisassociatePublicipsOption::unsetassociateInstanceId()
{
    associateInstanceIdIsSet_ = false;
}

}
}
}
}
}


