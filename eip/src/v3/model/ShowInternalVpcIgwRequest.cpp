

#include "huaweicloud/eip/v3/model/ShowInternalVpcIgwRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ShowInternalVpcIgwRequest::ShowInternalVpcIgwRequest()
{
    fields_ = "";
    fieldsIsSet_ = false;
    vpcIgwId_ = "";
    vpcIgwIdIsSet_ = false;
}

ShowInternalVpcIgwRequest::~ShowInternalVpcIgwRequest() = default;

void ShowInternalVpcIgwRequest::validate()
{
}

web::json::value ShowInternalVpcIgwRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(vpcIgwIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_igw_id")] = ModelBase::toJson(vpcIgwId_);
    }

    return val;
}
bool ShowInternalVpcIgwRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_igw_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_igw_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcIgwId(refVal);
        }
    }
    return ok;
}


std::string ShowInternalVpcIgwRequest::getFields() const
{
    return fields_;
}

void ShowInternalVpcIgwRequest::setFields(const std::string& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ShowInternalVpcIgwRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ShowInternalVpcIgwRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::string ShowInternalVpcIgwRequest::getVpcIgwId() const
{
    return vpcIgwId_;
}

void ShowInternalVpcIgwRequest::setVpcIgwId(const std::string& value)
{
    vpcIgwId_ = value;
    vpcIgwIdIsSet_ = true;
}

bool ShowInternalVpcIgwRequest::vpcIgwIdIsSet() const
{
    return vpcIgwIdIsSet_;
}

void ShowInternalVpcIgwRequest::unsetvpcIgwId()
{
    vpcIgwIdIsSet_ = false;
}

}
}
}
}
}


