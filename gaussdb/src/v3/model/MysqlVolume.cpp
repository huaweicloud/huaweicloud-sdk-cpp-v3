

#include "huaweicloud/gaussdb/v3/model/MysqlVolume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlVolume::MysqlVolume()
{
    size_ = "";
    sizeIsSet_ = false;
}

MysqlVolume::~MysqlVolume() = default;

void MysqlVolume::validate()
{
}

web::json::value MysqlVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool MysqlVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string MysqlVolume::getSize() const
{
    return size_;
}

void MysqlVolume::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool MysqlVolume::sizeIsSet() const
{
    return sizeIsSet_;
}

void MysqlVolume::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


