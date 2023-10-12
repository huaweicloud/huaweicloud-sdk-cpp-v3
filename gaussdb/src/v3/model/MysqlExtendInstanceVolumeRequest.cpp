

#include "huaweicloud/gaussdb/v3/model/MysqlExtendInstanceVolumeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlExtendInstanceVolumeRequest::MysqlExtendInstanceVolumeRequest()
{
    size_ = 0;
    sizeIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

MysqlExtendInstanceVolumeRequest::~MysqlExtendInstanceVolumeRequest() = default;

void MysqlExtendInstanceVolumeRequest::validate()
{
}

web::json::value MysqlExtendInstanceVolumeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool MysqlExtendInstanceVolumeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


int32_t MysqlExtendInstanceVolumeRequest::getSize() const
{
    return size_;
}

void MysqlExtendInstanceVolumeRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool MysqlExtendInstanceVolumeRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void MysqlExtendInstanceVolumeRequest::unsetsize()
{
    sizeIsSet_ = false;
}

std::string MysqlExtendInstanceVolumeRequest::getIsAutoPay() const
{
    return isAutoPay_;
}

void MysqlExtendInstanceVolumeRequest::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool MysqlExtendInstanceVolumeRequest::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void MysqlExtendInstanceVolumeRequest::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


