

#include "huaweicloud/rds/v3/model/SearchQueryScaleFlavorsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SearchQueryScaleFlavorsRequest::SearchQueryScaleFlavorsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

SearchQueryScaleFlavorsRequest::~SearchQueryScaleFlavorsRequest() = default;

void SearchQueryScaleFlavorsRequest::validate()
{
}

web::json::value SearchQueryScaleFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}

bool SearchQueryScaleFlavorsRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string SearchQueryScaleFlavorsRequest::getXLanguage() const
{
    return xLanguage_;
}

void SearchQueryScaleFlavorsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SearchQueryScaleFlavorsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SearchQueryScaleFlavorsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SearchQueryScaleFlavorsRequest::getInstanceId() const
{
    return instanceId_;
}

void SearchQueryScaleFlavorsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SearchQueryScaleFlavorsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SearchQueryScaleFlavorsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


