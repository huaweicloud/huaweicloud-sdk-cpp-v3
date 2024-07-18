

#include "huaweicloud/vod/v1/model/DeleteTranscodeProductReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteTranscodeProductReq::DeleteTranscodeProductReq()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    deleteType_ = "";
    deleteTypeIsSet_ = false;
    deleteInfosIsSet_ = false;
}

DeleteTranscodeProductReq::~DeleteTranscodeProductReq() = default;

void DeleteTranscodeProductReq::validate()
{
}

web::json::value DeleteTranscodeProductReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(deleteTypeIsSet_) {
        val[utility::conversions::to_string_t("delete_type")] = ModelBase::toJson(deleteType_);
    }
    if(deleteInfosIsSet_) {
        val[utility::conversions::to_string_t("delete_infos")] = ModelBase::toJson(deleteInfos_);
    }

    return val;
}
bool DeleteTranscodeProductReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("delete_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ProductGroupInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteInfos(refVal);
        }
    }
    return ok;
}


std::string DeleteTranscodeProductReq::getAssetId() const
{
    return assetId_;
}

void DeleteTranscodeProductReq::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool DeleteTranscodeProductReq::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void DeleteTranscodeProductReq::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string DeleteTranscodeProductReq::getDeleteType() const
{
    return deleteType_;
}

void DeleteTranscodeProductReq::setDeleteType(const std::string& value)
{
    deleteType_ = value;
    deleteTypeIsSet_ = true;
}

bool DeleteTranscodeProductReq::deleteTypeIsSet() const
{
    return deleteTypeIsSet_;
}

void DeleteTranscodeProductReq::unsetdeleteType()
{
    deleteTypeIsSet_ = false;
}

std::vector<ProductGroupInfo>& DeleteTranscodeProductReq::getDeleteInfos()
{
    return deleteInfos_;
}

void DeleteTranscodeProductReq::setDeleteInfos(const std::vector<ProductGroupInfo>& value)
{
    deleteInfos_ = value;
    deleteInfosIsSet_ = true;
}

bool DeleteTranscodeProductReq::deleteInfosIsSet() const
{
    return deleteInfosIsSet_;
}

void DeleteTranscodeProductReq::unsetdeleteInfos()
{
    deleteInfosIsSet_ = false;
}

}
}
}
}
}


