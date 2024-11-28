

#include "huaweicloud/gaussdbfornosql/v3/model/ShowRedisPitrInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowRedisPitrInfoResponse::ShowRedisPitrInfoResponse()
{
    storage_ = "";
    storageIsSet_ = false;
}

ShowRedisPitrInfoResponse::~ShowRedisPitrInfoResponse() = default;

void ShowRedisPitrInfoResponse::validate()
{
}

web::json::value ShowRedisPitrInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(storageIsSet_) {
        val[utility::conversions::to_string_t("storage")] = ModelBase::toJson(storage_);
    }

    return val;
}
bool ShowRedisPitrInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorage(refVal);
        }
    }
    return ok;
}


std::string ShowRedisPitrInfoResponse::getStorage() const
{
    return storage_;
}

void ShowRedisPitrInfoResponse::setStorage(const std::string& value)
{
    storage_ = value;
    storageIsSet_ = true;
}

bool ShowRedisPitrInfoResponse::storageIsSet() const
{
    return storageIsSet_;
}

void ShowRedisPitrInfoResponse::unsetstorage()
{
    storageIsSet_ = false;
}

}
}
}
}
}


