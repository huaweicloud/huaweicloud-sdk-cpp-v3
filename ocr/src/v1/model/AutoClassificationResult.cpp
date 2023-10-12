

#include "huaweicloud/ocr/v1/model/AutoClassificationResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




AutoClassificationResult::AutoClassificationResult()
{
    statusIsSet_ = false;
    contentIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    locationIsSet_ = false;
}

AutoClassificationResult::~AutoClassificationResult() = default;

void AutoClassificationResult::validate()
{
}

web::json::value AutoClassificationResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }

    return val;
}
bool AutoClassificationResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            AutoClassificationResult_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    return ok;
}


AutoClassificationResult_status AutoClassificationResult::getStatus() const
{
    return status_;
}

void AutoClassificationResult::setStatus(const AutoClassificationResult_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AutoClassificationResult::statusIsSet() const
{
    return statusIsSet_;
}

void AutoClassificationResult::unsetstatus()
{
    statusIsSet_ = false;
}

Object AutoClassificationResult::getContent() const
{
    return content_;
}

void AutoClassificationResult::setContent(const Object& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool AutoClassificationResult::contentIsSet() const
{
    return contentIsSet_;
}

void AutoClassificationResult::unsetcontent()
{
    contentIsSet_ = false;
}

std::string AutoClassificationResult::getType() const
{
    return type_;
}

void AutoClassificationResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AutoClassificationResult::typeIsSet() const
{
    return typeIsSet_;
}

void AutoClassificationResult::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::vector<int32_t>>& AutoClassificationResult::getLocation()
{
    return location_;
}

void AutoClassificationResult::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool AutoClassificationResult::locationIsSet() const
{
    return locationIsSet_;
}

void AutoClassificationResult::unsetlocation()
{
    locationIsSet_ = false;
}

}
}
}
}
}


