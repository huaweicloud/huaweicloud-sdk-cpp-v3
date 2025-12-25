

#include "huaweicloud/codeartsartifact/v2/model/ShowLatestVersionFilesCountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowLatestVersionFilesCountRequest::ShowLatestVersionFilesCountRequest()
{
    name_ = "";
    nameIsSet_ = false;
}

ShowLatestVersionFilesCountRequest::~ShowLatestVersionFilesCountRequest() = default;

void ShowLatestVersionFilesCountRequest::validate()
{
}

web::json::value ShowLatestVersionFilesCountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ShowLatestVersionFilesCountRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowLatestVersionFilesCountRequest::getName() const
{
    return name_;
}

void ShowLatestVersionFilesCountRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowLatestVersionFilesCountRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowLatestVersionFilesCountRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


