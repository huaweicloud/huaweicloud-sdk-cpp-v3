

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlRecommendRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlRecommendRulesRequest::ListSqlRecommendRulesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListSqlRecommendRulesRequest::~ListSqlRecommendRulesRequest() = default;

void ListSqlRecommendRulesRequest::validate()
{
}

web::json::value ListSqlRecommendRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListSqlRecommendRulesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListSqlRecommendRulesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListSqlRecommendRulesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSqlRecommendRulesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSqlRecommendRulesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSqlRecommendRulesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSqlRecommendRulesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSqlRecommendRulesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSqlRecommendRulesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSqlRecommendRulesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListSqlRecommendRulesRequestBody ListSqlRecommendRulesRequest::getBody() const
{
    return body_;
}

void ListSqlRecommendRulesRequest::setBody(const ListSqlRecommendRulesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSqlRecommendRulesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSqlRecommendRulesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


