

#include "huaweicloud/dbss/v1/model/ListAuditTrendHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditTrendHistoryResponse::ListAuditTrendHistoryResponse()
{
    bodyIsSet_ = false;
}

ListAuditTrendHistoryResponse::~ListAuditTrendHistoryResponse() = default;

void ListAuditTrendHistoryResponse::validate()
{
}

web::json::value ListAuditTrendHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListAuditTrendHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TrendStatusResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<TrendStatusResponse>& ListAuditTrendHistoryResponse::getBody()
{
    return body_;
}

void ListAuditTrendHistoryResponse::setBody(const std::vector<TrendStatusResponse>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAuditTrendHistoryResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAuditTrendHistoryResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


