

#include "huaweicloud/codeartsartifact/v2/model/ShowFileDetailByFullNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowFileDetailByFullNameRequest::ShowFileDetailByFullNameRequest()
{
    fileName_ = "";
    fileNameIsSet_ = false;
}

ShowFileDetailByFullNameRequest::~ShowFileDetailByFullNameRequest() = default;

void ShowFileDetailByFullNameRequest::validate()
{
}

web::json::value ShowFileDetailByFullNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }

    return val;
}
bool ShowFileDetailByFullNameRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    return ok;
}


std::string ShowFileDetailByFullNameRequest::getFileName() const
{
    return fileName_;
}

void ShowFileDetailByFullNameRequest::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ShowFileDetailByFullNameRequest::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ShowFileDetailByFullNameRequest::unsetfileName()
{
    fileNameIsSet_ = false;
}

}
}
}
}
}


