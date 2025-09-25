

#include "huaweicloud/codeartspipeline/v2/model/CodeSource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CodeSource::CodeSource()
{
    type_ = "";
    typeIsSet_ = false;
    paramsIsSet_ = false;
}

CodeSource::~CodeSource() = default;

void CodeSource::validate()
{
}

web::json::value CodeSource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CodeSource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            CodeSource_params refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string CodeSource::getType() const
{
    return type_;
}

void CodeSource::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CodeSource::typeIsSet() const
{
    return typeIsSet_;
}

void CodeSource::unsettype()
{
    typeIsSet_ = false;
}

CodeSource_params CodeSource::getParams() const
{
    return params_;
}

void CodeSource::setParams(const CodeSource_params& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CodeSource::paramsIsSet() const
{
    return paramsIsSet_;
}

void CodeSource::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


