

#include "huaweicloud/modelarts/v1/model/ListAutoSearchTrials_items.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListAutoSearchTrials_items::ListAutoSearchTrials_items()
{
    headerIsSet_ = false;
    dataIsSet_ = false;
}

ListAutoSearchTrials_items::~ListAutoSearchTrials_items() = default;

void ListAutoSearchTrials_items::validate()
{
}

web::json::value ListAutoSearchTrials_items::toJson() const
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
bool ListAutoSearchTrials_items::fromJson(const web::json::value& val)
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


std::vector<std::string>& ListAutoSearchTrials_items::getHeader()
{
    return header_;
}

void ListAutoSearchTrials_items::setHeader(const std::vector<std::string>& value)
{
    header_ = value;
    headerIsSet_ = true;
}

bool ListAutoSearchTrials_items::headerIsSet() const
{
    return headerIsSet_;
}

void ListAutoSearchTrials_items::unsetheader()
{
    headerIsSet_ = false;
}

std::vector<std::vector<std::string>>& ListAutoSearchTrials_items::getData()
{
    return data_;
}

void ListAutoSearchTrials_items::setData(const std::vector<std::vector<std::string>>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAutoSearchTrials_items::dataIsSet() const
{
    return dataIsSet_;
}

void ListAutoSearchTrials_items::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


