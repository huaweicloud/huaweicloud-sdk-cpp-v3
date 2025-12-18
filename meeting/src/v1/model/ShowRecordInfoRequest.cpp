

#include "huaweicloud/meeting/v1/model/ShowRecordInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowRecordInfoRequest::ShowRecordInfoRequest()
{
    bodyIsSet_ = false;
}

ShowRecordInfoRequest::~ShowRecordInfoRequest() = default;

void ShowRecordInfoRequest::validate()
{
}

web::json::value ShowRecordInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowRecordInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RecordInfoReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


RecordInfoReq ShowRecordInfoRequest::getBody() const
{
    return body_;
}

void ShowRecordInfoRequest::setBody(const RecordInfoReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowRecordInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowRecordInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


