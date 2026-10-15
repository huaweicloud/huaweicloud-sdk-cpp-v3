

#include "huaweicloud/drs/v5/model/ShowFilesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowFilesRequest::ShowFilesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowFilesRequest::~ShowFilesRequest() = default;

void ShowFilesRequest::validate()
{
}

web::json::value ShowFilesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowFilesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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
    return ok;
}


std::string ShowFilesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowFilesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowFilesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowFilesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ShowFilesRequest::getOffset() const
{
    return offset_;
}

void ShowFilesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowFilesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowFilesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowFilesRequest::getLimit() const
{
    return limit_;
}

void ShowFilesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowFilesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowFilesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


