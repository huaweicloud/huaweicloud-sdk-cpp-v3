

#include "huaweicloud/dbss/v1/model/ChangeNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ChangeNameRequest::ChangeNameRequest()
{
    newName_ = "";
    newNameIsSet_ = false;
}

ChangeNameRequest::~ChangeNameRequest() = default;

void ChangeNameRequest::validate()
{
}

web::json::value ChangeNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newNameIsSet_) {
        val[utility::conversions::to_string_t("new_name")] = ModelBase::toJson(newName_);
    }

    return val;
}
bool ChangeNameRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("new_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewName(refVal);
        }
    }
    return ok;
}


std::string ChangeNameRequest::getNewName() const
{
    return newName_;
}

void ChangeNameRequest::setNewName(const std::string& value)
{
    newName_ = value;
    newNameIsSet_ = true;
}

bool ChangeNameRequest::newNameIsSet() const
{
    return newNameIsSet_;
}

void ChangeNameRequest::unsetnewName()
{
    newNameIsSet_ = false;
}

}
}
}
}
}


