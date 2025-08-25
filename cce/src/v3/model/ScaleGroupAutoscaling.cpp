

#include "huaweicloud/cce/v3/model/ScaleGroupAutoscaling.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ScaleGroupAutoscaling::ScaleGroupAutoscaling()
{
    enable_ = false;
    enableIsSet_ = false;
    extensionPriority_ = 0;
    extensionPriorityIsSet_ = false;
    minNodeCount_ = 0;
    minNodeCountIsSet_ = false;
    maxNodeCount_ = 0;
    maxNodeCountIsSet_ = false;
}

ScaleGroupAutoscaling::~ScaleGroupAutoscaling() = default;

void ScaleGroupAutoscaling::validate()
{
}

web::json::value ScaleGroupAutoscaling::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(extensionPriorityIsSet_) {
        val[utility::conversions::to_string_t("extensionPriority")] = ModelBase::toJson(extensionPriority_);
    }
    if(minNodeCountIsSet_) {
        val[utility::conversions::to_string_t("minNodeCount")] = ModelBase::toJson(minNodeCount_);
    }
    if(maxNodeCountIsSet_) {
        val[utility::conversions::to_string_t("maxNodeCount")] = ModelBase::toJson(maxNodeCount_);
    }

    return val;
}
bool ScaleGroupAutoscaling::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extensionPriority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extensionPriority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtensionPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minNodeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minNodeCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxNodeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxNodeCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxNodeCount(refVal);
        }
    }
    return ok;
}


bool ScaleGroupAutoscaling::isEnable() const
{
    return enable_;
}

void ScaleGroupAutoscaling::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool ScaleGroupAutoscaling::enableIsSet() const
{
    return enableIsSet_;
}

void ScaleGroupAutoscaling::unsetenable()
{
    enableIsSet_ = false;
}

int32_t ScaleGroupAutoscaling::getExtensionPriority() const
{
    return extensionPriority_;
}

void ScaleGroupAutoscaling::setExtensionPriority(int32_t value)
{
    extensionPriority_ = value;
    extensionPriorityIsSet_ = true;
}

bool ScaleGroupAutoscaling::extensionPriorityIsSet() const
{
    return extensionPriorityIsSet_;
}

void ScaleGroupAutoscaling::unsetextensionPriority()
{
    extensionPriorityIsSet_ = false;
}

int32_t ScaleGroupAutoscaling::getMinNodeCount() const
{
    return minNodeCount_;
}

void ScaleGroupAutoscaling::setMinNodeCount(int32_t value)
{
    minNodeCount_ = value;
    minNodeCountIsSet_ = true;
}

bool ScaleGroupAutoscaling::minNodeCountIsSet() const
{
    return minNodeCountIsSet_;
}

void ScaleGroupAutoscaling::unsetminNodeCount()
{
    minNodeCountIsSet_ = false;
}

int32_t ScaleGroupAutoscaling::getMaxNodeCount() const
{
    return maxNodeCount_;
}

void ScaleGroupAutoscaling::setMaxNodeCount(int32_t value)
{
    maxNodeCount_ = value;
    maxNodeCountIsSet_ = true;
}

bool ScaleGroupAutoscaling::maxNodeCountIsSet() const
{
    return maxNodeCountIsSet_;
}

void ScaleGroupAutoscaling::unsetmaxNodeCount()
{
    maxNodeCountIsSet_ = false;
}

}
}
}
}
}


