

#include "huaweicloud/gaussdbforopengauss/v3/model/ListConfigurationsDiffResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListConfigurationsDiffResponse::ListConfigurationsDiffResponse()
{
    differencesIsSet_ = false;
}

ListConfigurationsDiffResponse::~ListConfigurationsDiffResponse() = default;

void ListConfigurationsDiffResponse::validate()
{
}

web::json::value ListConfigurationsDiffResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(differencesIsSet_) {
        val[utility::conversions::to_string_t("differences")] = ModelBase::toJson(differences_);
    }

    return val;
}
bool ListConfigurationsDiffResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("differences"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("differences"));
        if(!fieldValue.is_null())
        {
            std::vector<ListDiffDetailsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDifferences(refVal);
        }
    }
    return ok;
}


std::vector<ListDiffDetailsResult>& ListConfigurationsDiffResponse::getDifferences()
{
    return differences_;
}

void ListConfigurationsDiffResponse::setDifferences(const std::vector<ListDiffDetailsResult>& value)
{
    differences_ = value;
    differencesIsSet_ = true;
}

bool ListConfigurationsDiffResponse::differencesIsSet() const
{
    return differencesIsSet_;
}

void ListConfigurationsDiffResponse::unsetdifferences()
{
    differencesIsSet_ = false;
}

}
}
}
}
}


