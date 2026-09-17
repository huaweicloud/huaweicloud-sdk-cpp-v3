

#include "huaweicloud/codeartspipeline/v2/model/DeleteVariableGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeleteVariableGroupResponse::DeleteVariableGroupResponse()
{
    success_ = false;
    successIsSet_ = false;
}

DeleteVariableGroupResponse::~DeleteVariableGroupResponse() = default;

void DeleteVariableGroupResponse::validate()
{
}

web::json::value DeleteVariableGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool DeleteVariableGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    return ok;
}


bool DeleteVariableGroupResponse::isSuccess() const
{
    return success_;
}

void DeleteVariableGroupResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool DeleteVariableGroupResponse::successIsSet() const
{
    return successIsSet_;
}

void DeleteVariableGroupResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


