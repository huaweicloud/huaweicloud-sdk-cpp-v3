

#include "huaweicloud/vpc/v2/model/NeutronDeleteSubnetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronDeleteSubnetRequest::NeutronDeleteSubnetRequest()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
}

NeutronDeleteSubnetRequest::~NeutronDeleteSubnetRequest() = default;

void NeutronDeleteSubnetRequest::validate()
{
}

web::json::value NeutronDeleteSubnetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }

    return val;
}

bool NeutronDeleteSubnetRequest::fromJson(const web::json::value& val)
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

std::string NeutronDeleteSubnetRequest::getSubnetId() const
{
    return subnetId_;
}

void NeutronDeleteSubnetRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool NeutronDeleteSubnetRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void NeutronDeleteSubnetRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


