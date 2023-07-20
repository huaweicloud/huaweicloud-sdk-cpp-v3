

#include "huaweicloud/dds/v3/model/InstanceItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




InstanceItem::InstanceItem()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    tagsIsSet_ = false;
}

InstanceItem::~InstanceItem() = default;

void InstanceItem::validate()
{
}

web::json::value InstanceItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool InstanceItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceItemTagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string InstanceItem::getInstanceId() const
{
    return instanceId_;
}

void InstanceItem::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceItem::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceItem::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstanceItem::getInstanceName() const
{
    return instanceName_;
}

void InstanceItem::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool InstanceItem::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void InstanceItem::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::vector<InstanceItemTagItem>& InstanceItem::getTags()
{
    return tags_;
}

void InstanceItem::setTags(const std::vector<InstanceItemTagItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool InstanceItem::tagsIsSet() const
{
    return tagsIsSet_;
}

void InstanceItem::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


