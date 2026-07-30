

#include "huaweicloud/modelarts/v1/model/ChangeAlgorithmRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ChangeAlgorithmRequest::ChangeAlgorithmRequest()
{
    algorithmId_ = "";
    algorithmIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeAlgorithmRequest::~ChangeAlgorithmRequest() = default;

void ChangeAlgorithmRequest::validate()
{
}

web::json::value ChangeAlgorithmRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(algorithmIdIsSet_) {
        val[utility::conversions::to_string_t("algorithm_id")] = ModelBase::toJson(algorithmId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeAlgorithmRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("algorithm_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithmId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Algorithm refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeAlgorithmRequest::getAlgorithmId() const
{
    return algorithmId_;
}

void ChangeAlgorithmRequest::setAlgorithmId(const std::string& value)
{
    algorithmId_ = value;
    algorithmIdIsSet_ = true;
}

bool ChangeAlgorithmRequest::algorithmIdIsSet() const
{
    return algorithmIdIsSet_;
}

void ChangeAlgorithmRequest::unsetalgorithmId()
{
    algorithmIdIsSet_ = false;
}

Algorithm ChangeAlgorithmRequest::getBody() const
{
    return body_;
}

void ChangeAlgorithmRequest::setBody(const Algorithm& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeAlgorithmRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeAlgorithmRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


