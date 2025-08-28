

#include "huaweicloud/metastudio/v1/model/CreateInstructionLibraryReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateInstructionLibraryReq::CreateInstructionLibraryReq()
{
    name_ = "";
    nameIsSet_ = false;
}

CreateInstructionLibraryReq::~CreateInstructionLibraryReq() = default;

void CreateInstructionLibraryReq::validate()
{
}

web::json::value CreateInstructionLibraryReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool CreateInstructionLibraryReq::fromJson(const web::json::value& val)
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


std::string CreateInstructionLibraryReq::getName() const
{
    return name_;
}

void CreateInstructionLibraryReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateInstructionLibraryReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateInstructionLibraryReq::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


