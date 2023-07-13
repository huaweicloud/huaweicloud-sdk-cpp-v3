

#include "huaweicloud/cfw/v1/model/ListAttackLogsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAttackLogsResponse::ListAttackLogsResponse()
{
    dataIsSet_ = false;
}

ListAttackLogsResponse::~ListAttackLogsResponse() = default;

void ListAttackLogsResponse::validate()
{
}

web::json::value ListAttackLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListAttackLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            HttpQueryCfwAttackLogsResponseDTO_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}

HttpQueryCfwAttackLogsResponseDTO_data ListAttackLogsResponse::getData() const
{
    return data_;
}

void ListAttackLogsResponse::setData(const HttpQueryCfwAttackLogsResponseDTO_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAttackLogsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAttackLogsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


