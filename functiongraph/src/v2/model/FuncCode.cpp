

#include "huaweicloud/functiongraph/v2/model/FuncCode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




FuncCode::FuncCode()
{
    file_ = "";
    fileIsSet_ = false;
    link_ = "";
    linkIsSet_ = false;
}

FuncCode::~FuncCode() = default;

void FuncCode::validate()
{
}

web::json::value FuncCode::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileIsSet_) {
        val[utility::conversions::to_string_t("file")] = ModelBase::toJson(file_);
    }
    if(linkIsSet_) {
        val[utility::conversions::to_string_t("link")] = ModelBase::toJson(link_);
    }

    return val;
}
bool FuncCode::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLink(refVal);
        }
    }
    return ok;
}


std::string FuncCode::getFile() const
{
    return file_;
}

void FuncCode::setFile(const std::string& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool FuncCode::fileIsSet() const
{
    return fileIsSet_;
}

void FuncCode::unsetfile()
{
    fileIsSet_ = false;
}

std::string FuncCode::getLink() const
{
    return link_;
}

void FuncCode::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool FuncCode::linkIsSet() const
{
    return linkIsSet_;
}

void FuncCode::unsetlink()
{
    linkIsSet_ = false;
}

}
}
}
}
}


