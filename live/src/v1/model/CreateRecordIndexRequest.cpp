

#include "huaweicloud/live/v1/model/CreateRecordIndexRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateRecordIndexRequest::CreateRecordIndexRequest()
{
    bodyIsSet_ = false;
}

CreateRecordIndexRequest::~CreateRecordIndexRequest() = default;

void CreateRecordIndexRequest::validate()
{
}

web::json::value CreateRecordIndexRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateRecordIndexRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RecordIndexRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


RecordIndexRequestBody CreateRecordIndexRequest::getBody() const
{
    return body_;
}

void CreateRecordIndexRequest::setBody(const RecordIndexRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRecordIndexRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRecordIndexRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


