

#include "huaweicloud/lts/v2/model/ShowStructTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowStructTemplateRequest::ShowStructTemplateRequest()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
}

ShowStructTemplateRequest::~ShowStructTemplateRequest() = default;

void ShowStructTemplateRequest::validate()
{
}

web::json::value ShowStructTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("logGroupId")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("logStreamId")] = ModelBase::toJson(logStreamId_);
    }

    return val;
}

bool ShowStructTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("logGroupId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logGroupId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logStreamId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logStreamId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    return ok;
}

std::string ShowStructTemplateRequest::getLogGroupId() const
{
    return logGroupId_;
}

void ShowStructTemplateRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ShowStructTemplateRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ShowStructTemplateRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string ShowStructTemplateRequest::getLogStreamId() const
{
    return logStreamId_;
}

void ShowStructTemplateRequest::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ShowStructTemplateRequest::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ShowStructTemplateRequest::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

}
}
}
}
}


