

#include "huaweicloud/csms/v1/model/ListSecretVersionsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListSecretVersionsRequest::ListSecretVersionsRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSecretVersionsRequest::~ListSecretVersionsRequest() = default;

void ListSecretVersionsRequest::validate()
{
}

web::json::value ListSecretVersionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListSecretVersionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}

std::string ListSecretVersionsRequest::getSecretName() const
{
    return secretName_;
}

void ListSecretVersionsRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool ListSecretVersionsRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void ListSecretVersionsRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string ListSecretVersionsRequest::getMarker() const
{
    return marker_;
}

void ListSecretVersionsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListSecretVersionsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListSecretVersionsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListSecretVersionsRequest::getLimit() const
{
    return limit_;
}

void ListSecretVersionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSecretVersionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSecretVersionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


