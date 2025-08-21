

#include "huaweicloud/cfw/v1/model/ListFlowStatisticResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListFlowStatisticResponse::ListFlowStatisticResponse()
{
    dataIsSet_ = false;
}

ListFlowStatisticResponse::~ListFlowStatisticResponse() = default;

void ListFlowStatisticResponse::validate()
{
}

web::json::value ListFlowStatisticResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListFlowStatisticResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ListFlowStatisticResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ListFlowStatisticResp_data ListFlowStatisticResponse::getData() const
{
    return data_;
}

void ListFlowStatisticResponse::setData(const ListFlowStatisticResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListFlowStatisticResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListFlowStatisticResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


