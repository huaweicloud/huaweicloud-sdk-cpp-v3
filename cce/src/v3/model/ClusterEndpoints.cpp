

#include "huaweicloud/cce/v3/model/ClusterEndpoints.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterEndpoints::ClusterEndpoints()
{
    url_ = "";
    urlIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ClusterEndpoints::~ClusterEndpoints() = default;

void ClusterEndpoints::validate()
{
}

web::json::value ClusterEndpoints::toJson() const
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
bool ClusterEndpoints::fromJson(const web::json::value& val)
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


std::string ClusterEndpoints::getUrl() const
{
    return url_;
}

void ClusterEndpoints::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ClusterEndpoints::urlIsSet() const
{
    return urlIsSet_;
}

void ClusterEndpoints::unseturl()
{
    urlIsSet_ = false;
}

std::string ClusterEndpoints::getType() const
{
    return type_;
}

void ClusterEndpoints::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ClusterEndpoints::typeIsSet() const
{
    return typeIsSet_;
}

void ClusterEndpoints::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


