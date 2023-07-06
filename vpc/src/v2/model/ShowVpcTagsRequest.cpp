

#include "huaweicloud/vpc/v2/model/ShowVpcTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowVpcTagsRequest::ShowVpcTagsRequest()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
}

ShowVpcTagsRequest::~ShowVpcTagsRequest() = default;

void ShowVpcTagsRequest::validate()
{
}

web::json::value ShowVpcTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }

    return val;
}

bool ShowVpcTagsRequest::fromJson(const web::json::value& val)
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

std::string ShowVpcTagsRequest::getVpcId() const
{
    return vpcId_;
}

void ShowVpcTagsRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ShowVpcTagsRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ShowVpcTagsRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

}
}
}
}
}


