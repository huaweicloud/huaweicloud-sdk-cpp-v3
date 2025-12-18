

#include "huaweicloud/meeting/v1/model/AddCorpResDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddCorpResDTO::AddCorpResDTO()
{
    resourceIsSet_ = false;
}

AddCorpResDTO::~AddCorpResDTO() = default;

void AddCorpResDTO::validate()
{
}

web::json::value AddCorpResDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }

    return val;
}
bool AddCorpResDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    return ok;
}


std::vector<ResourceDTO>& AddCorpResDTO::getResource()
{
    return resource_;
}

void AddCorpResDTO::setResource(const std::vector<ResourceDTO>& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool AddCorpResDTO::resourceIsSet() const
{
    return resourceIsSet_;
}

void AddCorpResDTO::unsetresource()
{
    resourceIsSet_ = false;
}

}
}
}
}
}


