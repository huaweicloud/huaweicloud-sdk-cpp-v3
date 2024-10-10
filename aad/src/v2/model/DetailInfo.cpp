

#include "huaweicloud/aad/v2/model/DetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




DetailInfo::DetailInfo()
{
    responseIsSet_ = false;
}

DetailInfo::~DetailInfo() = default;

void DetailInfo::validate()
{
}

web::json::value DetailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(responseIsSet_) {
        val[utility::conversions::to_string_t("response")] = ModelBase::toJson(response_);
    }

    return val;
}
bool DetailInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("response"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response"));
        if(!fieldValue.is_null())
        {
            PageRespInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponse(refVal);
        }
    }
    return ok;
}


PageRespInfo DetailInfo::getResponse() const
{
    return response_;
}

void DetailInfo::setResponse(const PageRespInfo& value)
{
    response_ = value;
    responseIsSet_ = true;
}

bool DetailInfo::responseIsSet() const
{
    return responseIsSet_;
}

void DetailInfo::unsetresponse()
{
    responseIsSet_ = false;
}

}
}
}
}
}


