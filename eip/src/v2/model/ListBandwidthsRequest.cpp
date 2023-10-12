

#include "huaweicloud/eip/v2/model/ListBandwidthsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ListBandwidthsRequest::ListBandwidthsRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    shareType_ = "";
    shareTypeIsSet_ = false;
}

ListBandwidthsRequest::~ListBandwidthsRequest() = default;

void ListBandwidthsRequest::validate()
{
}

web::json::value ListBandwidthsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(shareTypeIsSet_) {
        val[utility::conversions::to_string_t("share_type")] = ModelBase::toJson(shareType_);
    }

    return val;
}
bool ListBandwidthsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("share_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareType(refVal);
        }
    }
    return ok;
}


std::string ListBandwidthsRequest::getMarker() const
{
    return marker_;
}

void ListBandwidthsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListBandwidthsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListBandwidthsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListBandwidthsRequest::getLimit() const
{
    return limit_;
}

void ListBandwidthsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBandwidthsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBandwidthsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListBandwidthsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListBandwidthsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListBandwidthsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListBandwidthsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListBandwidthsRequest::getShareType() const
{
    return shareType_;
}

void ListBandwidthsRequest::setShareType(const std::string& value)
{
    shareType_ = value;
    shareTypeIsSet_ = true;
}

bool ListBandwidthsRequest::shareTypeIsSet() const
{
    return shareTypeIsSet_;
}

void ListBandwidthsRequest::unsetshareType()
{
    shareTypeIsSet_ = false;
}

}
}
}
}
}


