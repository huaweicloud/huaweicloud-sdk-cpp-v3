

#include "huaweicloud/vpc/v2/model/AssociateRouteTableAndSubnetReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




AssociateRouteTableAndSubnetReq::AssociateRouteTableAndSubnetReq()
{
    associateIsSet_ = false;
    disassociateIsSet_ = false;
}

AssociateRouteTableAndSubnetReq::~AssociateRouteTableAndSubnetReq() = default;

void AssociateRouteTableAndSubnetReq::validate()
{
}

web::json::value AssociateRouteTableAndSubnetReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(associateIsSet_) {
        val[utility::conversions::to_string_t("associate")] = ModelBase::toJson(associate_);
    }
    if(disassociateIsSet_) {
        val[utility::conversions::to_string_t("disassociate")] = ModelBase::toJson(disassociate_);
    }

    return val;
}

bool AssociateRouteTableAndSubnetReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("associate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disassociate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disassociate"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisassociate(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AssociateRouteTableAndSubnetReq::getAssociate()
{
    return associate_;
}

void AssociateRouteTableAndSubnetReq::setAssociate(const std::vector<std::string>& value)
{
    associate_ = value;
    associateIsSet_ = true;
}

bool AssociateRouteTableAndSubnetReq::associateIsSet() const
{
    return associateIsSet_;
}

void AssociateRouteTableAndSubnetReq::unsetassociate()
{
    associateIsSet_ = false;
}

std::vector<std::string>& AssociateRouteTableAndSubnetReq::getDisassociate()
{
    return disassociate_;
}

void AssociateRouteTableAndSubnetReq::setDisassociate(const std::vector<std::string>& value)
{
    disassociate_ = value;
    disassociateIsSet_ = true;
}

bool AssociateRouteTableAndSubnetReq::disassociateIsSet() const
{
    return disassociateIsSet_;
}

void AssociateRouteTableAndSubnetReq::unsetdisassociate()
{
    disassociateIsSet_ = false;
}

}
}
}
}
}


