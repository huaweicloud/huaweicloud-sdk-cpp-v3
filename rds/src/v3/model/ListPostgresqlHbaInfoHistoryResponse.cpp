

#include "huaweicloud/rds/v3/model/ListPostgresqlHbaInfoHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPostgresqlHbaInfoHistoryResponse::ListPostgresqlHbaInfoHistoryResponse()
{
    bodyIsSet_ = false;
}

ListPostgresqlHbaInfoHistoryResponse::~ListPostgresqlHbaInfoHistoryResponse() = default;

void ListPostgresqlHbaInfoHistoryResponse::validate()
{
}

web::json::value ListPostgresqlHbaInfoHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListPostgresqlHbaInfoHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgresqlHbaHistory> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<PostgresqlHbaHistory>& ListPostgresqlHbaInfoHistoryResponse::getBody()
{
    return body_;
}

void ListPostgresqlHbaInfoHistoryResponse::setBody(const std::vector<PostgresqlHbaHistory>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPostgresqlHbaInfoHistoryResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPostgresqlHbaInfoHistoryResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


