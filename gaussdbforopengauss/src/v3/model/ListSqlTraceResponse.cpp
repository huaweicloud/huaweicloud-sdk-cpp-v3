

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlTraceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlTraceResponse::ListSqlTraceResponse()
{
    bodyIsSet_ = false;
}

ListSqlTraceResponse::~ListSqlTraceResponse() = default;

void ListSqlTraceResponse::validate()
{
}

web::json::value ListSqlTraceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListSqlTraceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeExecutionInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<NodeExecutionInfoResult>& ListSqlTraceResponse::getBody()
{
    return body_;
}

void ListSqlTraceResponse::setBody(const std::vector<NodeExecutionInfoResult>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSqlTraceResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSqlTraceResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


