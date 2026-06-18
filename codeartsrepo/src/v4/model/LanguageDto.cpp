

#include "huaweicloud/codeartsrepo/v4/model/LanguageDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




LanguageDto::LanguageDto()
{
    name_ = "";
    nameIsSet_ = false;
    extensionListIsSet_ = false;
}

LanguageDto::~LanguageDto() = default;

void LanguageDto::validate()
{
}

web::json::value LanguageDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(extensionListIsSet_) {
        val[utility::conversions::to_string_t("extension_list")] = ModelBase::toJson(extensionList_);
    }

    return val;
}
bool LanguageDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("extension_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extension_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtensionList(refVal);
        }
    }
    return ok;
}


std::string LanguageDto::getName() const
{
    return name_;
}

void LanguageDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LanguageDto::nameIsSet() const
{
    return nameIsSet_;
}

void LanguageDto::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& LanguageDto::getExtensionList()
{
    return extensionList_;
}

void LanguageDto::setExtensionList(const std::vector<std::string>& value)
{
    extensionList_ = value;
    extensionListIsSet_ = true;
}

bool LanguageDto::extensionListIsSet() const
{
    return extensionListIsSet_;
}

void LanguageDto::unsetextensionList()
{
    extensionListIsSet_ = false;
}

}
}
}
}
}


