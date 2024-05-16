

#include "huaweicloud/gaussdb/v3/model/ResourceCheck.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResourceCheck::ResourceCheck()
{
    action_ = "";
    actionIsSet_ = false;
    resourceIsSet_ = false;
}

ResourceCheck::~ResourceCheck() = default;

void ResourceCheck::validate()
{
}

web::json::value ResourceCheck::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }

    return val;
}
bool ResourceCheck::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            ResourceCheck_resource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    return ok;
}


std::string ResourceCheck::getAction() const
{
    return action_;
}

void ResourceCheck::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ResourceCheck::actionIsSet() const
{
    return actionIsSet_;
}

void ResourceCheck::unsetaction()
{
    actionIsSet_ = false;
}

ResourceCheck_resource ResourceCheck::getResource() const
{
    return resource_;
}

void ResourceCheck::setResource(const ResourceCheck_resource& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool ResourceCheck::resourceIsSet() const
{
    return resourceIsSet_;
}

void ResourceCheck::unsetresource()
{
    resourceIsSet_ = false;
}

}
}
}
}
}


