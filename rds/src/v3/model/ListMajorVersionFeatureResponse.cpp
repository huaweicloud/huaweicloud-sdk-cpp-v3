

#include "huaweicloud/rds/v3/model/ListMajorVersionFeatureResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListMajorVersionFeatureResponse::ListMajorVersionFeatureResponse()
{
    version_ = "";
    versionIsSet_ = false;
    supportUpgradeVersionIsSet_ = false;
    supportRecoverVersionIsSet_ = false;
    supportFileStream_ = false;
    supportFileStreamIsSet_ = false;
    supportTde_ = false;
    supportTdeIsSet_ = false;
    supportAlwaysOn_ = false;
    supportAlwaysOnIsSet_ = false;
    supportReadOnly_ = false;
    supportReadOnlyIsSet_ = false;
}

ListMajorVersionFeatureResponse::~ListMajorVersionFeatureResponse() = default;

void ListMajorVersionFeatureResponse::validate()
{
}

web::json::value ListMajorVersionFeatureResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(supportUpgradeVersionIsSet_) {
        val[utility::conversions::to_string_t("support_upgrade_version")] = ModelBase::toJson(supportUpgradeVersion_);
    }
    if(supportRecoverVersionIsSet_) {
        val[utility::conversions::to_string_t("support_recover_version")] = ModelBase::toJson(supportRecoverVersion_);
    }
    if(supportFileStreamIsSet_) {
        val[utility::conversions::to_string_t("support_file_stream")] = ModelBase::toJson(supportFileStream_);
    }
    if(supportTdeIsSet_) {
        val[utility::conversions::to_string_t("support_tde")] = ModelBase::toJson(supportTde_);
    }
    if(supportAlwaysOnIsSet_) {
        val[utility::conversions::to_string_t("support_always_on")] = ModelBase::toJson(supportAlwaysOn_);
    }
    if(supportReadOnlyIsSet_) {
        val[utility::conversions::to_string_t("support_read_only")] = ModelBase::toJson(supportReadOnly_);
    }

    return val;
}
bool ListMajorVersionFeatureResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_upgrade_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_upgrade_version"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportUpgradeVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_recover_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_recover_version"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportRecoverVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_file_stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_file_stream"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportFileStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_tde"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_tde"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportTde(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_always_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_always_on"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportAlwaysOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_read_only"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_read_only"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportReadOnly(refVal);
        }
    }
    return ok;
}


std::string ListMajorVersionFeatureResponse::getVersion() const
{
    return version_;
}

void ListMajorVersionFeatureResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListMajorVersionFeatureResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ListMajorVersionFeatureResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::vector<std::string>& ListMajorVersionFeatureResponse::getSupportUpgradeVersion()
{
    return supportUpgradeVersion_;
}

void ListMajorVersionFeatureResponse::setSupportUpgradeVersion(const std::vector<std::string>& value)
{
    supportUpgradeVersion_ = value;
    supportUpgradeVersionIsSet_ = true;
}

bool ListMajorVersionFeatureResponse::supportUpgradeVersionIsSet() const
{
    return supportUpgradeVersionIsSet_;
}

void ListMajorVersionFeatureResponse::unsetsupportUpgradeVersion()
{
    supportUpgradeVersionIsSet_ = false;
}

std::vector<std::string>& ListMajorVersionFeatureResponse::getSupportRecoverVersion()
{
    return supportRecoverVersion_;
}

void ListMajorVersionFeatureResponse::setSupportRecoverVersion(const std::vector<std::string>& value)
{
    supportRecoverVersion_ = value;
    supportRecoverVersionIsSet_ = true;
}

bool ListMajorVersionFeatureResponse::supportRecoverVersionIsSet() const
{
    return supportRecoverVersionIsSet_;
}

void ListMajorVersionFeatureResponse::unsetsupportRecoverVersion()
{
    supportRecoverVersionIsSet_ = false;
}

bool ListMajorVersionFeatureResponse::isSupportFileStream() const
{
    return supportFileStream_;
}

void ListMajorVersionFeatureResponse::setSupportFileStream(bool value)
{
    supportFileStream_ = value;
    supportFileStreamIsSet_ = true;
}

bool ListMajorVersionFeatureResponse::supportFileStreamIsSet() const
{
    return supportFileStreamIsSet_;
}

void ListMajorVersionFeatureResponse::unsetsupportFileStream()
{
    supportFileStreamIsSet_ = false;
}

bool ListMajorVersionFeatureResponse::isSupportTde() const
{
    return supportTde_;
}

void ListMajorVersionFeatureResponse::setSupportTde(bool value)
{
    supportTde_ = value;
    supportTdeIsSet_ = true;
}

bool ListMajorVersionFeatureResponse::supportTdeIsSet() const
{
    return supportTdeIsSet_;
}

void ListMajorVersionFeatureResponse::unsetsupportTde()
{
    supportTdeIsSet_ = false;
}

bool ListMajorVersionFeatureResponse::isSupportAlwaysOn() const
{
    return supportAlwaysOn_;
}

void ListMajorVersionFeatureResponse::setSupportAlwaysOn(bool value)
{
    supportAlwaysOn_ = value;
    supportAlwaysOnIsSet_ = true;
}

bool ListMajorVersionFeatureResponse::supportAlwaysOnIsSet() const
{
    return supportAlwaysOnIsSet_;
}

void ListMajorVersionFeatureResponse::unsetsupportAlwaysOn()
{
    supportAlwaysOnIsSet_ = false;
}

bool ListMajorVersionFeatureResponse::isSupportReadOnly() const
{
    return supportReadOnly_;
}

void ListMajorVersionFeatureResponse::setSupportReadOnly(bool value)
{
    supportReadOnly_ = value;
    supportReadOnlyIsSet_ = true;
}

bool ListMajorVersionFeatureResponse::supportReadOnlyIsSet() const
{
    return supportReadOnlyIsSet_;
}

void ListMajorVersionFeatureResponse::unsetsupportReadOnly()
{
    supportReadOnlyIsSet_ = false;
}

}
}
}
}
}


