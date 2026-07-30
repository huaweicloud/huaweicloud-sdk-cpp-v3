

#include "huaweicloud/modelarts/v1/model/ShowAutoSearchParamsAnalysisResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAutoSearchParamsAnalysisResponse::ShowAutoSearchParamsAnalysisResponse()
{
    headerIsSet_ = false;
    dataIsSet_ = false;
}

ShowAutoSearchParamsAnalysisResponse::~ShowAutoSearchParamsAnalysisResponse() = default;

void ShowAutoSearchParamsAnalysisResponse::validate()
{
}

web::json::value ShowAutoSearchParamsAnalysisResponse::toJson() const
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
bool ShowAutoSearchParamsAnalysisResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& ShowAutoSearchParamsAnalysisResponse::getHeader()
{
    return header_;
}

void ShowAutoSearchParamsAnalysisResponse::setHeader(const std::vector<std::string>& value)
{
    header_ = value;
    headerIsSet_ = true;
}

bool ShowAutoSearchParamsAnalysisResponse::headerIsSet() const
{
    return headerIsSet_;
}

void ShowAutoSearchParamsAnalysisResponse::unsetheader()
{
    headerIsSet_ = false;
}

std::vector<std::vector<std::string>>& ShowAutoSearchParamsAnalysisResponse::getData()
{
    return data_;
}

void ShowAutoSearchParamsAnalysisResponse::setData(const std::vector<std::vector<std::string>>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAutoSearchParamsAnalysisResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAutoSearchParamsAnalysisResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


