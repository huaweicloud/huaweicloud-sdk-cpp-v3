

#include "huaweicloud/lts/v2/model/ResultsTopnBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ResultsTopnBody::ResultsTopnBody()
{
    indexTraffic_ = 0.0;
    indexTrafficIsSet_ = false;
    storage_ = 0.0;
    storageIsSet_ = false;
    writeTraffic_ = 0.0;
    writeTrafficIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
}

ResultsTopnBody::~ResultsTopnBody() = default;

void ResultsTopnBody::validate()
{
}

web::json::value ResultsTopnBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(indexTrafficIsSet_) {
        val[utility::conversions::to_string_t("index_traffic")] = ModelBase::toJson(indexTraffic_);
    }
    if(storageIsSet_) {
        val[utility::conversions::to_string_t("storage")] = ModelBase::toJson(storage_);
    }
    if(writeTrafficIsSet_) {
        val[utility::conversions::to_string_t("write_traffic")] = ModelBase::toJson(writeTraffic_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }

    return val;
}

bool ResultsTopnBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("index_traffic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index_traffic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndexTraffic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("write_traffic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("write_traffic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWriteTraffic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    return ok;
}

double ResultsTopnBody::getIndexTraffic() const
{
    return indexTraffic_;
}

void ResultsTopnBody::setIndexTraffic(double value)
{
    indexTraffic_ = value;
    indexTrafficIsSet_ = true;
}

bool ResultsTopnBody::indexTrafficIsSet() const
{
    return indexTrafficIsSet_;
}

void ResultsTopnBody::unsetindexTraffic()
{
    indexTrafficIsSet_ = false;
}

double ResultsTopnBody::getStorage() const
{
    return storage_;
}

void ResultsTopnBody::setStorage(double value)
{
    storage_ = value;
    storageIsSet_ = true;
}

bool ResultsTopnBody::storageIsSet() const
{
    return storageIsSet_;
}

void ResultsTopnBody::unsetstorage()
{
    storageIsSet_ = false;
}

double ResultsTopnBody::getWriteTraffic() const
{
    return writeTraffic_;
}

void ResultsTopnBody::setWriteTraffic(double value)
{
    writeTraffic_ = value;
    writeTrafficIsSet_ = true;
}

bool ResultsTopnBody::writeTrafficIsSet() const
{
    return writeTrafficIsSet_;
}

void ResultsTopnBody::unsetwriteTraffic()
{
    writeTrafficIsSet_ = false;
}

std::string ResultsTopnBody::getLogGroupId() const
{
    return logGroupId_;
}

void ResultsTopnBody::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ResultsTopnBody::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ResultsTopnBody::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string ResultsTopnBody::getLogGroupName() const
{
    return logGroupName_;
}

void ResultsTopnBody::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool ResultsTopnBody::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void ResultsTopnBody::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string ResultsTopnBody::getLogStreamId() const
{
    return logStreamId_;
}

void ResultsTopnBody::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ResultsTopnBody::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ResultsTopnBody::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string ResultsTopnBody::getLogStreamName() const
{
    return logStreamName_;
}

void ResultsTopnBody::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool ResultsTopnBody::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void ResultsTopnBody::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

}
}
}
}
}


