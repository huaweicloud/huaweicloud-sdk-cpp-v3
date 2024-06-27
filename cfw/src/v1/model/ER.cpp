

#include "huaweicloud/cfw/v1/model/ER.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ER::ER()
{
    erId_ = "";
    erIdIsSet_ = false;
    erAttachId_ = "";
    erAttachIdIsSet_ = false;
}

ER::~ER() = default;

void ER::validate()
{
}

web::json::value ER::toJson() const
{
    web::json::value val = web::json::value::object();

    if(erIdIsSet_) {
        val[utility::conversions::to_string_t("er_id")] = ModelBase::toJson(erId_);
    }
    if(erAttachIdIsSet_) {
        val[utility::conversions::to_string_t("er_attach_id")] = ModelBase::toJson(erAttachId_);
    }

    return val;
}
bool ER::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("er_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("er_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("er_attach_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("er_attach_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErAttachId(refVal);
        }
    }
    return ok;
}


std::string ER::getErId() const
{
    return erId_;
}

void ER::setErId(const std::string& value)
{
    erId_ = value;
    erIdIsSet_ = true;
}

bool ER::erIdIsSet() const
{
    return erIdIsSet_;
}

void ER::unseterId()
{
    erIdIsSet_ = false;
}

std::string ER::getErAttachId() const
{
    return erAttachId_;
}

void ER::setErAttachId(const std::string& value)
{
    erAttachId_ = value;
    erAttachIdIsSet_ = true;
}

bool ER::erAttachIdIsSet() const
{
    return erAttachIdIsSet_;
}

void ER::unseterAttachId()
{
    erAttachIdIsSet_ = false;
}

}
}
}
}
}


