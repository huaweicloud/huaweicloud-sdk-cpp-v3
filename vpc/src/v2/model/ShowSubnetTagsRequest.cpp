

#include "huaweicloud/vpc/v2/model/ShowSubnetTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowSubnetTagsRequest::ShowSubnetTagsRequest()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
}

ShowSubnetTagsRequest::~ShowSubnetTagsRequest() = default;

void ShowSubnetTagsRequest::validate()
{
}

web::json::value ShowSubnetTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }

    return val;
}
bool ShowSubnetTagsRequest::fromJson(const web::json::value& val)
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


std::string ShowSubnetTagsRequest::getSubnetId() const
{
    return subnetId_;
}

void ShowSubnetTagsRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ShowSubnetTagsRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ShowSubnetTagsRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


