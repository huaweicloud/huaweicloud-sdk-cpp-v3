

#include "huaweicloud/cfw/v1/model/DeleteBlackWhiteListUsingDeleteResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteBlackWhiteListUsingDeleteResponse::DeleteBlackWhiteListUsingDeleteResponse()
{
    dataIsSet_ = false;
}

DeleteBlackWhiteListUsingDeleteResponse::~DeleteBlackWhiteListUsingDeleteResponse() = default;

void DeleteBlackWhiteListUsingDeleteResponse::validate()
{
}

web::json::value DeleteBlackWhiteListUsingDeleteResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool DeleteBlackWhiteListUsingDeleteResponse::fromJson(const web::json::value& val)
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


IdObject DeleteBlackWhiteListUsingDeleteResponse::getData() const
{
    return data_;
}

void DeleteBlackWhiteListUsingDeleteResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteBlackWhiteListUsingDeleteResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteBlackWhiteListUsingDeleteResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


