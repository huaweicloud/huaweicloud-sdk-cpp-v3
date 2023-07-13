

#include "huaweicloud/sis/v1/model/ShowVocabulariesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




ShowVocabulariesRequest::ShowVocabulariesRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    bodyIsSet_ = false;
}

ShowVocabulariesRequest::~ShowVocabulariesRequest() = default;

void ShowVocabulariesRequest::validate()
{
}

web::json::value ShowVocabulariesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ShowVocabulariesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ShowVocabulariesParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

int32_t ShowVocabulariesRequest::getOffset() const
{
    return offset_;
}

void ShowVocabulariesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowVocabulariesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowVocabulariesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowVocabulariesRequest::getLimit() const
{
    return limit_;
}

void ShowVocabulariesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowVocabulariesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowVocabulariesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

ShowVocabulariesParams ShowVocabulariesRequest::getBody() const
{
    return body_;
}

void ShowVocabulariesRequest::setBody(const ShowVocabulariesParams& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowVocabulariesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowVocabulariesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


