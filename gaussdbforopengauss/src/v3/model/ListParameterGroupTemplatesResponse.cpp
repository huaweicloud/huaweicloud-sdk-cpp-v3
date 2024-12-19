

#include "huaweicloud/gaussdbforopengauss/v3/model/ListParameterGroupTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListParameterGroupTemplatesResponse::ListParameterGroupTemplatesResponse()
{
    count_ = 0;
    countIsSet_ = false;
    configurationsIsSet_ = false;
}

ListParameterGroupTemplatesResponse::~ListParameterGroupTemplatesResponse() = default;

void ListParameterGroupTemplatesResponse::validate()
{
}

web::json::value ListParameterGroupTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(configurationsIsSet_) {
        val[utility::conversions::to_string_t("configurations")] = ModelBase::toJson(configurations_);
    }

    return val;
}
bool ListParameterGroupTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configurations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurations"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigurationsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurations(refVal);
        }
    }
    return ok;
}


int32_t ListParameterGroupTemplatesResponse::getCount() const
{
    return count_;
}

void ListParameterGroupTemplatesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListParameterGroupTemplatesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListParameterGroupTemplatesResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ConfigurationsResult>& ListParameterGroupTemplatesResponse::getConfigurations()
{
    return configurations_;
}

void ListParameterGroupTemplatesResponse::setConfigurations(const std::vector<ConfigurationsResult>& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool ListParameterGroupTemplatesResponse::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void ListParameterGroupTemplatesResponse::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

}
}
}
}
}


