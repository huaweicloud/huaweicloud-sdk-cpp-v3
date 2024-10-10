

#include "huaweicloud/aad/v2/model/ListDDoSConnectionNumberResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListDDoSConnectionNumberResponse::ListDDoSConnectionNumberResponse()
{
    dataIsSet_ = false;
}

ListDDoSConnectionNumberResponse::~ListDDoSConnectionNumberResponse() = default;

void ListDDoSConnectionNumberResponse::validate()
{
}

web::json::value ListDDoSConnectionNumberResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListDDoSConnectionNumberResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ListConnectionNumberData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<ListConnectionNumberData>& ListDDoSConnectionNumberResponse::getData()
{
    return data_;
}

void ListDDoSConnectionNumberResponse::setData(const std::vector<ListConnectionNumberData>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListDDoSConnectionNumberResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListDDoSConnectionNumberResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


