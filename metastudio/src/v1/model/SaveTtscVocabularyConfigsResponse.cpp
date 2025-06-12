

#include "huaweicloud/metastudio/v1/model/SaveTtscVocabularyConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SaveTtscVocabularyConfigsResponse::SaveTtscVocabularyConfigsResponse()
{
    id_ = "";
    idIsSet_ = false;
}

SaveTtscVocabularyConfigsResponse::~SaveTtscVocabularyConfigsResponse() = default;

void SaveTtscVocabularyConfigsResponse::validate()
{
}

web::json::value SaveTtscVocabularyConfigsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool SaveTtscVocabularyConfigsResponse::fromJson(const web::json::value& val)
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


std::string SaveTtscVocabularyConfigsResponse::getId() const
{
    return id_;
}

void SaveTtscVocabularyConfigsResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SaveTtscVocabularyConfigsResponse::idIsSet() const
{
    return idIsSet_;
}

void SaveTtscVocabularyConfigsResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


