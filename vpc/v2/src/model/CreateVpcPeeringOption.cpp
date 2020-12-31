

#include "huaweicloud/vpc/model/CreateVpcPeeringOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateVpcPeeringOption::CreateVpcPeeringOption()
{
    name_ = "";
    nameIsSet_ = false;
    requestVpcInfoIsSet_ = false;
    acceptVpcInfoIsSet_ = false;
}

CreateVpcPeeringOption::~CreateVpcPeeringOption() = default;

void CreateVpcPeeringOption::validate()
{
}

web::json::value CreateVpcPeeringOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(requestVpcInfoIsSet_) {
        val[utility::conversions::to_string_t("request_vpc_info")] = ModelBase::toJson(requestVpcInfo_);
    }
    if(acceptVpcInfoIsSet_) {
        val[utility::conversions::to_string_t("accept_vpc_info")] = ModelBase::toJson(acceptVpcInfo_);
    }

    return val;
}

bool CreateVpcPeeringOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_vpc_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_vpc_info"));
        if(!fieldValue.is_null())
        {
            VpcInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestVpcInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accept_vpc_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accept_vpc_info"));
        if(!fieldValue.is_null())
        {
            VpcInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptVpcInfo(refVal);
        }
    }
    return ok;
}


std::string CreateVpcPeeringOption::getName() const
{
    return name_;
}

void CreateVpcPeeringOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateVpcPeeringOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreateVpcPeeringOption::unsetname()
{
    nameIsSet_ = false;
}

VpcInfo CreateVpcPeeringOption::getRequestVpcInfo() const
{
    return requestVpcInfo_;
}

void CreateVpcPeeringOption::setRequestVpcInfo(const VpcInfo& value)
{
    requestVpcInfo_ = value;
    requestVpcInfoIsSet_ = true;
}

bool CreateVpcPeeringOption::requestVpcInfoIsSet() const
{
    return requestVpcInfoIsSet_;
}

void CreateVpcPeeringOption::unsetrequestVpcInfo()
{
    requestVpcInfoIsSet_ = false;
}

VpcInfo CreateVpcPeeringOption::getAcceptVpcInfo() const
{
    return acceptVpcInfo_;
}

void CreateVpcPeeringOption::setAcceptVpcInfo(const VpcInfo& value)
{
    acceptVpcInfo_ = value;
    acceptVpcInfoIsSet_ = true;
}

bool CreateVpcPeeringOption::acceptVpcInfoIsSet() const
{
    return acceptVpcInfoIsSet_;
}

void CreateVpcPeeringOption::unsetacceptVpcInfo()
{
    acceptVpcInfoIsSet_ = false;
}

}
}
}
}
}


