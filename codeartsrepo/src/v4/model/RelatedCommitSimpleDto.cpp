

#include "huaweicloud/codeartsrepo/v4/model/RelatedCommitSimpleDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RelatedCommitSimpleDto::RelatedCommitSimpleDto()
{
    relatedId_ = "";
    relatedIdIsSet_ = false;
    relatedUrl_ = "";
    relatedUrlIsSet_ = false;
}

RelatedCommitSimpleDto::~RelatedCommitSimpleDto() = default;

void RelatedCommitSimpleDto::validate()
{
}

web::json::value RelatedCommitSimpleDto::toJson() const
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
bool RelatedCommitSimpleDto::fromJson(const web::json::value& val)
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


std::string RelatedCommitSimpleDto::getRelatedId() const
{
    return relatedId_;
}

void RelatedCommitSimpleDto::setRelatedId(const std::string& value)
{
    relatedId_ = value;
    relatedIdIsSet_ = true;
}

bool RelatedCommitSimpleDto::relatedIdIsSet() const
{
    return relatedIdIsSet_;
}

void RelatedCommitSimpleDto::unsetrelatedId()
{
    relatedIdIsSet_ = false;
}

std::string RelatedCommitSimpleDto::getRelatedUrl() const
{
    return relatedUrl_;
}

void RelatedCommitSimpleDto::setRelatedUrl(const std::string& value)
{
    relatedUrl_ = value;
    relatedUrlIsSet_ = true;
}

bool RelatedCommitSimpleDto::relatedUrlIsSet() const
{
    return relatedUrlIsSet_;
}

void RelatedCommitSimpleDto::unsetrelatedUrl()
{
    relatedUrlIsSet_ = false;
}

}
}
}
}
}


