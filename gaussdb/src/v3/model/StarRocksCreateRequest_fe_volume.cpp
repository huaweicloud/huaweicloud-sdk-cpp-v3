

#include "huaweicloud/gaussdb/v3/model/StarRocksCreateRequest_fe_volume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StarRocksCreateRequest_fe_volume::StarRocksCreateRequest_fe_volume()
{
    ioType_ = "";
    ioTypeIsSet_ = false;
    capacityInGb_ = 0;
    capacityInGbIsSet_ = false;
}

StarRocksCreateRequest_fe_volume::~StarRocksCreateRequest_fe_volume() = default;

void StarRocksCreateRequest_fe_volume::validate()
{
}

web::json::value StarRocksCreateRequest_fe_volume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ioTypeIsSet_) {
        val[utility::conversions::to_string_t("io_type")] = ModelBase::toJson(ioType_);
    }
    if(capacityInGbIsSet_) {
        val[utility::conversions::to_string_t("capacity_in_gb")] = ModelBase::toJson(capacityInGb_);
    }

    return val;
}
bool StarRocksCreateRequest_fe_volume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("io_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("io_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIoType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("capacity_in_gb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("capacity_in_gb"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCapacityInGb(refVal);
        }
    }
    return ok;
}


std::string StarRocksCreateRequest_fe_volume::getIoType() const
{
    return ioType_;
}

void StarRocksCreateRequest_fe_volume::setIoType(const std::string& value)
{
    ioType_ = value;
    ioTypeIsSet_ = true;
}

bool StarRocksCreateRequest_fe_volume::ioTypeIsSet() const
{
    return ioTypeIsSet_;
}

void StarRocksCreateRequest_fe_volume::unsetioType()
{
    ioTypeIsSet_ = false;
}

int32_t StarRocksCreateRequest_fe_volume::getCapacityInGb() const
{
    return capacityInGb_;
}

void StarRocksCreateRequest_fe_volume::setCapacityInGb(int32_t value)
{
    capacityInGb_ = value;
    capacityInGbIsSet_ = true;
}

bool StarRocksCreateRequest_fe_volume::capacityInGbIsSet() const
{
    return capacityInGbIsSet_;
}

void StarRocksCreateRequest_fe_volume::unsetcapacityInGb()
{
    capacityInGbIsSet_ = false;
}

}
}
}
}
}


