

#include "huaweicloud/gaussdbfornosql/v3/model/InstanceResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




InstanceResult::InstanceResult()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    tagsIsSet_ = false;
}

InstanceResult::~InstanceResult() = default;

void InstanceResult::validate()
{
}

web::json::value InstanceResult::toJson() const
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

bool InstanceResult::fromJson(const web::json::value& val)
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
            std::vector<InstanceTagResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string InstanceResult::getInstanceId() const
{
    return instanceId_;
}

void InstanceResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstanceResult::getInstanceName() const
{
    return instanceName_;
}

void InstanceResult::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool InstanceResult::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void InstanceResult::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::vector<InstanceTagResult>& InstanceResult::getTags()
{
    return tags_;
}

void InstanceResult::setTags(const std::vector<InstanceTagResult>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool InstanceResult::tagsIsSet() const
{
    return tagsIsSet_;
}

void InstanceResult::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


