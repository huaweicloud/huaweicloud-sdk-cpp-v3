

#include "huaweicloud/codeartsrepo/v4/model/WorkItemSimpleDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




WorkItemSimpleDto::WorkItemSimpleDto()
{
    relatedId_ = "";
    relatedIdIsSet_ = false;
    relatedUrl_ = "";
    relatedUrlIsSet_ = false;
}

WorkItemSimpleDto::~WorkItemSimpleDto() = default;

void WorkItemSimpleDto::validate()
{
}

web::json::value WorkItemSimpleDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(relatedIdIsSet_) {
        val[utility::conversions::to_string_t("related_id")] = ModelBase::toJson(relatedId_);
    }
    if(relatedUrlIsSet_) {
        val[utility::conversions::to_string_t("related_url")] = ModelBase::toJson(relatedUrl_);
    }

    return val;
}
bool WorkItemSimpleDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("related_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("related_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedUrl(refVal);
        }
    }
    return ok;
}


std::string WorkItemSimpleDto::getRelatedId() const
{
    return relatedId_;
}

void WorkItemSimpleDto::setRelatedId(const std::string& value)
{
    relatedId_ = value;
    relatedIdIsSet_ = true;
}

bool WorkItemSimpleDto::relatedIdIsSet() const
{
    return relatedIdIsSet_;
}

void WorkItemSimpleDto::unsetrelatedId()
{
    relatedIdIsSet_ = false;
}

std::string WorkItemSimpleDto::getRelatedUrl() const
{
    return relatedUrl_;
}

void WorkItemSimpleDto::setRelatedUrl(const std::string& value)
{
    relatedUrl_ = value;
    relatedUrlIsSet_ = true;
}

bool WorkItemSimpleDto::relatedUrlIsSet() const
{
    return relatedUrlIsSet_;
}

void WorkItemSimpleDto::unsetrelatedUrl()
{
    relatedUrlIsSet_ = false;
}

}
}
}
}
}


