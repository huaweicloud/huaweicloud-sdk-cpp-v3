

#include "huaweicloud/gaussdb/v3/model/ListClickHouseInstanceNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListClickHouseInstanceNodeRequest::ListClickHouseInstanceNodeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListClickHouseInstanceNodeRequest::~ListClickHouseInstanceNodeRequest() = default;

void ListClickHouseInstanceNodeRequest::validate()
{
}

web::json::value ListClickHouseInstanceNodeRequest::toJson() const
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
bool ListClickHouseInstanceNodeRequest::fromJson(const web::json::value& val)
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


std::string ListClickHouseInstanceNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void ListClickHouseInstanceNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListClickHouseInstanceNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListClickHouseInstanceNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListClickHouseInstanceNodeRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListClickHouseInstanceNodeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListClickHouseInstanceNodeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListClickHouseInstanceNodeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


