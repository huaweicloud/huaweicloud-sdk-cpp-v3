

#include "huaweicloud/cfw/v1/model/ListFlowLogsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListFlowLogsResponse::ListFlowLogsResponse()
{
    dataIsSet_ = false;
}

ListFlowLogsResponse::~ListFlowLogsResponse() = default;

void ListFlowLogsResponse::validate()
{
}

web::json::value ListFlowLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListFlowLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            HttpQueryCfwFlowLogsResponseDTO_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


HttpQueryCfwFlowLogsResponseDTO_data ListFlowLogsResponse::getData() const
{
    return data_;
}

void ListFlowLogsResponse::setData(const HttpQueryCfwFlowLogsResponseDTO_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListFlowLogsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListFlowLogsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


