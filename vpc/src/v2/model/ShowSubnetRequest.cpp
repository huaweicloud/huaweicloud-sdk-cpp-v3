

#include "huaweicloud/vpc/v2/model/ShowSubnetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowSubnetRequest::ShowSubnetRequest()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
}

ShowSubnetRequest::~ShowSubnetRequest() = default;

void ShowSubnetRequest::validate()
{
}

web::json::value ShowSubnetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }

    return val;
}
bool ShowSubnetRequest::fromJson(const web::json::value& val)
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


std::string ShowSubnetRequest::getSubnetId() const
{
    return subnetId_;
}

void ShowSubnetRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ShowSubnetRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ShowSubnetRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


