

#include "huaweicloud/gaussdb/v3/model/MysqlVolumeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlVolumeInfo::MysqlVolumeInfo()
{
    type_ = "";
    typeIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
}

MysqlVolumeInfo::~MysqlVolumeInfo() = default;

void MysqlVolumeInfo::validate()
{
}

web::json::value MysqlVolumeInfo::toJson() const
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
bool MysqlVolumeInfo::fromJson(const web::json::value& val)
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


std::string MysqlVolumeInfo::getType() const
{
    return type_;
}

void MysqlVolumeInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MysqlVolumeInfo::typeIsSet() const
{
    return typeIsSet_;
}

void MysqlVolumeInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string MysqlVolumeInfo::getSize() const
{
    return size_;
}

void MysqlVolumeInfo::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool MysqlVolumeInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void MysqlVolumeInfo::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


