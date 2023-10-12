

#include "huaweicloud/rds/v3/model/ListSlowLogStatisticsForLtsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSlowLogStatisticsForLtsRequest::ListSlowLogStatisticsForLtsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ListSlowLogStatisticsForLtsRequest::~ListSlowLogStatisticsForLtsRequest() = default;

void ListSlowLogStatisticsForLtsRequest::validate()
{
}

web::json::value ListSlowLogStatisticsForLtsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListSlowLogStatisticsForLtsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SlowLogStatisticsForLtsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListSlowLogStatisticsForLtsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSlowLogStatisticsForLtsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSlowLogStatisticsForLtsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSlowLogStatisticsForLtsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListSlowLogStatisticsForLtsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSlowLogStatisticsForLtsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSlowLogStatisticsForLtsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSlowLogStatisticsForLtsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SlowLogStatisticsForLtsRequest ListSlowLogStatisticsForLtsRequest::getBody() const
{
    return body_;
}

void ListSlowLogStatisticsForLtsRequest::setBody(const SlowLogStatisticsForLtsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSlowLogStatisticsForLtsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSlowLogStatisticsForLtsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


