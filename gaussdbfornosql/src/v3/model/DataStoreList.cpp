

#include "huaweicloud/gaussdbfornosql/v3/model/DataStoreList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DataStoreList::DataStoreList()
{
    datastoreName_ = "";
    datastoreNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

DataStoreList::~DataStoreList() = default;

void DataStoreList::validate()
{
}

web::json::value DataStoreList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datastoreNameIsSet_) {
        val[utility::conversions::to_string_t("datastore_name")] = ModelBase::toJson(datastoreName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}

bool DataStoreList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("datastore_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}

std::string DataStoreList::getDatastoreName() const
{
    return datastoreName_;
}

void DataStoreList::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool DataStoreList::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void DataStoreList::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string DataStoreList::getVersion() const
{
    return version_;
}

void DataStoreList::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DataStoreList::versionIsSet() const
{
    return versionIsSet_;
}

void DataStoreList::unsetversion()
{
    versionIsSet_ = false;
}

std::string DataStoreList::getMode() const
{
    return mode_;
}

void DataStoreList::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool DataStoreList::modeIsSet() const
{
    return modeIsSet_;
}

void DataStoreList::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


