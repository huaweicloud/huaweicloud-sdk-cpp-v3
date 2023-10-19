

#include "huaweicloud/cfw/v1/model/ListEipsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListEipsResponse::ListEipsResponse()
{
    dataIsSet_ = false;
}

ListEipsResponse::~ListEipsResponse() = default;

void ListEipsResponse::validate()
{
}

web::json::value ListEipsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListEipsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            EipResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


EipResponseData ListEipsResponse::getData() const
{
    return data_;
}

void ListEipsResponse::setData(const EipResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListEipsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListEipsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


