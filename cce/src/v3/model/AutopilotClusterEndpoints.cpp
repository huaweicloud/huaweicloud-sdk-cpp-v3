

#include "huaweicloud/cce/v3/model/AutopilotClusterEndpoints.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotClusterEndpoints::AutopilotClusterEndpoints()
{
    url_ = "";
    urlIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

AutopilotClusterEndpoints::~AutopilotClusterEndpoints() = default;

void AutopilotClusterEndpoints::validate()
{
}

web::json::value AutopilotClusterEndpoints::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool AutopilotClusterEndpoints::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string AutopilotClusterEndpoints::getUrl() const
{
    return url_;
}

void AutopilotClusterEndpoints::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool AutopilotClusterEndpoints::urlIsSet() const
{
    return urlIsSet_;
}

void AutopilotClusterEndpoints::unseturl()
{
    urlIsSet_ = false;
}

std::string AutopilotClusterEndpoints::getType() const
{
    return type_;
}

void AutopilotClusterEndpoints::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AutopilotClusterEndpoints::typeIsSet() const
{
    return typeIsSet_;
}

void AutopilotClusterEndpoints::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


