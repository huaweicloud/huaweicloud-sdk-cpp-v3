

#include "huaweicloud/cfw/v1/model/BatchDeleteServiceItemsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteServiceItemsResponse::BatchDeleteServiceItemsResponse()
{
    dataIsSet_ = false;
}

BatchDeleteServiceItemsResponse::~BatchDeleteServiceItemsResponse() = default;

void BatchDeleteServiceItemsResponse::validate()
{
}

web::json::value BatchDeleteServiceItemsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchDeleteServiceItemsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchDeleteServiceItemsResponse::getData()
{
    return data_;
}

void BatchDeleteServiceItemsResponse::setData(const std::vector<std::string>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchDeleteServiceItemsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchDeleteServiceItemsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


