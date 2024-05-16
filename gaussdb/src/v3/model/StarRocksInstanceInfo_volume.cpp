

#include "huaweicloud/gaussdb/v3/model/StarRocksInstanceInfo_volume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StarRocksInstanceInfo_volume::StarRocksInstanceInfo_volume()
{
    type_ = "";
    typeIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
}

StarRocksInstanceInfo_volume::~StarRocksInstanceInfo_volume() = default;

void StarRocksInstanceInfo_volume::validate()
{
}

web::json::value StarRocksInstanceInfo_volume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool StarRocksInstanceInfo_volume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string StarRocksInstanceInfo_volume::getType() const
{
    return type_;
}

void StarRocksInstanceInfo_volume::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool StarRocksInstanceInfo_volume::typeIsSet() const
{
    return typeIsSet_;
}

void StarRocksInstanceInfo_volume::unsettype()
{
    typeIsSet_ = false;
}

std::string StarRocksInstanceInfo_volume::getSize() const
{
    return size_;
}

void StarRocksInstanceInfo_volume::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool StarRocksInstanceInfo_volume::sizeIsSet() const
{
    return sizeIsSet_;
}

void StarRocksInstanceInfo_volume::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


