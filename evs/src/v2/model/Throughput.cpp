

#include "huaweicloud/evs/v2/model/Throughput.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




Throughput::Throughput()
{
    frozened_ = false;
    frozenedIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    totalVal_ = 0;
    totalValIsSet_ = false;
}

Throughput::~Throughput() = default;

void Throughput::validate()
{
}

web::json::value Throughput::toJson() const
{
    web::json::value val = web::json::value::object();

    if(frozenedIsSet_) {
        val[utility::conversions::to_string_t("frozened")] = ModelBase::toJson(frozened_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(totalValIsSet_) {
        val[utility::conversions::to_string_t("total_val")] = ModelBase::toJson(totalVal_);
    }

    return val;
}
bool Throughput::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("frozened"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frozened"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrozened(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_val"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_val"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalVal(refVal);
        }
    }
    return ok;
}


bool Throughput::isFrozened() const
{
    return frozened_;
}

void Throughput::setFrozened(bool value)
{
    frozened_ = value;
    frozenedIsSet_ = true;
}

bool Throughput::frozenedIsSet() const
{
    return frozenedIsSet_;
}

void Throughput::unsetfrozened()
{
    frozenedIsSet_ = false;
}

std::string Throughput::getId() const
{
    return id_;
}

void Throughput::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Throughput::idIsSet() const
{
    return idIsSet_;
}

void Throughput::unsetid()
{
    idIsSet_ = false;
}

int32_t Throughput::getTotalVal() const
{
    return totalVal_;
}

void Throughput::setTotalVal(int32_t value)
{
    totalVal_ = value;
    totalValIsSet_ = true;
}

bool Throughput::totalValIsSet() const
{
    return totalValIsSet_;
}

void Throughput::unsettotalVal()
{
    totalValIsSet_ = false;
}

}
}
}
}
}


