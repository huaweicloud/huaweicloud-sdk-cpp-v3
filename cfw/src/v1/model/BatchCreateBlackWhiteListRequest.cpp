

#include "huaweicloud/cfw/v1/model/BatchCreateBlackWhiteListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchCreateBlackWhiteListRequest::BatchCreateBlackWhiteListRequest()
{
    bodyIsSet_ = false;
}

BatchCreateBlackWhiteListRequest::~BatchCreateBlackWhiteListRequest() = default;

void BatchCreateBlackWhiteListRequest::validate()
{
}

web::json::value BatchCreateBlackWhiteListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateBlackWhiteListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddBlackWhiteBatchDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AddBlackWhiteBatchDto BatchCreateBlackWhiteListRequest::getBody() const
{
    return body_;
}

void BatchCreateBlackWhiteListRequest::setBody(const AddBlackWhiteBatchDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateBlackWhiteListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateBlackWhiteListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


