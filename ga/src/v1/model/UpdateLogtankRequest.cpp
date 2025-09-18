

#include "huaweicloud/ga/v1/model/UpdateLogtankRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateLogtankRequest::UpdateLogtankRequest()
{
    logtankId_ = "";
    logtankIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateLogtankRequest::~UpdateLogtankRequest() = default;

void UpdateLogtankRequest::validate()
{
}

web::json::value UpdateLogtankRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logtankIdIsSet_) {
        val[utility::conversions::to_string_t("logtank_id")] = ModelBase::toJson(logtankId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateLogtankRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("logtank_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logtank_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogtankId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateLogtankRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateLogtankRequest::getLogtankId() const
{
    return logtankId_;
}

void UpdateLogtankRequest::setLogtankId(const std::string& value)
{
    logtankId_ = value;
    logtankIdIsSet_ = true;
}

bool UpdateLogtankRequest::logtankIdIsSet() const
{
    return logtankIdIsSet_;
}

void UpdateLogtankRequest::unsetlogtankId()
{
    logtankIdIsSet_ = false;
}

UpdateLogtankRequestBody UpdateLogtankRequest::getBody() const
{
    return body_;
}

void UpdateLogtankRequest::setBody(const UpdateLogtankRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateLogtankRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateLogtankRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


