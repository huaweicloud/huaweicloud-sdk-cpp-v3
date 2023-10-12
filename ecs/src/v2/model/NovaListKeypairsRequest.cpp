

#include "huaweicloud/ecs/v2/model/NovaListKeypairsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaListKeypairsRequest::NovaListKeypairsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    openStackAPIVersion_ = "";
    openStackAPIVersionIsSet_ = false;
}

NovaListKeypairsRequest::~NovaListKeypairsRequest() = default;

void NovaListKeypairsRequest::validate()
{
}

web::json::value NovaListKeypairsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(openStackAPIVersionIsSet_) {
        val[utility::conversions::to_string_t("OpenStack-API-Version")] = ModelBase::toJson(openStackAPIVersion_);
    }

    return val;
}
bool NovaListKeypairsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("OpenStack-API-Version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OpenStack-API-Version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenStackAPIVersion(refVal);
        }
    }
    return ok;
}


int32_t NovaListKeypairsRequest::getLimit() const
{
    return limit_;
}

void NovaListKeypairsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool NovaListKeypairsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void NovaListKeypairsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string NovaListKeypairsRequest::getMarker() const
{
    return marker_;
}

void NovaListKeypairsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool NovaListKeypairsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void NovaListKeypairsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string NovaListKeypairsRequest::getOpenStackAPIVersion() const
{
    return openStackAPIVersion_;
}

void NovaListKeypairsRequest::setOpenStackAPIVersion(const std::string& value)
{
    openStackAPIVersion_ = value;
    openStackAPIVersionIsSet_ = true;
}

bool NovaListKeypairsRequest::openStackAPIVersionIsSet() const
{
    return openStackAPIVersionIsSet_;
}

void NovaListKeypairsRequest::unsetopenStackAPIVersion()
{
    openStackAPIVersionIsSet_ = false;
}

}
}
}
}
}


