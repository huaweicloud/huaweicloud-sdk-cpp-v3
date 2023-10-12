

#include "huaweicloud/vpc/v2/model/NeutronShowSubnetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowSubnetRequest::NeutronShowSubnetRequest()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
}

NeutronShowSubnetRequest::~NeutronShowSubnetRequest() = default;

void NeutronShowSubnetRequest::validate()
{
}

web::json::value NeutronShowSubnetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }

    return val;
}
bool NeutronShowSubnetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    return ok;
}


std::string NeutronShowSubnetRequest::getSubnetId() const
{
    return subnetId_;
}

void NeutronShowSubnetRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool NeutronShowSubnetRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void NeutronShowSubnetRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


