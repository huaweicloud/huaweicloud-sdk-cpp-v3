

#include "huaweicloud/gaussdb/v3/model/MysqlVolumeResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlVolumeResp::MysqlVolumeResp()
{
    size_ = 0;
    sizeIsSet_ = false;
}

MysqlVolumeResp::~MysqlVolumeResp() = default;

void MysqlVolumeResp::validate()
{
}

web::json::value MysqlVolumeResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool MysqlVolumeResp::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t MysqlVolumeResp::getSize() const
{
    return size_;
}

void MysqlVolumeResp::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool MysqlVolumeResp::sizeIsSet() const
{
    return sizeIsSet_;
}

void MysqlVolumeResp::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


