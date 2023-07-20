

#include "huaweicloud/gaussdb/v3/model/MysqlInstanceNodeVolumeInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlInstanceNodeVolumeInfo::MysqlInstanceNodeVolumeInfo()
{
    type_ = "";
    typeIsSet_ = false;
    used_ = "";
    usedIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
}

MysqlInstanceNodeVolumeInfo::~MysqlInstanceNodeVolumeInfo() = default;

void MysqlInstanceNodeVolumeInfo::validate()
{
}

web::json::value MysqlInstanceNodeVolumeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}

bool MysqlInstanceNodeVolumeInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}

std::string MysqlInstanceNodeVolumeInfo::getType() const
{
    return type_;
}

void MysqlInstanceNodeVolumeInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MysqlInstanceNodeVolumeInfo::typeIsSet() const
{
    return typeIsSet_;
}

void MysqlInstanceNodeVolumeInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string MysqlInstanceNodeVolumeInfo::getUsed() const
{
    return used_;
}

void MysqlInstanceNodeVolumeInfo::setUsed(const std::string& value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool MysqlInstanceNodeVolumeInfo::usedIsSet() const
{
    return usedIsSet_;
}

void MysqlInstanceNodeVolumeInfo::unsetused()
{
    usedIsSet_ = false;
}

int64_t MysqlInstanceNodeVolumeInfo::getSize() const
{
    return size_;
}

void MysqlInstanceNodeVolumeInfo::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool MysqlInstanceNodeVolumeInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void MysqlInstanceNodeVolumeInfo::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


