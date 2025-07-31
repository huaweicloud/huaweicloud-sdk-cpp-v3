

#include "huaweicloud/metastudio/v1/model/CreateTtscVocabularyGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTtscVocabularyGroupsResponse::CreateTtscVocabularyGroupsResponse()
{
    id_ = "";
    idIsSet_ = false;
}

CreateTtscVocabularyGroupsResponse::~CreateTtscVocabularyGroupsResponse() = default;

void CreateTtscVocabularyGroupsResponse::validate()
{
}

web::json::value CreateTtscVocabularyGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CreateTtscVocabularyGroupsResponse::fromJson(const web::json::value& val)
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


std::string CreateTtscVocabularyGroupsResponse::getId() const
{
    return id_;
}

void CreateTtscVocabularyGroupsResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateTtscVocabularyGroupsResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateTtscVocabularyGroupsResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


