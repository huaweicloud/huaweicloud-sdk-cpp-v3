

#include "huaweicloud/projectman/v4/model/ShowIpdProjectListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIpdProjectListRequest::ShowIpdProjectListRequest()
{
    search_ = "";
    searchIsSet_ = false;
    model_ = "";
    modelIsSet_ = false;
}

ShowIpdProjectListRequest::~ShowIpdProjectListRequest() = default;

void ShowIpdProjectListRequest::validate()
{
}

web::json::value ShowIpdProjectListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }

    return val;
}
bool ShowIpdProjectListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModel(refVal);
        }
    }
    return ok;
}


std::string ShowIpdProjectListRequest::getSearch() const
{
    return search_;
}

void ShowIpdProjectListRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ShowIpdProjectListRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ShowIpdProjectListRequest::unsetsearch()
{
    searchIsSet_ = false;
}

std::string ShowIpdProjectListRequest::getModel() const
{
    return model_;
}

void ShowIpdProjectListRequest::setModel(const std::string& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool ShowIpdProjectListRequest::modelIsSet() const
{
    return modelIsSet_;
}

void ShowIpdProjectListRequest::unsetmodel()
{
    modelIsSet_ = false;
}

}
}
}
}
}


