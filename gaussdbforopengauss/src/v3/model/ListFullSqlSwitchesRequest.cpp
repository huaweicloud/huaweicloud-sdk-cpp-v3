

#include "huaweicloud/gaussdbforopengauss/v3/model/ListFullSqlSwitchesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListFullSqlSwitchesRequest::ListFullSqlSwitchesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListFullSqlSwitchesRequest::~ListFullSqlSwitchesRequest() = default;

void ListFullSqlSwitchesRequest::validate()
{
}

web::json::value ListFullSqlSwitchesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListFullSqlSwitchesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListFullSqlSwitchesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListFullSqlSwitchesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListFullSqlSwitchesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListFullSqlSwitchesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListFullSqlSwitchesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListFullSqlSwitchesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListFullSqlSwitchesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListFullSqlSwitchesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListFullSqlSwitchesRequest::getLimit() const
{
    return limit_;
}

void ListFullSqlSwitchesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFullSqlSwitchesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFullSqlSwitchesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListFullSqlSwitchesRequest::getOffset() const
{
    return offset_;
}

void ListFullSqlSwitchesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListFullSqlSwitchesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListFullSqlSwitchesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


