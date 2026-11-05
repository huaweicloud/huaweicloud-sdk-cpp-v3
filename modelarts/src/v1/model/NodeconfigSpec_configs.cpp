

#include "huaweicloud/modelarts/v1/model/NodeconfigSpec_configs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigSpec_configs::NodeconfigSpec_configs()
{
    imageWarmUpIsSet_ = false;
    cpuManagerIsSet_ = false;
    dropCacheIsSet_ = false;
    transparentHugepageIsSet_ = false;
}

NodeconfigSpec_configs::~NodeconfigSpec_configs() = default;

void NodeconfigSpec_configs::validate()
{
}

web::json::value NodeconfigSpec_configs::toJson() const
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
bool NodeconfigSpec_configs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_warm_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_warm_up"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeconfigSpec_configs_image_warm_up> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageWarmUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_manager"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_manager"));
        if(!fieldValue.is_null())
        {
            NodeconfigSpec_configs_cpu_manager refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuManager(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drop_cache"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drop_cache"));
        if(!fieldValue.is_null())
        {
            NodeconfigSpec_configs_drop_cache refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDropCache(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transparent_hugepage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transparent_hugepage"));
        if(!fieldValue.is_null())
        {
            NodeconfigSpec_configs_transparent_hugepage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransparentHugepage(refVal);
        }
    }
    return ok;
}


std::vector<NodeconfigSpec_configs_image_warm_up>& NodeconfigSpec_configs::getImageWarmUp()
{
    return imageWarmUp_;
}

void NodeconfigSpec_configs::setImageWarmUp(const std::vector<NodeconfigSpec_configs_image_warm_up>& value)
{
    imageWarmUp_ = value;
    imageWarmUpIsSet_ = true;
}

bool NodeconfigSpec_configs::imageWarmUpIsSet() const
{
    return imageWarmUpIsSet_;
}

void NodeconfigSpec_configs::unsetimageWarmUp()
{
    imageWarmUpIsSet_ = false;
}

NodeconfigSpec_configs_cpu_manager NodeconfigSpec_configs::getCpuManager() const
{
    return cpuManager_;
}

void NodeconfigSpec_configs::setCpuManager(const NodeconfigSpec_configs_cpu_manager& value)
{
    cpuManager_ = value;
    cpuManagerIsSet_ = true;
}

bool NodeconfigSpec_configs::cpuManagerIsSet() const
{
    return cpuManagerIsSet_;
}

void NodeconfigSpec_configs::unsetcpuManager()
{
    cpuManagerIsSet_ = false;
}

NodeconfigSpec_configs_drop_cache NodeconfigSpec_configs::getDropCache() const
{
    return dropCache_;
}

void NodeconfigSpec_configs::setDropCache(const NodeconfigSpec_configs_drop_cache& value)
{
    dropCache_ = value;
    dropCacheIsSet_ = true;
}

bool NodeconfigSpec_configs::dropCacheIsSet() const
{
    return dropCacheIsSet_;
}

void NodeconfigSpec_configs::unsetdropCache()
{
    dropCacheIsSet_ = false;
}

NodeconfigSpec_configs_transparent_hugepage NodeconfigSpec_configs::getTransparentHugepage() const
{
    return transparentHugepage_;
}

void NodeconfigSpec_configs::setTransparentHugepage(const NodeconfigSpec_configs_transparent_hugepage& value)
{
    transparentHugepage_ = value;
    transparentHugepageIsSet_ = true;
}

bool NodeconfigSpec_configs::transparentHugepageIsSet() const
{
    return transparentHugepageIsSet_;
}

void NodeconfigSpec_configs::unsettransparentHugepage()
{
    transparentHugepageIsSet_ = false;
}

}
}
}
}
}


