

#include "huaweicloud/lts/v2/model/DeleteLogGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteLogGroupRequest::DeleteLogGroupRequest()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

DeleteLogGroupRequest::~DeleteLogGroupRequest() = default;

void DeleteLogGroupRequest::validate()
{
}

web::json::value DeleteLogGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}

bool DeleteLogGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string DeleteLogGroupRequest::getLogGroupId() const
{
    return logGroupId_;
}

void DeleteLogGroupRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool DeleteLogGroupRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void DeleteLogGroupRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string DeleteLogGroupRequest::getContentType() const
{
    return contentType_;
}

void DeleteLogGroupRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteLogGroupRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteLogGroupRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


