

#include "huaweicloud/rds/v3/model/UpdateVectorStorageConfigReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateVectorStorageConfigReq::UpdateVectorStorageConfigReq()
{
    vectorStorageSwitch_ = false;
    vectorStorageSwitchIsSet_ = false;
}

UpdateVectorStorageConfigReq::~UpdateVectorStorageConfigReq() = default;

void UpdateVectorStorageConfigReq::validate()
{
}

web::json::value UpdateVectorStorageConfigReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vectorStorageSwitchIsSet_) {
        val[utility::conversions::to_string_t("vector_storage_switch")] = ModelBase::toJson(vectorStorageSwitch_);
    }

    return val;
}
bool UpdateVectorStorageConfigReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vector_storage_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vector_storage_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVectorStorageSwitch(refVal);
        }
    }
    return ok;
}


bool UpdateVectorStorageConfigReq::isVectorStorageSwitch() const
{
    return vectorStorageSwitch_;
}

void UpdateVectorStorageConfigReq::setVectorStorageSwitch(bool value)
{
    vectorStorageSwitch_ = value;
    vectorStorageSwitchIsSet_ = true;
}

bool UpdateVectorStorageConfigReq::vectorStorageSwitchIsSet() const
{
    return vectorStorageSwitchIsSet_;
}

void UpdateVectorStorageConfigReq::unsetvectorStorageSwitch()
{
    vectorStorageSwitchIsSet_ = false;
}

}
}
}
}
}


