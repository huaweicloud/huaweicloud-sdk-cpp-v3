

#include "huaweicloud/metastudio/v1/model/ListAssetSummarysReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListAssetSummarysReq::ListAssetSummarysReq()
{
    assetIdsIsSet_ = false;
}

ListAssetSummarysReq::~ListAssetSummarysReq() = default;

void ListAssetSummarysReq::validate()
{
}

web::json::value ListAssetSummarysReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdsIsSet_) {
        val[utility::conversions::to_string_t("asset_ids")] = ModelBase::toJson(assetIds_);
    }

    return val;
}
bool ListAssetSummarysReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::vector<std::string>& ListAssetSummarysReq::getAssetIds()
{
    return assetIds_;
}

void ListAssetSummarysReq::setAssetIds(const std::vector<std::string>& value)
{
    assetIds_ = value;
    assetIdsIsSet_ = true;
}

bool ListAssetSummarysReq::assetIdsIsSet() const
{
    return assetIdsIsSet_;
}

void ListAssetSummarysReq::unsetassetIds()
{
    assetIdsIsSet_ = false;
}

}
}
}
}
}


