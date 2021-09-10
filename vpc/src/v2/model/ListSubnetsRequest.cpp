

#include "huaweicloud/vpc/v2/model/ListSubnetsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListSubnetsRequest::ListSubnetsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
}

ListSubnetsRequest::~ListSubnetsRequest() = default;

void ListSubnetsRequest::validate()
{
}

web::json::value ListSubnetsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }

    return val;
}

bool ListSubnetsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
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


int32_t ListSubnetsRequest::getLimit() const
{
    return limit_;
}

void ListSubnetsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSubnetsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSubnetsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSubnetsRequest::getMarker() const
{
    return marker_;
}

void ListSubnetsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListSubnetsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListSubnetsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListSubnetsRequest::getVpcId() const
{
    return vpcId_;
}

void ListSubnetsRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListSubnetsRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListSubnetsRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

}
}
}
}
}


