

#include "huaweicloud/metastudio/v1/model/TtscGroupAssetsConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TtscGroupAssetsConfig::TtscGroupAssetsConfig()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    assetIdsIsSet_ = false;
}

TtscGroupAssetsConfig::~TtscGroupAssetsConfig() = default;

void TtscGroupAssetsConfig::validate()
{
}

web::json::value TtscGroupAssetsConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(assetIdsIsSet_) {
        val[utility::conversions::to_string_t("asset_ids")] = ModelBase::toJson(assetIds_);
    }

    return val;
}
bool TtscGroupAssetsConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
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


std::string TtscGroupAssetsConfig::getGroupId() const
{
    return groupId_;
}

void TtscGroupAssetsConfig::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool TtscGroupAssetsConfig::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void TtscGroupAssetsConfig::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string TtscGroupAssetsConfig::getGroupName() const
{
    return groupName_;
}

void TtscGroupAssetsConfig::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool TtscGroupAssetsConfig::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void TtscGroupAssetsConfig::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::vector<std::string>& TtscGroupAssetsConfig::getAssetIds()
{
    return assetIds_;
}

void TtscGroupAssetsConfig::setAssetIds(const std::vector<std::string>& value)
{
    assetIds_ = value;
    assetIdsIsSet_ = true;
}

bool TtscGroupAssetsConfig::assetIdsIsSet() const
{
    return assetIdsIsSet_;
}

void TtscGroupAssetsConfig::unsetassetIds()
{
    assetIdsIsSet_ = false;
}

}
}
}
}
}


