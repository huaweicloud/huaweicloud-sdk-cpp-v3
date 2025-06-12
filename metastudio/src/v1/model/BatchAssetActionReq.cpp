

#include "huaweicloud/metastudio/v1/model/BatchAssetActionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BatchAssetActionReq::BatchAssetActionReq()
{
    action_ = "";
    actionIsSet_ = false;
    assetIdsIsSet_ = false;
    params_ = "";
    paramsIsSet_ = false;
}

BatchAssetActionReq::~BatchAssetActionReq() = default;

void BatchAssetActionReq::validate()
{
}

web::json::value BatchAssetActionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(assetIdsIsSet_) {
        val[utility::conversions::to_string_t("asset_ids")] = ModelBase::toJson(assetIds_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool BatchAssetActionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string BatchAssetActionReq::getAction() const
{
    return action_;
}

void BatchAssetActionReq::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchAssetActionReq::actionIsSet() const
{
    return actionIsSet_;
}

void BatchAssetActionReq::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<std::string>& BatchAssetActionReq::getAssetIds()
{
    return assetIds_;
}

void BatchAssetActionReq::setAssetIds(const std::vector<std::string>& value)
{
    assetIds_ = value;
    assetIdsIsSet_ = true;
}

bool BatchAssetActionReq::assetIdsIsSet() const
{
    return assetIdsIsSet_;
}

void BatchAssetActionReq::unsetassetIds()
{
    assetIdsIsSet_ = false;
}

std::string BatchAssetActionReq::getParams() const
{
    return params_;
}

void BatchAssetActionReq::setParams(const std::string& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool BatchAssetActionReq::paramsIsSet() const
{
    return paramsIsSet_;
}

void BatchAssetActionReq::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


