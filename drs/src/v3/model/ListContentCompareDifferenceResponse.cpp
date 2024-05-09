

#include "huaweicloud/drs/v3/model/ListContentCompareDifferenceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListContentCompareDifferenceResponse::ListContentCompareDifferenceResponse()
{
    count_ = 0L;
    countIsSet_ = false;
    targetMetaIsNull_ = 0L;
    targetMetaIsNullIsSet_ = false;
    sourceMetaIsNull_ = 0L;
    sourceMetaIsNullIsSet_ = false;
    sourceTargetMetaNotNull_ = 0L;
    sourceTargetMetaNotNullIsSet_ = false;
    contentsInfosIsSet_ = false;
}

ListContentCompareDifferenceResponse::~ListContentCompareDifferenceResponse() = default;

void ListContentCompareDifferenceResponse::validate()
{
}

web::json::value ListContentCompareDifferenceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(targetMetaIsNullIsSet_) {
        val[utility::conversions::to_string_t("target_meta_is_null")] = ModelBase::toJson(targetMetaIsNull_);
    }
    if(sourceMetaIsNullIsSet_) {
        val[utility::conversions::to_string_t("source_meta_is_null")] = ModelBase::toJson(sourceMetaIsNull_);
    }
    if(sourceTargetMetaNotNullIsSet_) {
        val[utility::conversions::to_string_t("source_target_meta_not_null")] = ModelBase::toJson(sourceTargetMetaNotNull_);
    }
    if(contentsInfosIsSet_) {
        val[utility::conversions::to_string_t("contents_infos")] = ModelBase::toJson(contentsInfos_);
    }

    return val;
}
bool ListContentCompareDifferenceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_meta_is_null"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_meta_is_null"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetMetaIsNull(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_meta_is_null"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_meta_is_null"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceMetaIsNull(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_target_meta_not_null"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_target_meta_not_null"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceTargetMetaNotNull(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contents_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contents_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<CompareJobContentDetailInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentsInfos(refVal);
        }
    }
    return ok;
}


int64_t ListContentCompareDifferenceResponse::getCount() const
{
    return count_;
}

void ListContentCompareDifferenceResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListContentCompareDifferenceResponse::countIsSet() const
{
    return countIsSet_;
}

void ListContentCompareDifferenceResponse::unsetcount()
{
    countIsSet_ = false;
}

int64_t ListContentCompareDifferenceResponse::getTargetMetaIsNull() const
{
    return targetMetaIsNull_;
}

void ListContentCompareDifferenceResponse::setTargetMetaIsNull(int64_t value)
{
    targetMetaIsNull_ = value;
    targetMetaIsNullIsSet_ = true;
}

bool ListContentCompareDifferenceResponse::targetMetaIsNullIsSet() const
{
    return targetMetaIsNullIsSet_;
}

void ListContentCompareDifferenceResponse::unsettargetMetaIsNull()
{
    targetMetaIsNullIsSet_ = false;
}

int64_t ListContentCompareDifferenceResponse::getSourceMetaIsNull() const
{
    return sourceMetaIsNull_;
}

void ListContentCompareDifferenceResponse::setSourceMetaIsNull(int64_t value)
{
    sourceMetaIsNull_ = value;
    sourceMetaIsNullIsSet_ = true;
}

bool ListContentCompareDifferenceResponse::sourceMetaIsNullIsSet() const
{
    return sourceMetaIsNullIsSet_;
}

void ListContentCompareDifferenceResponse::unsetsourceMetaIsNull()
{
    sourceMetaIsNullIsSet_ = false;
}

int64_t ListContentCompareDifferenceResponse::getSourceTargetMetaNotNull() const
{
    return sourceTargetMetaNotNull_;
}

void ListContentCompareDifferenceResponse::setSourceTargetMetaNotNull(int64_t value)
{
    sourceTargetMetaNotNull_ = value;
    sourceTargetMetaNotNullIsSet_ = true;
}

bool ListContentCompareDifferenceResponse::sourceTargetMetaNotNullIsSet() const
{
    return sourceTargetMetaNotNullIsSet_;
}

void ListContentCompareDifferenceResponse::unsetsourceTargetMetaNotNull()
{
    sourceTargetMetaNotNullIsSet_ = false;
}

std::vector<CompareJobContentDetailInfo>& ListContentCompareDifferenceResponse::getContentsInfos()
{
    return contentsInfos_;
}

void ListContentCompareDifferenceResponse::setContentsInfos(const std::vector<CompareJobContentDetailInfo>& value)
{
    contentsInfos_ = value;
    contentsInfosIsSet_ = true;
}

bool ListContentCompareDifferenceResponse::contentsInfosIsSet() const
{
    return contentsInfosIsSet_;
}

void ListContentCompareDifferenceResponse::unsetcontentsInfos()
{
    contentsInfosIsSet_ = false;
}

}
}
}
}
}


