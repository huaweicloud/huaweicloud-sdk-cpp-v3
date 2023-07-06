

#include "huaweicloud/vpc/v2/model/UpdateRouteTableRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateRouteTableRequest::UpdateRouteTableRequest()
{
    routetableId_ = "";
    routetableIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRouteTableRequest::~UpdateRouteTableRequest() = default;

void UpdateRouteTableRequest::validate()
{
}

web::json::value UpdateRouteTableRequest::toJson() const
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

bool UpdateRouteTableRequest::fromJson(const web::json::value& val)
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
            UpdateRoutetableReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateRouteTableRequest::getRoutetableId() const
{
    return routetableId_;
}

void UpdateRouteTableRequest::setRoutetableId(const std::string& value)
{
    routetableId_ = value;
    routetableIdIsSet_ = true;
}

bool UpdateRouteTableRequest::routetableIdIsSet() const
{
    return routetableIdIsSet_;
}

void UpdateRouteTableRequest::unsetroutetableId()
{
    routetableIdIsSet_ = false;
}

UpdateRoutetableReqBody UpdateRouteTableRequest::getBody() const
{
    return body_;
}

void UpdateRouteTableRequest::setBody(const UpdateRoutetableReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRouteTableRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRouteTableRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


