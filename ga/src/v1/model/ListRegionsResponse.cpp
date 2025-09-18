

#include "huaweicloud/ga/v1/model/ListRegionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListRegionsResponse::ListRegionsResponse()
{
    regionsIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListRegionsResponse::~ListRegionsResponse() = default;

void ListRegionsResponse::validate()
{
}

web::json::value ListRegionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionsIsSet_) {
        val[utility::conversions::to_string_t("regions")] = ModelBase::toJson(regions_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ListRegionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("regions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regions"));
        if(!fieldValue.is_null())
        {
            std::vector<Region> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::vector<Region>& ListRegionsResponse::getRegions()
{
    return regions_;
}

void ListRegionsResponse::setRegions(const std::vector<Region>& value)
{
    regions_ = value;
    regionsIsSet_ = true;
}

bool ListRegionsResponse::regionsIsSet() const
{
    return regionsIsSet_;
}

void ListRegionsResponse::unsetregions()
{
    regionsIsSet_ = false;
}

std::string ListRegionsResponse::getRequestId() const
{
    return requestId_;
}

void ListRegionsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListRegionsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListRegionsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


