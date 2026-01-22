

#include "huaweicloud/cfw/v1/model/BatchCreateBlackWhiteListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchCreateBlackWhiteListResponse::BatchCreateBlackWhiteListResponse()
{
    dataIsSet_ = false;
}

BatchCreateBlackWhiteListResponse::~BatchCreateBlackWhiteListResponse() = default;

void BatchCreateBlackWhiteListResponse::validate()
{
}

web::json::value BatchCreateBlackWhiteListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchCreateBlackWhiteListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            AddBlackWhiteListBatchVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


AddBlackWhiteListBatchVO BatchCreateBlackWhiteListResponse::getData() const
{
    return data_;
}

void BatchCreateBlackWhiteListResponse::setData(const AddBlackWhiteListBatchVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchCreateBlackWhiteListResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchCreateBlackWhiteListResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


