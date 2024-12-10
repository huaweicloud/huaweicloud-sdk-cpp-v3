

#include "huaweicloud/csms/v1/model/CreateGrantsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateGrantsResponse::CreateGrantsResponse()
{
    dataIsSet_ = false;
}

CreateGrantsResponse::~CreateGrantsResponse() = default;

void CreateGrantsResponse::validate()
{
}

web::json::value CreateGrantsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool CreateGrantsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            GrantData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


GrantData CreateGrantsResponse::getData() const
{
    return data_;
}

void CreateGrantsResponse::setData(const GrantData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CreateGrantsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CreateGrantsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


