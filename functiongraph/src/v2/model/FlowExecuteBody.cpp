

#include "huaweicloud/functiongraph/v2/model/FlowExecuteBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




FlowExecuteBody::FlowExecuteBody()
{
    headersIsSet_ = false;
    inputIsSet_ = false;
}

FlowExecuteBody::~FlowExecuteBody() = default;

void FlowExecuteBody::validate()
{
}

web::json::value FlowExecuteBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(headersIsSet_) {
        val[utility::conversions::to_string_t("headers")] = ModelBase::toJson(headers_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }

    return val;
}
bool FlowExecuteBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("headers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("headers"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeaders(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    return ok;
}


Object FlowExecuteBody::getHeaders() const
{
    return headers_;
}

void FlowExecuteBody::setHeaders(const Object& value)
{
    headers_ = value;
    headersIsSet_ = true;
}

bool FlowExecuteBody::headersIsSet() const
{
    return headersIsSet_;
}

void FlowExecuteBody::unsetheaders()
{
    headersIsSet_ = false;
}

Object FlowExecuteBody::getInput() const
{
    return input_;
}

void FlowExecuteBody::setInput(const Object& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool FlowExecuteBody::inputIsSet() const
{
    return inputIsSet_;
}

void FlowExecuteBody::unsetinput()
{
    inputIsSet_ = false;
}

}
}
}
}
}


