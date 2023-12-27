

#include "huaweicloud/lts/v2/model/LTSIndexConfigInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LTSIndexConfigInfo::LTSIndexConfigInfo()
{
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    fullTextIndexIsSet_ = false;
    fieldsIsSet_ = false;
}

LTSIndexConfigInfo::~LTSIndexConfigInfo() = default;

void LTSIndexConfigInfo::validate()
{
}

web::json::value LTSIndexConfigInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("logStreamId")] = ModelBase::toJson(logStreamId_);
    }
    if(fullTextIndexIsSet_) {
        val[utility::conversions::to_string_t("fullTextIndex")] = ModelBase::toJson(fullTextIndex_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }

    return val;
}
bool LTSIndexConfigInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("logStreamId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logStreamId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
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
    return ok;
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

}
}
}
}
}


