

#include "huaweicloud/modelarts/v1/model/UpdateAssetReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateAssetReq::UpdateAssetReq()
{
    assetName_ = "";
    assetNameIsSet_ = false;
    assetDesc_ = "";
    assetDescIsSet_ = false;
    assetGroupDesc_ = "";
    assetGroupDescIsSet_ = false;
    assetSeries_ = "";
    assetSeriesIsSet_ = false;
    assetCapabilitiesIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    isDeleted_ = false;
    isDeletedIsSet_ = false;
    tagsIsSet_ = false;
    propertiesIsSet_ = false;
}

UpdateAssetReq::~UpdateAssetReq() = default;

void UpdateAssetReq::validate()
{
}

web::json::value UpdateAssetReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(assetDescIsSet_) {
        val[utility::conversions::to_string_t("asset_desc")] = ModelBase::toJson(assetDesc_);
    }
    if(assetGroupDescIsSet_) {
        val[utility::conversions::to_string_t("asset_group_desc")] = ModelBase::toJson(assetGroupDesc_);
    }
    if(assetSeriesIsSet_) {
        val[utility::conversions::to_string_t("asset_series")] = ModelBase::toJson(assetSeries_);
    }
    if(assetCapabilitiesIsSet_) {
        val[utility::conversions::to_string_t("asset_capabilities")] = ModelBase::toJson(assetCapabilities_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(isDeletedIsSet_) {
        val[utility::conversions::to_string_t("is_deleted")] = ModelBase::toJson(isDeleted_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }

    return val;
}
bool UpdateAssetReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_group_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_group_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetGroupDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_series"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_series"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetSeries(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_capabilities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_capabilities"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetCapabilities(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            Properties refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    return ok;
}


std::string UpdateAssetReq::getAssetName() const
{
    return assetName_;
}

void UpdateAssetReq::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool UpdateAssetReq::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void UpdateAssetReq::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string UpdateAssetReq::getAssetDesc() const
{
    return assetDesc_;
}

void UpdateAssetReq::setAssetDesc(const std::string& value)
{
    assetDesc_ = value;
    assetDescIsSet_ = true;
}

bool UpdateAssetReq::assetDescIsSet() const
{
    return assetDescIsSet_;
}

void UpdateAssetReq::unsetassetDesc()
{
    assetDescIsSet_ = false;
}

std::string UpdateAssetReq::getAssetGroupDesc() const
{
    return assetGroupDesc_;
}

void UpdateAssetReq::setAssetGroupDesc(const std::string& value)
{
    assetGroupDesc_ = value;
    assetGroupDescIsSet_ = true;
}

bool UpdateAssetReq::assetGroupDescIsSet() const
{
    return assetGroupDescIsSet_;
}

void UpdateAssetReq::unsetassetGroupDesc()
{
    assetGroupDescIsSet_ = false;
}

std::string UpdateAssetReq::getAssetSeries() const
{
    return assetSeries_;
}

void UpdateAssetReq::setAssetSeries(const std::string& value)
{
    assetSeries_ = value;
    assetSeriesIsSet_ = true;
}

bool UpdateAssetReq::assetSeriesIsSet() const
{
    return assetSeriesIsSet_;
}

void UpdateAssetReq::unsetassetSeries()
{
    assetSeriesIsSet_ = false;
}

std::vector<std::string>& UpdateAssetReq::getAssetCapabilities()
{
    return assetCapabilities_;
}

void UpdateAssetReq::setAssetCapabilities(const std::vector<std::string>& value)
{
    assetCapabilities_ = value;
    assetCapabilitiesIsSet_ = true;
}

bool UpdateAssetReq::assetCapabilitiesIsSet() const
{
    return assetCapabilitiesIsSet_;
}

void UpdateAssetReq::unsetassetCapabilities()
{
    assetCapabilitiesIsSet_ = false;
}

std::string UpdateAssetReq::getStatus() const
{
    return status_;
}

void UpdateAssetReq::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAssetReq::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAssetReq::unsetstatus()
{
    statusIsSet_ = false;
}

bool UpdateAssetReq::isEnabled() const
{
    return enabled_;
}

void UpdateAssetReq::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool UpdateAssetReq::enabledIsSet() const
{
    return enabledIsSet_;
}

void UpdateAssetReq::unsetenabled()
{
    enabledIsSet_ = false;
}

bool UpdateAssetReq::isIsDeleted() const
{
    return isDeleted_;
}

void UpdateAssetReq::setIsDeleted(bool value)
{
    isDeleted_ = value;
    isDeletedIsSet_ = true;
}

bool UpdateAssetReq::isDeletedIsSet() const
{
    return isDeletedIsSet_;
}

void UpdateAssetReq::unsetisDeleted()
{
    isDeletedIsSet_ = false;
}

std::map<std::string, std::vector<std::string>>& UpdateAssetReq::getTags()
{
    return tags_;
}

void UpdateAssetReq::setTags(const std::map<std::string, std::vector<std::string>>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateAssetReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateAssetReq::unsettags()
{
    tagsIsSet_ = false;
}

Properties UpdateAssetReq::getProperties() const
{
    return properties_;
}

void UpdateAssetReq::setProperties(const Properties& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool UpdateAssetReq::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void UpdateAssetReq::unsetproperties()
{
    propertiesIsSet_ = false;
}

}
}
}
}
}


