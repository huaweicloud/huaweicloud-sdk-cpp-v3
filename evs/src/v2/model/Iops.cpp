

#include "huaweicloud/evs/v2/model/Iops.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




Iops::Iops()
{
    frozened_ = false;
    frozenedIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    totalVal_ = 0;
    totalValIsSet_ = false;
}

Iops::~Iops() = default;

void Iops::validate()
{
}

web::json::value Iops::toJson() const
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
bool Iops::fromJson(const web::json::value& val)
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


bool Iops::isFrozened() const
{
    return frozened_;
}

void Iops::setFrozened(bool value)
{
    frozened_ = value;
    frozenedIsSet_ = true;
}

bool Iops::frozenedIsSet() const
{
    return frozenedIsSet_;
}

void Iops::unsetfrozened()
{
    frozenedIsSet_ = false;
}

std::string Iops::getId() const
{
    return id_;
}

void Iops::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Iops::idIsSet() const
{
    return idIsSet_;
}

void Iops::unsetid()
{
    idIsSet_ = false;
}

int32_t Iops::getTotalVal() const
{
    return totalVal_;
}

void Iops::setTotalVal(int32_t value)
{
    totalVal_ = value;
    totalValIsSet_ = true;
}

bool Iops::totalValIsSet() const
{
    return totalValIsSet_;
}

void Iops::unsettotalVal()
{
    totalValIsSet_ = false;
}

}
}
}
}
}


