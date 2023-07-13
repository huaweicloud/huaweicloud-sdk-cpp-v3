

#include "huaweicloud/sis/v1/model/ShowVocabulariesParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




ShowVocabulariesParams::ShowVocabulariesParams()
{
    name_ = "";
    nameIsSet_ = false;
}

ShowVocabulariesParams::~ShowVocabulariesParams() = default;

void ShowVocabulariesParams::validate()
{
}

web::json::value ShowVocabulariesParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool ShowVocabulariesParams::fromJson(const web::json::value& val)
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

std::string ShowVocabulariesParams::getName() const
{
    return name_;
}

void ShowVocabulariesParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowVocabulariesParams::nameIsSet() const
{
    return nameIsSet_;
}

void ShowVocabulariesParams::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


