

#include "huaweicloud/evs/v2/model/RetypeVolume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RetypeVolume::RetypeVolume()
{
    newType_ = "";
    newTypeIsSet_ = false;
    iops_ = 0;
    iopsIsSet_ = false;
    throughput_ = 0;
    throughputIsSet_ = false;
}

RetypeVolume::~RetypeVolume() = default;

void RetypeVolume::validate()
{
}

web::json::value RetypeVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newTypeIsSet_) {
        val[utility::conversions::to_string_t("new_type")] = ModelBase::toJson(newType_);
    }
    if(iopsIsSet_) {
        val[utility::conversions::to_string_t("iops")] = ModelBase::toJson(iops_);
    }
    if(throughputIsSet_) {
        val[utility::conversions::to_string_t("throughput")] = ModelBase::toJson(throughput_);
    }

    return val;
}
bool RetypeVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("new_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewType(refVal);
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


std::string RetypeVolume::getNewType() const
{
    return newType_;
}

void RetypeVolume::setNewType(const std::string& value)
{
    newType_ = value;
    newTypeIsSet_ = true;
}

bool RetypeVolume::newTypeIsSet() const
{
    return newTypeIsSet_;
}

void RetypeVolume::unsetnewType()
{
    newTypeIsSet_ = false;
}

int32_t RetypeVolume::getIops() const
{
    return iops_;
}

void RetypeVolume::setIops(int32_t value)
{
    iops_ = value;
    iopsIsSet_ = true;
}

bool RetypeVolume::iopsIsSet() const
{
    return iopsIsSet_;
}

void RetypeVolume::unsetiops()
{
    iopsIsSet_ = false;
}

int32_t RetypeVolume::getThroughput() const
{
    return throughput_;
}

void RetypeVolume::setThroughput(int32_t value)
{
    throughput_ = value;
    throughputIsSet_ = true;
}

bool RetypeVolume::throughputIsSet() const
{
    return throughputIsSet_;
}

void RetypeVolume::unsetthroughput()
{
    throughputIsSet_ = false;
}

}
}
}
}
}


