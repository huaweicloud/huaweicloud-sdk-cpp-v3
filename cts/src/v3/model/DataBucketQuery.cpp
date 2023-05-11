

#include "huaweicloud/cts/v3/model/DataBucketQuery.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




DataBucketQuery::DataBucketQuery()
{
    dataBucketName_ = "";
    dataBucketNameIsSet_ = false;
    searchEnabled_ = false;
    searchEnabledIsSet_ = false;
    dataEventIsSet_ = false;
}

DataBucketQuery::~DataBucketQuery() = default;

void DataBucketQuery::validate()
{
}

web::json::value DataBucketQuery::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataBucketNameIsSet_) {
        val[utility::conversions::to_string_t("data_bucket_name")] = ModelBase::toJson(dataBucketName_);
    }
    if(searchEnabledIsSet_) {
        val[utility::conversions::to_string_t("search_enabled")] = ModelBase::toJson(searchEnabled_);
    }
    if(dataEventIsSet_) {
        val[utility::conversions::to_string_t("data_event")] = ModelBase::toJson(dataEvent_);
    }

    return val;
}

bool DataBucketQuery::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_event"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_event"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataEvent(refVal);
        }
    }
    return ok;
}


std::string DataBucketQuery::getDataBucketName() const
{
    return dataBucketName_;
}

void DataBucketQuery::setDataBucketName(const std::string& value)
{
    dataBucketName_ = value;
    dataBucketNameIsSet_ = true;
}

bool DataBucketQuery::dataBucketNameIsSet() const
{
    return dataBucketNameIsSet_;
}

void DataBucketQuery::unsetdataBucketName()
{
    dataBucketNameIsSet_ = false;
}

bool DataBucketQuery::isSearchEnabled() const
{
    return searchEnabled_;
}

void DataBucketQuery::setSearchEnabled(bool value)
{
    searchEnabled_ = value;
    searchEnabledIsSet_ = true;
}

bool DataBucketQuery::searchEnabledIsSet() const
{
    return searchEnabledIsSet_;
}

void DataBucketQuery::unsetsearchEnabled()
{
    searchEnabledIsSet_ = false;
}

std::vector<std::string>& DataBucketQuery::getDataEvent()
{
    return dataEvent_;
}

void DataBucketQuery::setDataEvent(const std::vector<std::string>& value)
{
    dataEvent_ = value;
    dataEventIsSet_ = true;
}

bool DataBucketQuery::dataEventIsSet() const
{
    return dataEventIsSet_;
}

void DataBucketQuery::unsetdataEvent()
{
    dataEventIsSet_ = false;
}

}
}
}
}
}


