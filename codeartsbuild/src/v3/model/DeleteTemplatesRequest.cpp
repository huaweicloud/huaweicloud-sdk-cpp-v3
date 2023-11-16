

#include "huaweicloud/codeartsbuild/v3/model/DeleteTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteTemplatesRequest::DeleteTemplatesRequest()
{
    uuid_ = "";
    uuidIsSet_ = false;
}

DeleteTemplatesRequest::~DeleteTemplatesRequest() = default;

void DeleteTemplatesRequest::validate()
{
}

web::json::value DeleteTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }

    return val;
}
bool DeleteTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    return ok;
}


std::string DeleteTemplatesRequest::getUuid() const
{
    return uuid_;
}

void DeleteTemplatesRequest::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool DeleteTemplatesRequest::uuidIsSet() const
{
    return uuidIsSet_;
}

void DeleteTemplatesRequest::unsetuuid()
{
    uuidIsSet_ = false;
}

}
}
}
}
}


