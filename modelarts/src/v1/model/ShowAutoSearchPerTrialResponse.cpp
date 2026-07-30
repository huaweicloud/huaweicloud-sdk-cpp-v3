

#include "huaweicloud/modelarts/v1/model/ShowAutoSearchPerTrialResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAutoSearchPerTrialResponse::ShowAutoSearchPerTrialResponse()
{
    headerIsSet_ = false;
    dataIsSet_ = false;
}

ShowAutoSearchPerTrialResponse::~ShowAutoSearchPerTrialResponse() = default;

void ShowAutoSearchPerTrialResponse::validate()
{
}

web::json::value ShowAutoSearchPerTrialResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(headerIsSet_) {
        val[utility::conversions::to_string_t("header")] = ModelBase::toJson(header_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowAutoSearchPerTrialResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("header"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeader(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ShowAutoSearchPerTrialResponse::getHeader()
{
    return header_;
}

void ShowAutoSearchPerTrialResponse::setHeader(const std::vector<std::string>& value)
{
    header_ = value;
    headerIsSet_ = true;
}

bool ShowAutoSearchPerTrialResponse::headerIsSet() const
{
    return headerIsSet_;
}

void ShowAutoSearchPerTrialResponse::unsetheader()
{
    headerIsSet_ = false;
}

std::vector<std::vector<std::string>>& ShowAutoSearchPerTrialResponse::getData()
{
    return data_;
}

void ShowAutoSearchPerTrialResponse::setData(const std::vector<std::vector<std::string>>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAutoSearchPerTrialResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAutoSearchPerTrialResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


