

#include "huaweicloud/vpc/v2/model/DisassociateRouteTableRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DisassociateRouteTableRequest::DisassociateRouteTableRequest()
{
    routetableId_ = "";
    routetableIdIsSet_ = false;
    bodyIsSet_ = false;
}

DisassociateRouteTableRequest::~DisassociateRouteTableRequest() = default;

void DisassociateRouteTableRequest::validate()
{
}

web::json::value DisassociateRouteTableRequest::toJson() const
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

bool DisassociateRouteTableRequest::fromJson(const web::json::value& val)
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


std::string DisassociateRouteTableRequest::getRoutetableId() const
{
    return routetableId_;
}

void DisassociateRouteTableRequest::setRoutetableId(const std::string& value)
{
    routetableId_ = value;
    routetableIdIsSet_ = true;
}

bool DisassociateRouteTableRequest::routetableIdIsSet() const
{
    return routetableIdIsSet_;
}

void DisassociateRouteTableRequest::unsetroutetableId()
{
    routetableIdIsSet_ = false;
}

RoutetableAssociateReqbody DisassociateRouteTableRequest::getBody() const
{
    return body_;
}

void DisassociateRouteTableRequest::setBody(const RoutetableAssociateReqbody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisassociateRouteTableRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisassociateRouteTableRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


