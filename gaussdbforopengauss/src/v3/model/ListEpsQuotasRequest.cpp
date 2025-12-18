

#include "huaweicloud/gaussdbforopengauss/v3/model/ListEpsQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListEpsQuotasRequest::ListEpsQuotasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    enterpriseProjectName_ = "";
    enterpriseProjectNameIsSet_ = false;
}

ListEpsQuotasRequest::~ListEpsQuotasRequest() = default;

void ListEpsQuotasRequest::validate()
{
}

web::json::value ListEpsQuotasRequest::toJson() const
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(enterpriseProjectNameIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_name")] = ModelBase::toJson(enterpriseProjectName_);
    }

    return val;
}
bool ListEpsQuotasRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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


std::string ListEpsQuotasRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListEpsQuotasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListEpsQuotasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListEpsQuotasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListEpsQuotasRequest::getOffset() const
{
    return offset_;
}

void ListEpsQuotasRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListEpsQuotasRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListEpsQuotasRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListEpsQuotasRequest::getLimit() const
{
    return limit_;
}

void ListEpsQuotasRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEpsQuotasRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEpsQuotasRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListEpsQuotasRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListEpsQuotasRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListEpsQuotasRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListEpsQuotasRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListEpsQuotasRequest::getEnterpriseProjectName() const
{
    return enterpriseProjectName_;
}

void ListEpsQuotasRequest::setEnterpriseProjectName(const std::string& value)
{
    enterpriseProjectName_ = value;
    enterpriseProjectNameIsSet_ = true;
}

bool ListEpsQuotasRequest::enterpriseProjectNameIsSet() const
{
    return enterpriseProjectNameIsSet_;
}

void ListEpsQuotasRequest::unsetenterpriseProjectName()
{
    enterpriseProjectNameIsSet_ = false;
}

}
}
}
}
}


