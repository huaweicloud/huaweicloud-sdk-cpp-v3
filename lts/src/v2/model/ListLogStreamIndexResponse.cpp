

#include "huaweicloud/lts/v2/model/ListLogStreamIndexResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogStreamIndexResponse::ListLogStreamIndexResponse()
{
    fullTextIndexIsSet_ = false;
    fieldsIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
}

ListLogStreamIndexResponse::~ListLogStreamIndexResponse() = default;

void ListLogStreamIndexResponse::validate()
{
}

web::json::value ListLogStreamIndexResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fullTextIndexIsSet_) {
        val[utility::conversions::to_string_t("fullTextIndex")] = ModelBase::toJson(fullTextIndex_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("logStreamId")] = ModelBase::toJson(logStreamId_);
    }

    return val;
}
bool ListLogStreamIndexResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("logStreamId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logStreamId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    return ok;
}


LTSFullTextIndexInfo ListLogStreamIndexResponse::getFullTextIndex() const
{
    return fullTextIndex_;
}

void ListLogStreamIndexResponse::setFullTextIndex(const LTSFullTextIndexInfo& value)
{
    fullTextIndex_ = value;
    fullTextIndexIsSet_ = true;
}

bool ListLogStreamIndexResponse::fullTextIndexIsSet() const
{
    return fullTextIndexIsSet_;
}

void ListLogStreamIndexResponse::unsetfullTextIndex()
{
    fullTextIndexIsSet_ = false;
}

std::vector<LTSFieldsInfo>& ListLogStreamIndexResponse::getFields()
{
    return fields_;
}

void ListLogStreamIndexResponse::setFields(const std::vector<LTSFieldsInfo>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListLogStreamIndexResponse::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListLogStreamIndexResponse::unsetfields()
{
    fieldsIsSet_ = false;
}

std::string ListLogStreamIndexResponse::getLogStreamId() const
{
    return logStreamId_;
}

void ListLogStreamIndexResponse::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ListLogStreamIndexResponse::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ListLogStreamIndexResponse::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

}
}
}
}
}


