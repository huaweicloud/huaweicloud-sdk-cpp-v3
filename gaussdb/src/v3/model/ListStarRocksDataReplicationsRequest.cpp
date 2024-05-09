

#include "huaweicloud/gaussdb/v3/model/ListStarRocksDataReplicationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListStarRocksDataReplicationsRequest::ListStarRocksDataReplicationsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
}

ListStarRocksDataReplicationsRequest::~ListStarRocksDataReplicationsRequest() = default;

void ListStarRocksDataReplicationsRequest::validate()
{
}

web::json::value ListStarRocksDataReplicationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListStarRocksDataReplicationsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListStarRocksDataReplicationsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListStarRocksDataReplicationsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListStarRocksDataReplicationsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListStarRocksDataReplicationsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListStarRocksDataReplicationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListStarRocksDataReplicationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListStarRocksDataReplicationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListStarRocksDataReplicationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListStarRocksDataReplicationsRequest::getLimit() const
{
    return limit_;
}

void ListStarRocksDataReplicationsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListStarRocksDataReplicationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListStarRocksDataReplicationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListStarRocksDataReplicationsRequest::getOffset() const
{
    return offset_;
}

void ListStarRocksDataReplicationsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListStarRocksDataReplicationsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListStarRocksDataReplicationsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


