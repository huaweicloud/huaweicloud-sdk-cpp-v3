

#include "huaweicloud/codeartspipeline/v2/model/ExtensionModuleList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ExtensionModuleList::ExtensionModuleList()
{
    dataIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ExtensionModuleList::~ExtensionModuleList() = default;

void ExtensionModuleList::validate()
{
}

web::json::value ExtensionModuleList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ExtensionModuleList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ExtensionModule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<ExtensionModule>& ExtensionModuleList::getData()
{
    return data_;
}

void ExtensionModuleList::setData(const std::vector<ExtensionModule>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ExtensionModuleList::dataIsSet() const
{
    return dataIsSet_;
}

void ExtensionModuleList::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ExtensionModuleList::getTotal() const
{
    return total_;
}

void ExtensionModuleList::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ExtensionModuleList::totalIsSet() const
{
    return totalIsSet_;
}

void ExtensionModuleList::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


