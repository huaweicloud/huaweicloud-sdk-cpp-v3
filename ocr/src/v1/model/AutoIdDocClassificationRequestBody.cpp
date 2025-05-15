

#include "huaweicloud/ocr/v1/model/AutoIdDocClassificationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




AutoIdDocClassificationRequestBody::AutoIdDocClassificationRequestBody()
{
    data_ = "";
    dataIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    alarm_ = false;
    alarmIsSet_ = false;
}

AutoIdDocClassificationRequestBody::~AutoIdDocClassificationRequestBody() = default;

void AutoIdDocClassificationRequestBody::validate()
{
}

web::json::value AutoIdDocClassificationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(alarmIsSet_) {
        val[utility::conversions::to_string_t("alarm")] = ModelBase::toJson(alarm_);
    }

    return val;
}
bool AutoIdDocClassificationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarm(refVal);
        }
    }
    return ok;
}


std::string AutoIdDocClassificationRequestBody::getData() const
{
    return data_;
}

void AutoIdDocClassificationRequestBody::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AutoIdDocClassificationRequestBody::dataIsSet() const
{
    return dataIsSet_;
}

void AutoIdDocClassificationRequestBody::unsetdata()
{
    dataIsSet_ = false;
}

std::string AutoIdDocClassificationRequestBody::getUrl() const
{
    return url_;
}

void AutoIdDocClassificationRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool AutoIdDocClassificationRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void AutoIdDocClassificationRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool AutoIdDocClassificationRequestBody::isAlarm() const
{
    return alarm_;
}

void AutoIdDocClassificationRequestBody::setAlarm(bool value)
{
    alarm_ = value;
    alarmIsSet_ = true;
}

bool AutoIdDocClassificationRequestBody::alarmIsSet() const
{
    return alarmIsSet_;
}

void AutoIdDocClassificationRequestBody::unsetalarm()
{
    alarmIsSet_ = false;
}

}
}
}
}
}


