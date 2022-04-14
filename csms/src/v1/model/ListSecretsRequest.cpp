

#include "huaweicloud/csms/v1/model/ListSecretsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListSecretsRequest::ListSecretsRequest()
{
    limit_ = "";
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListSecretsRequest::~ListSecretsRequest() = default;

void ListSecretsRequest::validate()
{
}

web::json::value ListSecretsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}

bool ListSecretsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    return ok;
}


std::string ListSecretsRequest::getLimit() const
{
    return limit_;
}

void ListSecretsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSecretsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSecretsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSecretsRequest::getMarker() const
{
    return marker_;
}

void ListSecretsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListSecretsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListSecretsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


