

#include "huaweicloud/vpc/v2/model/AssociateRouteTableRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




AssociateRouteTableRequest::AssociateRouteTableRequest()
{
    routetableId_ = "";
    routetableIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssociateRouteTableRequest::~AssociateRouteTableRequest() = default;

void AssociateRouteTableRequest::validate()
{
}

web::json::value AssociateRouteTableRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routetableIdIsSet_) {
        val[utility::conversions::to_string_t("routetable_id")] = ModelBase::toJson(routetableId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AssociateRouteTableRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("routetable_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routetable_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutetableId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RoutetableAssociateReqbody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AssociateRouteTableRequest::getRoutetableId() const
{
    return routetableId_;
}

void AssociateRouteTableRequest::setRoutetableId(const std::string& value)
{
    routetableId_ = value;
    routetableIdIsSet_ = true;
}

bool AssociateRouteTableRequest::routetableIdIsSet() const
{
    return routetableIdIsSet_;
}

void AssociateRouteTableRequest::unsetroutetableId()
{
    routetableIdIsSet_ = false;
}

RoutetableAssociateReqbody AssociateRouteTableRequest::getBody() const
{
    return body_;
}

void AssociateRouteTableRequest::setBody(const RoutetableAssociateReqbody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateRouteTableRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateRouteTableRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


