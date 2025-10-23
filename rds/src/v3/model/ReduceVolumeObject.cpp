

#include "huaweicloud/rds/v3/model/ReduceVolumeObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ReduceVolumeObject::ReduceVolumeObject()
{
    size_ = 0;
    sizeIsSet_ = false;
    iops_ = 0;
    iopsIsSet_ = false;
    throughput_ = 0;
    throughputIsSet_ = false;
}

ReduceVolumeObject::~ReduceVolumeObject() = default;

void ReduceVolumeObject::validate()
{
}

web::json::value ReduceVolumeObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(iopsIsSet_) {
        val[utility::conversions::to_string_t("iops")] = ModelBase::toJson(iops_);
    }
    if(throughputIsSet_) {
        val[utility::conversions::to_string_t("throughput")] = ModelBase::toJson(throughput_);
    }

    return val;
}
bool ReduceVolumeObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iops"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iops"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIops(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("throughput"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("throughput"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThroughput(refVal);
        }
    }
    return ok;
}


int32_t ReduceVolumeObject::getSize() const
{
    return size_;
}

void ReduceVolumeObject::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ReduceVolumeObject::sizeIsSet() const
{
    return sizeIsSet_;
}

void ReduceVolumeObject::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t ReduceVolumeObject::getIops() const
{
    return iops_;
}

void ReduceVolumeObject::setIops(int32_t value)
{
    iops_ = value;
    iopsIsSet_ = true;
}

bool ReduceVolumeObject::iopsIsSet() const
{
    return iopsIsSet_;
}

void ReduceVolumeObject::unsetiops()
{
    iopsIsSet_ = false;
}

int32_t ReduceVolumeObject::getThroughput() const
{
    return throughput_;
}

void ReduceVolumeObject::setThroughput(int32_t value)
{
    throughput_ = value;
    throughputIsSet_ = true;
}

bool ReduceVolumeObject::throughputIsSet() const
{
    return throughputIsSet_;
}

void ReduceVolumeObject::unsetthroughput()
{
    throughputIsSet_ = false;
}

}
}
}
}
}


