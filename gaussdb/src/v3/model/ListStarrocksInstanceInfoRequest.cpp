

#include "huaweicloud/gaussdb/v3/model/ListStarrocksInstanceInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListStarrocksInstanceInfoRequest::ListStarrocksInstanceInfoRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    starrocksInstanceId_ = "";
    starrocksInstanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListStarrocksInstanceInfoRequest::~ListStarrocksInstanceInfoRequest() = default;

void ListStarrocksInstanceInfoRequest::validate()
{
}

web::json::value ListStarrocksInstanceInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(starrocksInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("starrocks_instance_id")] = ModelBase::toJson(starrocksInstanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListStarrocksInstanceInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("starrocks_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("starrocks_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStarrocksInstanceId(refVal);
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


std::string ListStarrocksInstanceInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void ListStarrocksInstanceInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListStarrocksInstanceInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListStarrocksInstanceInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListStarrocksInstanceInfoRequest::getStarrocksInstanceId() const
{
    return starrocksInstanceId_;
}

void ListStarrocksInstanceInfoRequest::setStarrocksInstanceId(const std::string& value)
{
    starrocksInstanceId_ = value;
    starrocksInstanceIdIsSet_ = true;
}

bool ListStarrocksInstanceInfoRequest::starrocksInstanceIdIsSet() const
{
    return starrocksInstanceIdIsSet_;
}

void ListStarrocksInstanceInfoRequest::unsetstarrocksInstanceId()
{
    starrocksInstanceIdIsSet_ = false;
}

std::string ListStarrocksInstanceInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListStarrocksInstanceInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListStarrocksInstanceInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListStarrocksInstanceInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


