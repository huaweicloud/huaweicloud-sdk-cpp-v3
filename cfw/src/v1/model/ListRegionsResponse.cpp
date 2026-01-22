

#include "huaweicloud/cfw/v1/model/ListRegionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListRegionsResponse::ListRegionsResponse()
{
    dataIsSet_ = false;
}

ListRegionsResponse::~ListRegionsResponse() = default;

void ListRegionsResponse::validate()
{
}

web::json::value ListRegionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListRegionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<IpRegionResponseBodyData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<IpRegionResponseBodyData>& ListRegionsResponse::getData()
{
    return data_;
}

void ListRegionsResponse::setData(const std::vector<IpRegionResponseBodyData>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListRegionsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListRegionsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


