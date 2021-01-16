

#include "huaweicloud/vpc/v2/model/DeleteVpcRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DeleteVpcRequest::DeleteVpcRequest()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
}

DeleteVpcRequest::~DeleteVpcRequest() = default;

void DeleteVpcRequest::validate()
{
}

web::json::value DeleteVpcRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }

    return val;
}

bool DeleteVpcRequest::fromJson(const web::json::value& val)
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


std::string DeleteVpcRequest::getVpcId() const
{
    return vpcId_;
}

void DeleteVpcRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool DeleteVpcRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void DeleteVpcRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

}
}
}
}
}


