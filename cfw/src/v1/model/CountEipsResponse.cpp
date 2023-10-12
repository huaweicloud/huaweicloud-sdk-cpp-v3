

#include "huaweicloud/cfw/v1/model/CountEipsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CountEipsResponse::CountEipsResponse()
{
    dataIsSet_ = false;
}

CountEipsResponse::~CountEipsResponse() = default;

void CountEipsResponse::validate()
{
}

web::json::value CountEipsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool CountEipsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            EipCountRespData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


EipCountRespData CountEipsResponse::getData() const
{
    return data_;
}

void CountEipsResponse::setData(const EipCountRespData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CountEipsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CountEipsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


