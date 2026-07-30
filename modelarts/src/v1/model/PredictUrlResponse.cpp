

#include "huaweicloud/modelarts/v1/model/PredictUrlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PredictUrlResponse::PredictUrlResponse()
{
    type_ = "";
    typeIsSet_ = false;
    urlsIsSet_ = false;
}

PredictUrlResponse::~PredictUrlResponse() = default;

void PredictUrlResponse::validate()
{
}

web::json::value PredictUrlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(urlsIsSet_) {
        val[utility::conversions::to_string_t("urls")] = ModelBase::toJson(urls_);
    }

    return val;
}
bool PredictUrlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrls(refVal);
        }
    }
    return ok;
}


std::string PredictUrlResponse::getType() const
{
    return type_;
}

void PredictUrlResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PredictUrlResponse::typeIsSet() const
{
    return typeIsSet_;
}

void PredictUrlResponse::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& PredictUrlResponse::getUrls()
{
    return urls_;
}

void PredictUrlResponse::setUrls(const std::vector<std::string>& value)
{
    urls_ = value;
    urlsIsSet_ = true;
}

bool PredictUrlResponse::urlsIsSet() const
{
    return urlsIsSet_;
}

void PredictUrlResponse::unseturls()
{
    urlsIsSet_ = false;
}

}
}
}
}
}


