

#include "huaweicloud/gaussdb/v3/model/SyncStarRocksUsersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SyncStarRocksUsersResponse::SyncStarRocksUsersResponse()
{
    success_ = "";
    successIsSet_ = false;
}

SyncStarRocksUsersResponse::~SyncStarRocksUsersResponse() = default;

void SyncStarRocksUsersResponse::validate()
{
}

web::json::value SyncStarRocksUsersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool SyncStarRocksUsersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    return ok;
}


std::string SyncStarRocksUsersResponse::getSuccess() const
{
    return success_;
}

void SyncStarRocksUsersResponse::setSuccess(const std::string& value)
{
    success_ = value;
    successIsSet_ = true;
}

bool SyncStarRocksUsersResponse::successIsSet() const
{
    return successIsSet_;
}

void SyncStarRocksUsersResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


