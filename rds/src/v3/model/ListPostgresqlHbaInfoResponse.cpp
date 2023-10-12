

#include "huaweicloud/rds/v3/model/ListPostgresqlHbaInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPostgresqlHbaInfoResponse::ListPostgresqlHbaInfoResponse()
{
    bodyIsSet_ = false;
}

ListPostgresqlHbaInfoResponse::~ListPostgresqlHbaInfoResponse() = default;

void ListPostgresqlHbaInfoResponse::validate()
{
}

web::json::value ListPostgresqlHbaInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListPostgresqlHbaInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgresqlHbaConf> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<PostgresqlHbaConf>& ListPostgresqlHbaInfoResponse::getBody()
{
    return body_;
}

void ListPostgresqlHbaInfoResponse::setBody(const std::vector<PostgresqlHbaConf>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPostgresqlHbaInfoResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPostgresqlHbaInfoResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


