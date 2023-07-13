

#include "huaweicloud/cfw/v1/model/ListAccessControlLogsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAccessControlLogsResponse::ListAccessControlLogsResponse()
{
    dataIsSet_ = false;
}

ListAccessControlLogsResponse::~ListAccessControlLogsResponse() = default;

void ListAccessControlLogsResponse::validate()
{
}

web::json::value ListAccessControlLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListAccessControlLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            HttpQueryCfwAccessControllerLogsResponseDTO_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}

HttpQueryCfwAccessControllerLogsResponseDTO_data ListAccessControlLogsResponse::getData() const
{
    return data_;
}

void ListAccessControlLogsResponse::setData(const HttpQueryCfwAccessControllerLogsResponseDTO_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAccessControlLogsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAccessControlLogsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


