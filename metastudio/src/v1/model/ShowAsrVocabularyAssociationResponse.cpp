

#include "huaweicloud/metastudio/v1/model/ShowAsrVocabularyAssociationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowAsrVocabularyAssociationResponse::ShowAsrVocabularyAssociationResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowAsrVocabularyAssociationResponse::~ShowAsrVocabularyAssociationResponse() = default;

void ShowAsrVocabularyAssociationResponse::validate()
{
}

web::json::value ShowAsrVocabularyAssociationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowAsrVocabularyAssociationResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<AsrVocabularyAssociation> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ShowAsrVocabularyAssociationResponse::getOffset() const
{
    return offset_;
}

void ShowAsrVocabularyAssociationResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowAsrVocabularyAssociationResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowAsrVocabularyAssociationResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowAsrVocabularyAssociationResponse::getLimit() const
{
    return limit_;
}

void ShowAsrVocabularyAssociationResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowAsrVocabularyAssociationResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ShowAsrVocabularyAssociationResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowAsrVocabularyAssociationResponse::getCount() const
{
    return count_;
}

void ShowAsrVocabularyAssociationResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowAsrVocabularyAssociationResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowAsrVocabularyAssociationResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<AsrVocabularyAssociation>& ShowAsrVocabularyAssociationResponse::getData()
{
    return data_;
}

void ShowAsrVocabularyAssociationResponse::setData(const std::vector<AsrVocabularyAssociation>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAsrVocabularyAssociationResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAsrVocabularyAssociationResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowAsrVocabularyAssociationResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowAsrVocabularyAssociationResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowAsrVocabularyAssociationResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowAsrVocabularyAssociationResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


