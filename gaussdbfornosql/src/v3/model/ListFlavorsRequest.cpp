

#include "huaweicloud/gaussdbfornosql/v3/model/ListFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListFlavorsRequest::ListFlavorsRequest()
{
    region_ = "";
    regionIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
}

ListFlavorsRequest::~ListFlavorsRequest() = default;

void ListFlavorsRequest::validate()
{
}

web::json::value ListFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }

    return val;
}
bool ListFlavorsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    return ok;
}


std::string ListFlavorsRequest::getRegion() const
{
    return region_;
}

void ListFlavorsRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListFlavorsRequest::regionIsSet() const
{
    return regionIsSet_;
}

void ListFlavorsRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::string ListFlavorsRequest::getEngineName() const
{
    return engineName_;
}

void ListFlavorsRequest::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ListFlavorsRequest::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ListFlavorsRequest::unsetengineName()
{
    engineNameIsSet_ = false;
}

}
}
}
}
}


