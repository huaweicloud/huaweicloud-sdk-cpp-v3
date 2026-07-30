

#include "huaweicloud/modelarts/v1/model/PoolStatus_resources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolStatus_resources::PoolStatus_resources()
{
    creatingIsSet_ = false;
    availableIsSet_ = false;
    abnormalIsSet_ = false;
    deletingIsSet_ = false;
}

PoolStatus_resources::~PoolStatus_resources() = default;

void PoolStatus_resources::validate()
{
}

web::json::value PoolStatus_resources::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creatingIsSet_) {
        val[utility::conversions::to_string_t("creating")] = ModelBase::toJson(creating_);
    }
    if(availableIsSet_) {
        val[utility::conversions::to_string_t("available")] = ModelBase::toJson(available_);
    }
    if(abnormalIsSet_) {
        val[utility::conversions::to_string_t("abnormal")] = ModelBase::toJson(abnormal_);
    }
    if(deletingIsSet_) {
        val[utility::conversions::to_string_t("deleting")] = ModelBase::toJson(deleting_);
    }

    return val;
}
bool PoolStatus_resources::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("creating"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creating"));
        if(!fieldValue.is_null())
        {
            PoolResourceFlavorCount refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreating(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("available"));
        if(!fieldValue.is_null())
        {
            PoolResourceFlavorCount refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("abnormal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abnormal"));
        if(!fieldValue.is_null())
        {
            PoolResourceFlavorCount refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbnormal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleting"));
        if(!fieldValue.is_null())
        {
            PoolResourceFlavorCount refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleting(refVal);
        }
    }
    return ok;
}


PoolResourceFlavorCount PoolStatus_resources::getCreating() const
{
    return creating_;
}

void PoolStatus_resources::setCreating(const PoolResourceFlavorCount& value)
{
    creating_ = value;
    creatingIsSet_ = true;
}

bool PoolStatus_resources::creatingIsSet() const
{
    return creatingIsSet_;
}

void PoolStatus_resources::unsetcreating()
{
    creatingIsSet_ = false;
}

PoolResourceFlavorCount PoolStatus_resources::getAvailable() const
{
    return available_;
}

void PoolStatus_resources::setAvailable(const PoolResourceFlavorCount& value)
{
    available_ = value;
    availableIsSet_ = true;
}

bool PoolStatus_resources::availableIsSet() const
{
    return availableIsSet_;
}

void PoolStatus_resources::unsetavailable()
{
    availableIsSet_ = false;
}

PoolResourceFlavorCount PoolStatus_resources::getAbnormal() const
{
    return abnormal_;
}

void PoolStatus_resources::setAbnormal(const PoolResourceFlavorCount& value)
{
    abnormal_ = value;
    abnormalIsSet_ = true;
}

bool PoolStatus_resources::abnormalIsSet() const
{
    return abnormalIsSet_;
}

void PoolStatus_resources::unsetabnormal()
{
    abnormalIsSet_ = false;
}

PoolResourceFlavorCount PoolStatus_resources::getDeleting() const
{
    return deleting_;
}

void PoolStatus_resources::setDeleting(const PoolResourceFlavorCount& value)
{
    deleting_ = value;
    deletingIsSet_ = true;
}

bool PoolStatus_resources::deletingIsSet() const
{
    return deletingIsSet_;
}

void PoolStatus_resources::unsetdeleting()
{
    deletingIsSet_ = false;
}

}
}
}
}
}


