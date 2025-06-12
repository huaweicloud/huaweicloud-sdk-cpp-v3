

#include "huaweicloud/metastudio/v1/model/DeleteTtscVocabularyConfigsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteTtscVocabularyConfigsRequestBody::DeleteTtscVocabularyConfigsRequestBody()
{
    idIsSet_ = false;
}

DeleteTtscVocabularyConfigsRequestBody::~DeleteTtscVocabularyConfigsRequestBody() = default;

void DeleteTtscVocabularyConfigsRequestBody::validate()
{
}

web::json::value DeleteTtscVocabularyConfigsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteTtscVocabularyConfigsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeleteTtscVocabularyConfigsRequestBody::getId()
{
    return id_;
}

void DeleteTtscVocabularyConfigsRequestBody::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteTtscVocabularyConfigsRequestBody::idIsSet() const
{
    return idIsSet_;
}

void DeleteTtscVocabularyConfigsRequestBody::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


