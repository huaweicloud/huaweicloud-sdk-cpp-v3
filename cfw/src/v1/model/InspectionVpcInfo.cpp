

#include "huaweicloud/cfw/v1/model/InspectionVpcInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




InspectionVpcInfo::InspectionVpcInfo()
{
    inspectionVpcId_ = "";
    inspectionVpcIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

InspectionVpcInfo::~InspectionVpcInfo() = default;

void InspectionVpcInfo::validate()
{
}

web::json::value InspectionVpcInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inspectionVpcIdIsSet_) {
        val[utility::conversions::to_string_t("inspection_vpc_id")] = ModelBase::toJson(inspectionVpcId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool InspectionVpcInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("inspection_vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inspection_vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInspectionVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string InspectionVpcInfo::getInspectionVpcId() const
{
    return inspectionVpcId_;
}

void InspectionVpcInfo::setInspectionVpcId(const std::string& value)
{
    inspectionVpcId_ = value;
    inspectionVpcIdIsSet_ = true;
}

bool InspectionVpcInfo::inspectionVpcIdIsSet() const
{
    return inspectionVpcIdIsSet_;
}

void InspectionVpcInfo::unsetinspectionVpcId()
{
    inspectionVpcIdIsSet_ = false;
}

std::string InspectionVpcInfo::getName() const
{
    return name_;
}

void InspectionVpcInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InspectionVpcInfo::nameIsSet() const
{
    return nameIsSet_;
}

void InspectionVpcInfo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


