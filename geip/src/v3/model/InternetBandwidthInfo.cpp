

#include "huaweicloud/geip/v3/model/InternetBandwidthInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




InternetBandwidthInfo::InternetBandwidthInfo()
{
    id_ = "";
    idIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

InternetBandwidthInfo::~InternetBandwidthInfo() = default;

void InternetBandwidthInfo::validate()
{
}

web::json::value InternetBandwidthInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool InternetBandwidthInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string InternetBandwidthInfo::getId() const
{
    return id_;
}

void InternetBandwidthInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InternetBandwidthInfo::idIsSet() const
{
    return idIsSet_;
}

void InternetBandwidthInfo::unsetid()
{
    idIsSet_ = false;
}

int32_t InternetBandwidthInfo::getSize() const
{
    return size_;
}

void InternetBandwidthInfo::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool InternetBandwidthInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void InternetBandwidthInfo::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


