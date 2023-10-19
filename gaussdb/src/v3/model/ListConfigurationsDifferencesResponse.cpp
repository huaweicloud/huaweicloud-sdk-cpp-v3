

#include "huaweicloud/gaussdb/v3/model/ListConfigurationsDifferencesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListConfigurationsDifferencesResponse::ListConfigurationsDifferencesResponse()
{
    differencesIsSet_ = false;
}

ListConfigurationsDifferencesResponse::~ListConfigurationsDifferencesResponse() = default;

void ListConfigurationsDifferencesResponse::validate()
{
}

web::json::value ListConfigurationsDifferencesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(differencesIsSet_) {
        val[utility::conversions::to_string_t("differences")] = ModelBase::toJson(differences_);
    }

    return val;
}
bool ListConfigurationsDifferencesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("differences"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("differences"));
        if(!fieldValue.is_null())
        {
            std::vector<ParamGroupParameterDifferences> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDifferences(refVal);
        }
    }
    return ok;
}


std::vector<ParamGroupParameterDifferences>& ListConfigurationsDifferencesResponse::getDifferences()
{
    return differences_;
}

void ListConfigurationsDifferencesResponse::setDifferences(const std::vector<ParamGroupParameterDifferences>& value)
{
    differences_ = value;
    differencesIsSet_ = true;
}

bool ListConfigurationsDifferencesResponse::differencesIsSet() const
{
    return differencesIsSet_;
}

void ListConfigurationsDifferencesResponse::unsetdifferences()
{
    differencesIsSet_ = false;
}

}
}
}
}
}


