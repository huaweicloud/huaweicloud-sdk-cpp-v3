

#include "huaweicloud/vod/v1/model/ConfirmAssetUploadReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ConfirmAssetUploadReq::ConfirmAssetUploadReq()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ConfirmAssetUploadReq::~ConfirmAssetUploadReq() = default;

void ConfirmAssetUploadReq::validate()
{
}

web::json::value ConfirmAssetUploadReq::toJson() const
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
bool ConfirmAssetUploadReq::fromJson(const web::json::value& val)
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


std::string ConfirmAssetUploadReq::getAssetId() const
{
    return assetId_;
}

void ConfirmAssetUploadReq::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ConfirmAssetUploadReq::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ConfirmAssetUploadReq::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ConfirmAssetUploadReq::getStatus() const
{
    return status_;
}

void ConfirmAssetUploadReq::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ConfirmAssetUploadReq::statusIsSet() const
{
    return statusIsSet_;
}

void ConfirmAssetUploadReq::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


