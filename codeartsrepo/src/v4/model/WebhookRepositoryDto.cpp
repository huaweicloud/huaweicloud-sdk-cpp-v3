

#include "huaweicloud/codeartsrepo/v4/model/WebhookRepositoryDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




WebhookRepositoryDto::WebhookRepositoryDto()
{
    id_ = 0;
    idIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
}

WebhookRepositoryDto::~WebhookRepositoryDto() = default;

void WebhookRepositoryDto::validate()
{
}

web::json::value WebhookRepositoryDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }

    return val;
}
bool WebhookRepositoryDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    return ok;
}


int32_t WebhookRepositoryDto::getId() const
{
    return id_;
}

void WebhookRepositoryDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WebhookRepositoryDto::idIsSet() const
{
    return idIsSet_;
}

void WebhookRepositoryDto::unsetid()
{
    idIsSet_ = false;
}

std::string WebhookRepositoryDto::getNamespace() const
{
    return namespace_;
}

void WebhookRepositoryDto::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool WebhookRepositoryDto::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void WebhookRepositoryDto::unsetnamespace()
{
    namespaceIsSet_ = false;
}

}
}
}
}
}


