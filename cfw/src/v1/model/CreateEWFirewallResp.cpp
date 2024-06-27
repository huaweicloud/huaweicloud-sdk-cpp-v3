

#include "huaweicloud/cfw/v1/model/CreateEWFirewallResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateEWFirewallResp::CreateEWFirewallResp()
{
    id_ = "";
    idIsSet_ = false;
    erIsSet_ = false;
    inspertionVpcIsSet_ = false;
}

CreateEWFirewallResp::~CreateEWFirewallResp() = default;

void CreateEWFirewallResp::validate()
{
}

web::json::value CreateEWFirewallResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(erIsSet_) {
        val[utility::conversions::to_string_t("er")] = ModelBase::toJson(er_);
    }
    if(inspertionVpcIsSet_) {
        val[utility::conversions::to_string_t("inspertion_vpc")] = ModelBase::toJson(inspertionVpc_);
    }

    return val;
}
bool CreateEWFirewallResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("er"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("er"));
        if(!fieldValue.is_null())
        {
            ER refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inspertion_vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inspertion_vpc"));
        if(!fieldValue.is_null())
        {
            CreateEWFirewallInspectVpcResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInspertionVpc(refVal);
        }
    }
    return ok;
}


std::string CreateEWFirewallResp::getId() const
{
    return id_;
}

void CreateEWFirewallResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateEWFirewallResp::idIsSet() const
{
    return idIsSet_;
}

void CreateEWFirewallResp::unsetid()
{
    idIsSet_ = false;
}

ER CreateEWFirewallResp::getEr() const
{
    return er_;
}

void CreateEWFirewallResp::setEr(const ER& value)
{
    er_ = value;
    erIsSet_ = true;
}

bool CreateEWFirewallResp::erIsSet() const
{
    return erIsSet_;
}

void CreateEWFirewallResp::unseter()
{
    erIsSet_ = false;
}

CreateEWFirewallInspectVpcResp CreateEWFirewallResp::getInspertionVpc() const
{
    return inspertionVpc_;
}

void CreateEWFirewallResp::setInspertionVpc(const CreateEWFirewallInspectVpcResp& value)
{
    inspertionVpc_ = value;
    inspertionVpcIsSet_ = true;
}

bool CreateEWFirewallResp::inspertionVpcIsSet() const
{
    return inspertionVpcIsSet_;
}

void CreateEWFirewallResp::unsetinspertionVpc()
{
    inspertionVpcIsSet_ = false;
}

}
}
}
}
}


