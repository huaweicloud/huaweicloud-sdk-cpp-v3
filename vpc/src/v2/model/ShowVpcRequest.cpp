

#include "huaweicloud/vpc/v2/model/ShowVpcRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowVpcRequest::ShowVpcRequest()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
}

ShowVpcRequest::~ShowVpcRequest() = default;

void ShowVpcRequest::validate()
{
}

web::json::value ShowVpcRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }

    return val;
}

bool ShowVpcRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    return ok;
}


std::string ShowVpcRequest::getVpcId() const
{
    return vpcId_;
}

void ShowVpcRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ShowVpcRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ShowVpcRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

}
}
}
}
}


