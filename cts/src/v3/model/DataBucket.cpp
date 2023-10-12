

#include "huaweicloud/cts/v3/model/DataBucket.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




DataBucket::DataBucket()
{
    dataBucketName_ = "";
    dataBucketNameIsSet_ = false;
    dataEventIsSet_ = false;
}

DataBucket::~DataBucket() = default;

void DataBucket::validate()
{
}

web::json::value DataBucket::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataBucketNameIsSet_) {
        val[utility::conversions::to_string_t("data_bucket_name")] = ModelBase::toJson(dataBucketName_);
    }
    if(dataEventIsSet_) {
        val[utility::conversions::to_string_t("data_event")] = ModelBase::toJson(dataEvent_);
    }

    return val;
}
bool DataBucket::fromJson(const web::json::value& val)
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


std::string DataBucket::getDataBucketName() const
{
    return dataBucketName_;
}

void DataBucket::setDataBucketName(const std::string& value)
{
    dataBucketName_ = value;
    dataBucketNameIsSet_ = true;
}

bool DataBucket::dataBucketNameIsSet() const
{
    return dataBucketNameIsSet_;
}

void DataBucket::unsetdataBucketName()
{
    dataBucketNameIsSet_ = false;
}

std::vector<std::string>& DataBucket::getDataEvent()
{
    return dataEvent_;
}

void DataBucket::setDataEvent(const std::vector<std::string>& value)
{
    dataEvent_ = value;
    dataEventIsSet_ = true;
}

bool DataBucket::dataEventIsSet() const
{
    return dataEventIsSet_;
}

void DataBucket::unsetdataEvent()
{
    dataEventIsSet_ = false;
}

}
}
}
}
}


