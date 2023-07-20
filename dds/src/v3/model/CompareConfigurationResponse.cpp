

#include "huaweicloud/dds/v3/model/CompareConfigurationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CompareConfigurationResponse::CompareConfigurationResponse()
{
    differencesIsSet_ = false;
}

CompareConfigurationResponse::~CompareConfigurationResponse() = default;

void CompareConfigurationResponse::validate()
{
}

web::json::value CompareConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(differencesIsSet_) {
        val[utility::conversions::to_string_t("differences")] = ModelBase::toJson(differences_);
    }

    return val;
}

bool CompareConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("differences"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("differences"));
        if(!fieldValue.is_null())
        {
            std::vector<DiffDetails> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDifferences(refVal);
        }
    }
    return ok;
}

std::vector<DiffDetails>& CompareConfigurationResponse::getDifferences()
{
    return differences_;
}

void CompareConfigurationResponse::setDifferences(const std::vector<DiffDetails>& value)
{
    differences_ = value;
    differencesIsSet_ = true;
}

bool CompareConfigurationResponse::differencesIsSet() const
{
    return differencesIsSet_;
}

void CompareConfigurationResponse::unsetdifferences()
{
    differencesIsSet_ = false;
}

}
}
}
}
}


