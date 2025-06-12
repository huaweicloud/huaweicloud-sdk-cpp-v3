

#include "huaweicloud/metastudio/v1/model/ChatResourceConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ChatResourceConfig::ChatResourceConfig()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    countResource_ = 0;
    countResourceIsSet_ = false;
}

ChatResourceConfig::~ChatResourceConfig() = default;

void ChatResourceConfig::validate()
{
}

web::json::value ChatResourceConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(countResourceIsSet_) {
        val[utility::conversions::to_string_t("count_resource")] = ModelBase::toJson(countResource_);
    }

    return val;
}
bool ChatResourceConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count_resource"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountResource(refVal);
        }
    }
    return ok;
}


std::string ChatResourceConfig::getResourceId() const
{
    return resourceId_;
}

void ChatResourceConfig::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ChatResourceConfig::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ChatResourceConfig::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

int32_t ChatResourceConfig::getCountResource() const
{
    return countResource_;
}

void ChatResourceConfig::setCountResource(int32_t value)
{
    countResource_ = value;
    countResourceIsSet_ = true;
}

bool ChatResourceConfig::countResourceIsSet() const
{
    return countResourceIsSet_;
}

void ChatResourceConfig::unsetcountResource()
{
    countResourceIsSet_ = false;
}

}
}
}
}
}


