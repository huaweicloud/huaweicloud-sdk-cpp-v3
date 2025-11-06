

#include "huaweicloud/lts/v2/model/LTSIndexConfigInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LTSIndexConfigInfo::LTSIndexConfigInfo()
{
    fullTextIndexIsSet_ = false;
    fieldsIsSet_ = false;
    sqlAnalysisEnable_ = false;
    sqlAnalysisEnableIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    fastAnalysisSampleCount_ = 0L;
    fastAnalysisSampleCountIsSet_ = false;
}

LTSIndexConfigInfo::~LTSIndexConfigInfo() = default;

void LTSIndexConfigInfo::validate()
{
}

web::json::value LTSIndexConfigInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fullTextIndexIsSet_) {
        val[utility::conversions::to_string_t("fullTextIndex")] = ModelBase::toJson(fullTextIndex_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(sqlAnalysisEnableIsSet_) {
        val[utility::conversions::to_string_t("sqlAnalysisEnable")] = ModelBase::toJson(sqlAnalysisEnable_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("logStreamId")] = ModelBase::toJson(logStreamId_);
    }
    if(fastAnalysisSampleCountIsSet_) {
        val[utility::conversions::to_string_t("fastAnalysisSampleCount")] = ModelBase::toJson(fastAnalysisSampleCount_);
    }

    return val;
}
bool LTSIndexConfigInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fullTextIndex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fullTextIndex"));
        if(!fieldValue.is_null())
        {
            LTSFullTextIndexInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullTextIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<LTSFieldsInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sqlAnalysisEnable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sqlAnalysisEnable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlAnalysisEnable(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fastAnalysisSampleCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fastAnalysisSampleCount"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFastAnalysisSampleCount(refVal);
        }
    }
    return ok;
}


LTSFullTextIndexInfo LTSIndexConfigInfo::getFullTextIndex() const
{
    return fullTextIndex_;
}

void LTSIndexConfigInfo::setFullTextIndex(const LTSFullTextIndexInfo& value)
{
    fullTextIndex_ = value;
    fullTextIndexIsSet_ = true;
}

bool LTSIndexConfigInfo::fullTextIndexIsSet() const
{
    return fullTextIndexIsSet_;
}

void LTSIndexConfigInfo::unsetfullTextIndex()
{
    fullTextIndexIsSet_ = false;
}

std::vector<LTSFieldsInfo>& LTSIndexConfigInfo::getFields()
{
    return fields_;
}

void LTSIndexConfigInfo::setFields(const std::vector<LTSFieldsInfo>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool LTSIndexConfigInfo::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void LTSIndexConfigInfo::unsetfields()
{
    fieldsIsSet_ = false;
}

bool LTSIndexConfigInfo::isSqlAnalysisEnable() const
{
    return sqlAnalysisEnable_;
}

void LTSIndexConfigInfo::setSqlAnalysisEnable(bool value)
{
    sqlAnalysisEnable_ = value;
    sqlAnalysisEnableIsSet_ = true;
}

bool LTSIndexConfigInfo::sqlAnalysisEnableIsSet() const
{
    return sqlAnalysisEnableIsSet_;
}

void LTSIndexConfigInfo::unsetsqlAnalysisEnable()
{
    sqlAnalysisEnableIsSet_ = false;
}

std::string LTSIndexConfigInfo::getLogStreamId() const
{
    return logStreamId_;
}

void LTSIndexConfigInfo::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool LTSIndexConfigInfo::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void LTSIndexConfigInfo::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

int64_t LTSIndexConfigInfo::getFastAnalysisSampleCount() const
{
    return fastAnalysisSampleCount_;
}

void LTSIndexConfigInfo::setFastAnalysisSampleCount(int64_t value)
{
    fastAnalysisSampleCount_ = value;
    fastAnalysisSampleCountIsSet_ = true;
}

bool LTSIndexConfigInfo::fastAnalysisSampleCountIsSet() const
{
    return fastAnalysisSampleCountIsSet_;
}

void LTSIndexConfigInfo::unsetfastAnalysisSampleCount()
{
    fastAnalysisSampleCountIsSet_ = false;
}

}
}
}
}
}


