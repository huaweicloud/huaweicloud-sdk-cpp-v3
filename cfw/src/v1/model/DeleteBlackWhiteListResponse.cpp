

#include "huaweicloud/cfw/v1/model/DeleteBlackWhiteListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteBlackWhiteListResponse::DeleteBlackWhiteListResponse()
{
    dataIsSet_ = false;
}

DeleteBlackWhiteListResponse::~DeleteBlackWhiteListResponse() = default;

void DeleteBlackWhiteListResponse::validate()
{
}

web::json::value DeleteBlackWhiteListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool DeleteBlackWhiteListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            IdObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


IdObject DeleteBlackWhiteListResponse::getData() const
{
    return data_;
}

void DeleteBlackWhiteListResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteBlackWhiteListResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteBlackWhiteListResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


