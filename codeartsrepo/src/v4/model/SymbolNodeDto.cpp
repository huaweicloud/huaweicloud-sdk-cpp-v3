

#include "huaweicloud/codeartsrepo/v4/model/SymbolNodeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




SymbolNodeDto::SymbolNodeDto()
{
    defIsSet_ = false;
    childrenIsSet_ = false;
}

SymbolNodeDto::~SymbolNodeDto() = default;

void SymbolNodeDto::validate()
{
}

web::json::value SymbolNodeDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(defIsSet_) {
        val[utility::conversions::to_string_t("def")] = ModelBase::toJson(def_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(*children_);
    }

    return val;
}
bool SymbolNodeDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("def"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("def"));
        if(!fieldValue.is_null())
        {
            DefEntryDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<SymbolNodeDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    return ok;
}


DefEntryDto SymbolNodeDto::getDef() const
{
    return def_;
}

void SymbolNodeDto::setDef(const DefEntryDto& value)
{
    def_ = value;
    defIsSet_ = true;
}

bool SymbolNodeDto::defIsSet() const
{
    return defIsSet_;
}

void SymbolNodeDto::unsetdef()
{
    defIsSet_ = false;
}

std::vector<SymbolNodeDto>& SymbolNodeDto::getChildren()
{
    return *children_;
}

void SymbolNodeDto::setChildren(const std::vector<SymbolNodeDto>& value)
{
    *children_ = value;
    childrenIsSet_ = true;
}

bool SymbolNodeDto::childrenIsSet() const
{
    return childrenIsSet_;
}

void SymbolNodeDto::unsetchildren()
{
    childrenIsSet_ = false;
}

}
}
}
}
}


