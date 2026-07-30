

#include "huaweicloud/modelarts/v1/model/ListSearchAlgorithms_search_algo_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListSearchAlgorithms_search_algo_list::ListSearchAlgorithms_search_algo_list()
{
    name_ = "";
    nameIsSet_ = false;
    paramsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ListSearchAlgorithms_search_algo_list::~ListSearchAlgorithms_search_algo_list() = default;

void ListSearchAlgorithms_search_algo_list::validate()
{
}

web::json::value ListSearchAlgorithms_search_algo_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ListSearchAlgorithms_search_algo_list::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::vector<ListSearchAlgorithms_params> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string ListSearchAlgorithms_search_algo_list::getName() const
{
    return name_;
}

void ListSearchAlgorithms_search_algo_list::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListSearchAlgorithms_search_algo_list::nameIsSet() const
{
    return nameIsSet_;
}

void ListSearchAlgorithms_search_algo_list::unsetname()
{
    nameIsSet_ = false;
}

std::vector<ListSearchAlgorithms_params>& ListSearchAlgorithms_search_algo_list::getParams()
{
    return params_;
}

void ListSearchAlgorithms_search_algo_list::setParams(const std::vector<ListSearchAlgorithms_params>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool ListSearchAlgorithms_search_algo_list::paramsIsSet() const
{
    return paramsIsSet_;
}

void ListSearchAlgorithms_search_algo_list::unsetparams()
{
    paramsIsSet_ = false;
}

std::string ListSearchAlgorithms_search_algo_list::getDescription() const
{
    return description_;
}

void ListSearchAlgorithms_search_algo_list::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListSearchAlgorithms_search_algo_list::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListSearchAlgorithms_search_algo_list::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


