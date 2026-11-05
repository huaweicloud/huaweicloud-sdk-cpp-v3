

#include "huaweicloud/modelarts/v1/model/NodeconfigUpdate_spec_configs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigUpdate_spec_configs::NodeconfigUpdate_spec_configs()
{
    imageWarmUpIsSet_ = false;
    cpuManagerIsSet_ = false;
    dropCacheIsSet_ = false;
    transparentHugepageIsSet_ = false;
}

NodeconfigUpdate_spec_configs::~NodeconfigUpdate_spec_configs() = default;

void NodeconfigUpdate_spec_configs::validate()
{
}

web::json::value NodeconfigUpdate_spec_configs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageWarmUpIsSet_) {
        val[utility::conversions::to_string_t("image_warm_up")] = ModelBase::toJson(imageWarmUp_);
    }
    if(cpuManagerIsSet_) {
        val[utility::conversions::to_string_t("cpu_manager")] = ModelBase::toJson(cpuManager_);
    }
    if(dropCacheIsSet_) {
        val[utility::conversions::to_string_t("drop_cache")] = ModelBase::toJson(dropCache_);
    }
    if(transparentHugepageIsSet_) {
        val[utility::conversions::to_string_t("transparent_hugepage")] = ModelBase::toJson(transparentHugepage_);
    }

    return val;
}
bool NodeconfigUpdate_spec_configs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_warm_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_warm_up"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeconfigUpdate_spec_configs_image_warm_up> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageWarmUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_manager"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_manager"));
        if(!fieldValue.is_null())
        {
            NodeconfigUpdate_spec_configs_cpu_manager refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuManager(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drop_cache"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drop_cache"));
        if(!fieldValue.is_null())
        {
            NodeconfigUpdate_spec_configs_drop_cache refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDropCache(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transparent_hugepage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transparent_hugepage"));
        if(!fieldValue.is_null())
        {
            NodeconfigUpdate_spec_configs_transparent_hugepage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransparentHugepage(refVal);
        }
    }
    return ok;
}


std::vector<NodeconfigUpdate_spec_configs_image_warm_up>& NodeconfigUpdate_spec_configs::getImageWarmUp()
{
    return imageWarmUp_;
}

void NodeconfigUpdate_spec_configs::setImageWarmUp(const std::vector<NodeconfigUpdate_spec_configs_image_warm_up>& value)
{
    imageWarmUp_ = value;
    imageWarmUpIsSet_ = true;
}

bool NodeconfigUpdate_spec_configs::imageWarmUpIsSet() const
{
    return imageWarmUpIsSet_;
}

void NodeconfigUpdate_spec_configs::unsetimageWarmUp()
{
    imageWarmUpIsSet_ = false;
}

NodeconfigUpdate_spec_configs_cpu_manager NodeconfigUpdate_spec_configs::getCpuManager() const
{
    return cpuManager_;
}

void NodeconfigUpdate_spec_configs::setCpuManager(const NodeconfigUpdate_spec_configs_cpu_manager& value)
{
    cpuManager_ = value;
    cpuManagerIsSet_ = true;
}

bool NodeconfigUpdate_spec_configs::cpuManagerIsSet() const
{
    return cpuManagerIsSet_;
}

void NodeconfigUpdate_spec_configs::unsetcpuManager()
{
    cpuManagerIsSet_ = false;
}

NodeconfigUpdate_spec_configs_drop_cache NodeconfigUpdate_spec_configs::getDropCache() const
{
    return dropCache_;
}

void NodeconfigUpdate_spec_configs::setDropCache(const NodeconfigUpdate_spec_configs_drop_cache& value)
{
    dropCache_ = value;
    dropCacheIsSet_ = true;
}

bool NodeconfigUpdate_spec_configs::dropCacheIsSet() const
{
    return dropCacheIsSet_;
}

void NodeconfigUpdate_spec_configs::unsetdropCache()
{
    dropCacheIsSet_ = false;
}

NodeconfigUpdate_spec_configs_transparent_hugepage NodeconfigUpdate_spec_configs::getTransparentHugepage() const
{
    return transparentHugepage_;
}

void NodeconfigUpdate_spec_configs::setTransparentHugepage(const NodeconfigUpdate_spec_configs_transparent_hugepage& value)
{
    transparentHugepage_ = value;
    transparentHugepageIsSet_ = true;
}

bool NodeconfigUpdate_spec_configs::transparentHugepageIsSet() const
{
    return transparentHugepageIsSet_;
}

void NodeconfigUpdate_spec_configs::unsettransparentHugepage()
{
    transparentHugepageIsSet_ = false;
}

}
}
}
}
}


