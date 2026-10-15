

#include "huaweicloud/rds/v3/model/ShowVectorStorageConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowVectorStorageConfigResponse::ShowVectorStorageConfigResponse()
{
    vectorStorageSwitch_ = false;
    vectorStorageSwitchIsSet_ = false;
}

ShowVectorStorageConfigResponse::~ShowVectorStorageConfigResponse() = default;

void ShowVectorStorageConfigResponse::validate()
{
}

web::json::value ShowVectorStorageConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vectorStorageSwitchIsSet_) {
        val[utility::conversions::to_string_t("vector_storage_switch")] = ModelBase::toJson(vectorStorageSwitch_);
    }

    return val;
}
bool ShowVectorStorageConfigResponse::fromJson(const web::json::value& val)
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


bool ShowVectorStorageConfigResponse::isVectorStorageSwitch() const
{
    return vectorStorageSwitch_;
}

void ShowVectorStorageConfigResponse::setVectorStorageSwitch(bool value)
{
    vectorStorageSwitch_ = value;
    vectorStorageSwitchIsSet_ = true;
}

bool ShowVectorStorageConfigResponse::vectorStorageSwitchIsSet() const
{
    return vectorStorageSwitchIsSet_;
}

void ShowVectorStorageConfigResponse::unsetvectorStorageSwitch()
{
    vectorStorageSwitchIsSet_ = false;
}

}
}
}
}
}


