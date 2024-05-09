

#include "huaweicloud/ecs/v2/model/ChangeVpcRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeVpcRequestBody::ChangeVpcRequestBody()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    nicIsSet_ = false;
}

ChangeVpcRequestBody::~ChangeVpcRequestBody() = default;

void ChangeVpcRequestBody::validate()
{
}

web::json::value ChangeVpcRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(nicIsSet_) {
        val[utility::conversions::to_string_t("nic")] = ModelBase::toJson(nic_);
    }

    return val;
}
bool ChangeVpcRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("nic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nic"));
        if(!fieldValue.is_null())
        {
            ChangeVpcNicBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNic(refVal);
        }
    }
    return ok;
}


std::string ChangeVpcRequestBody::getVpcId() const
{
    return vpcId_;
}

void ChangeVpcRequestBody::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ChangeVpcRequestBody::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ChangeVpcRequestBody::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

ChangeVpcNicBody ChangeVpcRequestBody::getNic() const
{
    return nic_;
}

void ChangeVpcRequestBody::setNic(const ChangeVpcNicBody& value)
{
    nic_ = value;
    nicIsSet_ = true;
}

bool ChangeVpcRequestBody::nicIsSet() const
{
    return nicIsSet_;
}

void ChangeVpcRequestBody::unsetnic()
{
    nicIsSet_ = false;
}

}
}
}
}
}


