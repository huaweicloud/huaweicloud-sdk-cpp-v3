

#include "huaweicloud/cfw/v1/model/BatchDeleteAclRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteAclRulesResponse::BatchDeleteAclRulesResponse()
{
    dataIsSet_ = false;
}

BatchDeleteAclRulesResponse::~BatchDeleteAclRulesResponse() = default;

void BatchDeleteAclRulesResponse::validate()
{
}

web::json::value BatchDeleteAclRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchDeleteAclRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            BatchDeleteAclRulesResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


BatchDeleteAclRulesResponseData BatchDeleteAclRulesResponse::getData() const
{
    return data_;
}

void BatchDeleteAclRulesResponse::setData(const BatchDeleteAclRulesResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchDeleteAclRulesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchDeleteAclRulesResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


