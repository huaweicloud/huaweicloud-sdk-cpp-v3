

#include "huaweicloud/vod/v1/model/DeleteResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteResult::DeleteResult()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DeleteResult::~DeleteResult() = default;

void DeleteResult::validate()
{
}

web::json::value DeleteResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool DeleteResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string DeleteResult::getAssetId() const
{
    return assetId_;
}

void DeleteResult::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool DeleteResult::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void DeleteResult::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string DeleteResult::getStatus() const
{
    return status_;
}

void DeleteResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteResult::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteResult::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


