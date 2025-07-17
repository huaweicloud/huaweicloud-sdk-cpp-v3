

#include "huaweicloud/metastudio/v1/model/MobvoiVocabulary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




MobvoiVocabulary::MobvoiVocabulary()
{
    content_ = "";
    contentIsSet_ = false;
}

MobvoiVocabulary::~MobvoiVocabulary() = default;

void MobvoiVocabulary::validate()
{
}

web::json::value MobvoiVocabulary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool MobvoiVocabulary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    return ok;
}


std::string MobvoiVocabulary::getContent() const
{
    return content_;
}

void MobvoiVocabulary::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool MobvoiVocabulary::contentIsSet() const
{
    return contentIsSet_;
}

void MobvoiVocabulary::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


