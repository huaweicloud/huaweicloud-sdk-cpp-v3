

#include "huaweicloud/modelarts/v1/model/ContainerHooks.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ContainerHooks::ContainerHooks()
{
    postStartIsSet_ = false;
    preStartIsSet_ = false;
}

ContainerHooks::~ContainerHooks() = default;

void ContainerHooks::validate()
{
}

web::json::value ContainerHooks::toJson() const
{
    web::json::value val = web::json::value::object();

    if(postStartIsSet_) {
        val[utility::conversions::to_string_t("post_start")] = ModelBase::toJson(postStart_);
    }
    if(preStartIsSet_) {
        val[utility::conversions::to_string_t("pre_start")] = ModelBase::toJson(preStart_);
    }

    return val;
}
bool ContainerHooks::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("post_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("post_start"));
        if(!fieldValue.is_null())
        {
            Config refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPostStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pre_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pre_start"));
        if(!fieldValue.is_null())
        {
            Config refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreStart(refVal);
        }
    }
    return ok;
}


Config ContainerHooks::getPostStart() const
{
    return postStart_;
}

void ContainerHooks::setPostStart(const Config& value)
{
    postStart_ = value;
    postStartIsSet_ = true;
}

bool ContainerHooks::postStartIsSet() const
{
    return postStartIsSet_;
}

void ContainerHooks::unsetpostStart()
{
    postStartIsSet_ = false;
}

Config ContainerHooks::getPreStart() const
{
    return preStart_;
}

void ContainerHooks::setPreStart(const Config& value)
{
    preStart_ = value;
    preStartIsSet_ = true;
}

bool ContainerHooks::preStartIsSet() const
{
    return preStartIsSet_;
}

void ContainerHooks::unsetpreStart()
{
    preStartIsSet_ = false;
}

}
}
}
}
}


