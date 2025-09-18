

#include "huaweicloud/codeartsartifact/v2/model/ShowStorageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowStorageRequest::ShowStorageRequest()
{
    formatList_ = "";
    formatListIsSet_ = false;
    inProject_ = "";
    inProjectIsSet_ = false;
}

ShowStorageRequest::~ShowStorageRequest() = default;

void ShowStorageRequest::validate()
{
}

web::json::value ShowStorageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(formatListIsSet_) {
        val[utility::conversions::to_string_t("format_list")] = ModelBase::toJson(formatList_);
    }
    if(inProjectIsSet_) {
        val[utility::conversions::to_string_t("in_project")] = ModelBase::toJson(inProject_);
    }

    return val;
}
bool ShowStorageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("format_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format_list"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormatList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in_project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_project"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInProject(refVal);
        }
    }
    return ok;
}


std::string ShowStorageRequest::getFormatList() const
{
    return formatList_;
}

void ShowStorageRequest::setFormatList(const std::string& value)
{
    formatList_ = value;
    formatListIsSet_ = true;
}

bool ShowStorageRequest::formatListIsSet() const
{
    return formatListIsSet_;
}

void ShowStorageRequest::unsetformatList()
{
    formatListIsSet_ = false;
}

std::string ShowStorageRequest::getInProject() const
{
    return inProject_;
}

void ShowStorageRequest::setInProject(const std::string& value)
{
    inProject_ = value;
    inProjectIsSet_ = true;
}

bool ShowStorageRequest::inProjectIsSet() const
{
    return inProjectIsSet_;
}

void ShowStorageRequest::unsetinProject()
{
    inProjectIsSet_ = false;
}

}
}
}
}
}


