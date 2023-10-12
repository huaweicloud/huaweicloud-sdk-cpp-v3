

#include "huaweicloud/gaussdbfornosql/v3/model/ListEpsQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListEpsQuotasRequest::ListEpsQuotasRequest()
{
    enterpriseProjectName_ = "";
    enterpriseProjectNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListEpsQuotasRequest::~ListEpsQuotasRequest() = default;

void ListEpsQuotasRequest::validate()
{
}

web::json::value ListEpsQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectNameIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_name")] = ModelBase::toJson(enterpriseProjectName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListEpsQuotasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectName(refVal);
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

}
}
}
}
}


