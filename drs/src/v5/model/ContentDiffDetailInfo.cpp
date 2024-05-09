

#include "huaweicloud/drs/v5/model/ContentDiffDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ContentDiffDetailInfo::ContentDiffDetailInfo()
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

ContentDiffDetailInfo::~ContentDiffDetailInfo() = default;

void ContentDiffDetailInfo::validate()
{
}

web::json::value ContentDiffDetailInfo::toJson() const
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
bool ContentDiffDetailInfo::fromJson(const web::json::value& val)
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
            std::vector<ContentDiffDetailVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentsInfos(refVal);
        }
    }
    return ok;
}


int64_t ContentDiffDetailInfo::getCount() const
{
    return count_;
}

void ContentDiffDetailInfo::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ContentDiffDetailInfo::countIsSet() const
{
    return countIsSet_;
}

void ContentDiffDetailInfo::unsetcount()
{
    countIsSet_ = false;
}

int64_t ContentDiffDetailInfo::getTargetMetaIsNull() const
{
    return targetMetaIsNull_;
}

void ContentDiffDetailInfo::setTargetMetaIsNull(int64_t value)
{
    targetMetaIsNull_ = value;
    targetMetaIsNullIsSet_ = true;
}

bool ContentDiffDetailInfo::targetMetaIsNullIsSet() const
{
    return targetMetaIsNullIsSet_;
}

void ContentDiffDetailInfo::unsettargetMetaIsNull()
{
    targetMetaIsNullIsSet_ = false;
}

int64_t ContentDiffDetailInfo::getSourceMetaIsNull() const
{
    return sourceMetaIsNull_;
}

void ContentDiffDetailInfo::setSourceMetaIsNull(int64_t value)
{
    sourceMetaIsNull_ = value;
    sourceMetaIsNullIsSet_ = true;
}

bool ContentDiffDetailInfo::sourceMetaIsNullIsSet() const
{
    return sourceMetaIsNullIsSet_;
}

void ContentDiffDetailInfo::unsetsourceMetaIsNull()
{
    sourceMetaIsNullIsSet_ = false;
}

int64_t ContentDiffDetailInfo::getSourceTargetMetaNotNull() const
{
    return sourceTargetMetaNotNull_;
}

void ContentDiffDetailInfo::setSourceTargetMetaNotNull(int64_t value)
{
    sourceTargetMetaNotNull_ = value;
    sourceTargetMetaNotNullIsSet_ = true;
}

bool ContentDiffDetailInfo::sourceTargetMetaNotNullIsSet() const
{
    return sourceTargetMetaNotNullIsSet_;
}

void ContentDiffDetailInfo::unsetsourceTargetMetaNotNull()
{
    sourceTargetMetaNotNullIsSet_ = false;
}

std::vector<ContentDiffDetailVO>& ContentDiffDetailInfo::getContentsInfos()
{
    return contentsInfos_;
}

void ContentDiffDetailInfo::setContentsInfos(const std::vector<ContentDiffDetailVO>& value)
{
    contentsInfos_ = value;
    contentsInfosIsSet_ = true;
}

bool ContentDiffDetailInfo::contentsInfosIsSet() const
{
    return contentsInfosIsSet_;
}

void ContentDiffDetailInfo::unsetcontentsInfos()
{
    contentsInfosIsSet_ = false;
}

}
}
}
}
}


