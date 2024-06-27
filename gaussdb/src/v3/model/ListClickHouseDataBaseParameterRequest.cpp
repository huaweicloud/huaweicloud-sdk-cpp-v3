

#include "huaweicloud/gaussdb/v3/model/ListClickHouseDataBaseParameterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListClickHouseDataBaseParameterRequest::ListClickHouseDataBaseParameterRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListClickHouseDataBaseParameterRequest::~ListClickHouseDataBaseParameterRequest() = default;

void ListClickHouseDataBaseParameterRequest::validate()
{
}

web::json::value ListClickHouseDataBaseParameterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListClickHouseDataBaseParameterRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListClickHouseDataBaseParameterRequest::getInstanceId() const
{
    return instanceId_;
}

void ListClickHouseDataBaseParameterRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListClickHouseDataBaseParameterRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListClickHouseDataBaseParameterRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListClickHouseDataBaseParameterRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListClickHouseDataBaseParameterRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListClickHouseDataBaseParameterRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListClickHouseDataBaseParameterRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


