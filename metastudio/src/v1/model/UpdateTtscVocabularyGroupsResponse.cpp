

#include "huaweicloud/metastudio/v1/model/UpdateTtscVocabularyGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateTtscVocabularyGroupsResponse::UpdateTtscVocabularyGroupsResponse()
{
    id_ = "";
    idIsSet_ = false;
}

UpdateTtscVocabularyGroupsResponse::~UpdateTtscVocabularyGroupsResponse() = default;

void UpdateTtscVocabularyGroupsResponse::validate()
{
}

web::json::value UpdateTtscVocabularyGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool UpdateTtscVocabularyGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string UpdateTtscVocabularyGroupsResponse::getId() const
{
    return id_;
}

void UpdateTtscVocabularyGroupsResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateTtscVocabularyGroupsResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateTtscVocabularyGroupsResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


