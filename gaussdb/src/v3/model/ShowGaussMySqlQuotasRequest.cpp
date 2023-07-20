

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlQuotasRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlQuotasRequest::ShowGaussMySqlQuotasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    enterpriseProjectName_ = "";
    enterpriseProjectNameIsSet_ = false;
}

ShowGaussMySqlQuotasRequest::~ShowGaussMySqlQuotasRequest() = default;

void ShowGaussMySqlQuotasRequest::validate()
{
}

web::json::value ShowGaussMySqlQuotasRequest::toJson() const
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
    if(enterpriseProjectNameIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_name")] = ModelBase::toJson(enterpriseProjectName_);
    }

    return val;
}

bool ShowGaussMySqlQuotasRequest::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectName(refVal);
        }
    }
    return ok;
}

std::string ShowGaussMySqlQuotasRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowGaussMySqlQuotasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowGaussMySqlQuotasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowGaussMySqlQuotasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowGaussMySqlQuotasRequest::getOffset() const
{
    return offset_;
}

void ShowGaussMySqlQuotasRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowGaussMySqlQuotasRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowGaussMySqlQuotasRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowGaussMySqlQuotasRequest::getLimit() const
{
    return limit_;
}

void ShowGaussMySqlQuotasRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowGaussMySqlQuotasRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowGaussMySqlQuotasRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowGaussMySqlQuotasRequest::getEnterpriseProjectName() const
{
    return enterpriseProjectName_;
}

void ShowGaussMySqlQuotasRequest::setEnterpriseProjectName(const std::string& value)
{
    enterpriseProjectName_ = value;
    enterpriseProjectNameIsSet_ = true;
}

bool ShowGaussMySqlQuotasRequest::enterpriseProjectNameIsSet() const
{
    return enterpriseProjectNameIsSet_;
}

void ShowGaussMySqlQuotasRequest::unsetenterpriseProjectName()
{
    enterpriseProjectNameIsSet_ = false;
}

}
}
}
}
}


