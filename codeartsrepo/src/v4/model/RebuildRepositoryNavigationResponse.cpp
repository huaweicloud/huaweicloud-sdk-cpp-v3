

#include "huaweicloud/codeartsrepo/v4/model/RebuildRepositoryNavigationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RebuildRepositoryNavigationResponse::RebuildRepositoryNavigationResponse()
{
    result_ = "";
    resultIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    duration_ = "";
    durationIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
}

RebuildRepositoryNavigationResponse::~RebuildRepositoryNavigationResponse() = default;

void RebuildRepositoryNavigationResponse::validate()
{
}

web::json::value RebuildRepositoryNavigationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool RebuildRepositoryNavigationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string RebuildRepositoryNavigationResponse::getResult() const
{
    return result_;
}

void RebuildRepositoryNavigationResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RebuildRepositoryNavigationResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RebuildRepositoryNavigationResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RebuildRepositoryNavigationResponse::getMessage() const
{
    return message_;
}

void RebuildRepositoryNavigationResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool RebuildRepositoryNavigationResponse::messageIsSet() const
{
    return messageIsSet_;
}

void RebuildRepositoryNavigationResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string RebuildRepositoryNavigationResponse::getDuration() const
{
    return duration_;
}

void RebuildRepositoryNavigationResponse::setDuration(const std::string& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool RebuildRepositoryNavigationResponse::durationIsSet() const
{
    return durationIsSet_;
}

void RebuildRepositoryNavigationResponse::unsetduration()
{
    durationIsSet_ = false;
}

int64_t RebuildRepositoryNavigationResponse::getSize() const
{
    return size_;
}

void RebuildRepositoryNavigationResponse::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool RebuildRepositoryNavigationResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void RebuildRepositoryNavigationResponse::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


