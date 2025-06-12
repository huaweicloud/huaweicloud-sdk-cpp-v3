

#include "huaweicloud/metastudio/v1/model/CreateTtscVocabularyConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTtscVocabularyConfigsResponse::CreateTtscVocabularyConfigsResponse()
{
    id_ = "";
    idIsSet_ = false;
}

CreateTtscVocabularyConfigsResponse::~CreateTtscVocabularyConfigsResponse() = default;

void CreateTtscVocabularyConfigsResponse::validate()
{
}

web::json::value CreateTtscVocabularyConfigsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CreateTtscVocabularyConfigsResponse::fromJson(const web::json::value& val)
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


std::string CreateTtscVocabularyConfigsResponse::getId() const
{
    return id_;
}

void CreateTtscVocabularyConfigsResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateTtscVocabularyConfigsResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateTtscVocabularyConfigsResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


