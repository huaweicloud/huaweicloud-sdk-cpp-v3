

#include "huaweicloud/cfw/v1/model/DeleteServiceSetUsingDeleteResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteServiceSetUsingDeleteResponse::DeleteServiceSetUsingDeleteResponse()
{
    dataIsSet_ = false;
}

DeleteServiceSetUsingDeleteResponse::~DeleteServiceSetUsingDeleteResponse() = default;

void DeleteServiceSetUsingDeleteResponse::validate()
{
}

web::json::value DeleteServiceSetUsingDeleteResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool DeleteServiceSetUsingDeleteResponse::fromJson(const web::json::value& val)
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

IdObject DeleteServiceSetUsingDeleteResponse::getData() const
{
    return data_;
}

void DeleteServiceSetUsingDeleteResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteServiceSetUsingDeleteResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteServiceSetUsingDeleteResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


