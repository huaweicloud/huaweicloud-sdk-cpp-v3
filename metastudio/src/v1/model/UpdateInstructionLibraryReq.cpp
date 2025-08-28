

#include "huaweicloud/metastudio/v1/model/UpdateInstructionLibraryReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateInstructionLibraryReq::UpdateInstructionLibraryReq()
{
    name_ = "";
    nameIsSet_ = false;
}

UpdateInstructionLibraryReq::~UpdateInstructionLibraryReq() = default;

void UpdateInstructionLibraryReq::validate()
{
}

web::json::value UpdateInstructionLibraryReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UpdateInstructionLibraryReq::fromJson(const web::json::value& val)
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


std::string UpdateInstructionLibraryReq::getName() const
{
    return name_;
}

void UpdateInstructionLibraryReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateInstructionLibraryReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateInstructionLibraryReq::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


