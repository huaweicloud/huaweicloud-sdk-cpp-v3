

#include "huaweicloud/cfw/v1/model/BatchDeleteServiceSetsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteServiceSetsResponse::BatchDeleteServiceSetsResponse()
{
    dataIsSet_ = false;
}

BatchDeleteServiceSetsResponse::~BatchDeleteServiceSetsResponse() = default;

void BatchDeleteServiceSetsResponse::validate()
{
}

web::json::value BatchDeleteServiceSetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchDeleteServiceSetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchDeleteServiceSetsResp_data> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<BatchDeleteServiceSetsResp_data>& BatchDeleteServiceSetsResponse::getData()
{
    return data_;
}

void BatchDeleteServiceSetsResponse::setData(const std::vector<BatchDeleteServiceSetsResp_data>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchDeleteServiceSetsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchDeleteServiceSetsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


