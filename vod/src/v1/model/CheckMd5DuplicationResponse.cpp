

#include "huaweicloud/vod/v1/model/CheckMd5DuplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CheckMd5DuplicationResponse::CheckMd5DuplicationResponse()
{
    isDuplicated_ = 0;
    isDuplicatedIsSet_ = false;
    assetIdsIsSet_ = false;
}

CheckMd5DuplicationResponse::~CheckMd5DuplicationResponse() = default;

void CheckMd5DuplicationResponse::validate()
{
}

web::json::value CheckMd5DuplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isDuplicatedIsSet_) {
        val[utility::conversions::to_string_t("is_duplicated")] = ModelBase::toJson(isDuplicated_);
    }
    if(assetIdsIsSet_) {
        val[utility::conversions::to_string_t("asset_ids")] = ModelBase::toJson(assetIds_);
    }

    return val;
}
bool CheckMd5DuplicationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_duplicated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_duplicated"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDuplicated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetIds(refVal);
        }
    }
    return ok;
}


int32_t CheckMd5DuplicationResponse::getIsDuplicated() const
{
    return isDuplicated_;
}

void CheckMd5DuplicationResponse::setIsDuplicated(int32_t value)
{
    isDuplicated_ = value;
    isDuplicatedIsSet_ = true;
}

bool CheckMd5DuplicationResponse::isDuplicatedIsSet() const
{
    return isDuplicatedIsSet_;
}

void CheckMd5DuplicationResponse::unsetisDuplicated()
{
    isDuplicatedIsSet_ = false;
}

std::vector<std::string>& CheckMd5DuplicationResponse::getAssetIds()
{
    return assetIds_;
}

void CheckMd5DuplicationResponse::setAssetIds(const std::vector<std::string>& value)
{
    assetIds_ = value;
    assetIdsIsSet_ = true;
}

bool CheckMd5DuplicationResponse::assetIdsIsSet() const
{
    return assetIdsIsSet_;
}

void CheckMd5DuplicationResponse::unsetassetIds()
{
    assetIdsIsSet_ = false;
}

}
}
}
}
}


