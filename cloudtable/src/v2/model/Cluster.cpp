

#include "huaweicloud/cloudtable/v2/model/Cluster.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




Cluster::Cluster()
{
    authMode_ = "";
    authModeIsSet_ = false;
    enableLemon_ = false;
    enableLemonIsSet_ = false;
    enableOpenTSDB_ = false;
    enableOpenTSDBIsSet_ = false;
    instanceIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    storageSize_ = 0;
    storageSizeIsSet_ = false;
    storageType_ = "";
    storageTypeIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    datastoreIsSet_ = false;
}

Cluster::~Cluster() = default;

void Cluster::validate()
{
}

web::json::value Cluster::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authModeIsSet_) {
        val[utility::conversions::to_string_t("auth_mode")] = ModelBase::toJson(authMode_);
    }
    if(enableLemonIsSet_) {
        val[utility::conversions::to_string_t("enable_lemon")] = ModelBase::toJson(enableLemon_);
    }
    if(enableOpenTSDBIsSet_) {
        val[utility::conversions::to_string_t("enable_openTSDB")] = ModelBase::toJson(enableOpenTSDB_);
    }
    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(storageSizeIsSet_) {
        val[utility::conversions::to_string_t("storage_size")] = ModelBase::toJson(storageSize_);
    }
    if(storageTypeIsSet_) {
        val[utility::conversions::to_string_t("storage_type")] = ModelBase::toJson(storageType_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }

    return val;
}
bool Cluster::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auth_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_lemon"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_lemon"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableLemon(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_openTSDB"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_openTSDB"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableOpenTSDB(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            Instance refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            Datastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    return ok;
}


std::string Cluster::getAuthMode() const
{
    return authMode_;
}

void Cluster::setAuthMode(const std::string& value)
{
    authMode_ = value;
    authModeIsSet_ = true;
}

bool Cluster::authModeIsSet() const
{
    return authModeIsSet_;
}

void Cluster::unsetauthMode()
{
    authModeIsSet_ = false;
}

bool Cluster::isEnableLemon() const
{
    return enableLemon_;
}

void Cluster::setEnableLemon(bool value)
{
    enableLemon_ = value;
    enableLemonIsSet_ = true;
}

bool Cluster::enableLemonIsSet() const
{
    return enableLemonIsSet_;
}

void Cluster::unsetenableLemon()
{
    enableLemonIsSet_ = false;
}

bool Cluster::isEnableOpenTSDB() const
{
    return enableOpenTSDB_;
}

void Cluster::setEnableOpenTSDB(bool value)
{
    enableOpenTSDB_ = value;
    enableOpenTSDBIsSet_ = true;
}

bool Cluster::enableOpenTSDBIsSet() const
{
    return enableOpenTSDBIsSet_;
}

void Cluster::unsetenableOpenTSDB()
{
    enableOpenTSDBIsSet_ = false;
}

Instance Cluster::getInstance() const
{
    return instance_;
}

void Cluster::setInstance(const Instance& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool Cluster::instanceIsSet() const
{
    return instanceIsSet_;
}

void Cluster::unsetinstance()
{
    instanceIsSet_ = false;
}

std::string Cluster::getName() const
{
    return name_;
}

void Cluster::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Cluster::nameIsSet() const
{
    return nameIsSet_;
}

void Cluster::unsetname()
{
    nameIsSet_ = false;
}

int32_t Cluster::getStorageSize() const
{
    return storageSize_;
}

void Cluster::setStorageSize(int32_t value)
{
    storageSize_ = value;
    storageSizeIsSet_ = true;
}

bool Cluster::storageSizeIsSet() const
{
    return storageSizeIsSet_;
}

void Cluster::unsetstorageSize()
{
    storageSizeIsSet_ = false;
}

std::string Cluster::getStorageType() const
{
    return storageType_;
}

void Cluster::setStorageType(const std::string& value)
{
    storageType_ = value;
    storageTypeIsSet_ = true;
}

bool Cluster::storageTypeIsSet() const
{
    return storageTypeIsSet_;
}

void Cluster::unsetstorageType()
{
    storageTypeIsSet_ = false;
}

std::string Cluster::getVpcId() const
{
    return vpcId_;
}

void Cluster::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool Cluster::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void Cluster::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

Datastore Cluster::getDatastore() const
{
    return datastore_;
}

void Cluster::setDatastore(const Datastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool Cluster::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void Cluster::unsetdatastore()
{
    datastoreIsSet_ = false;
}

}
}
}
}
}


