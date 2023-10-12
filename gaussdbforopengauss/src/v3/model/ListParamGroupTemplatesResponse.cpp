

#include "huaweicloud/gaussdbforopengauss/v3/model/ListParamGroupTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListParamGroupTemplatesResponse::ListParamGroupTemplatesResponse()
{
    count_ = 0;
    countIsSet_ = false;
    configurationsIsSet_ = false;
}

ListParamGroupTemplatesResponse::~ListParamGroupTemplatesResponse() = default;

void ListParamGroupTemplatesResponse::validate()
{
}

web::json::value ListParamGroupTemplatesResponse::toJson() const
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
bool ListParamGroupTemplatesResponse::fromJson(const web::json::value& val)
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
            std::vector<ConfigurationResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurations(refVal);
        }
    }
    return ok;
}


int32_t ListParamGroupTemplatesResponse::getCount() const
{
    return count_;
}

void ListParamGroupTemplatesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListParamGroupTemplatesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListParamGroupTemplatesResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ConfigurationResult>& ListParamGroupTemplatesResponse::getConfigurations()
{
    return configurations_;
}

void ListParamGroupTemplatesResponse::setConfigurations(const std::vector<ConfigurationResult>& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool ListParamGroupTemplatesResponse::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void ListParamGroupTemplatesResponse::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

}
}
}
}
}


