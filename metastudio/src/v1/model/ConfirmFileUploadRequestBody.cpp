

#include "huaweicloud/metastudio/v1/model/ConfirmFileUploadRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ConfirmFileUploadRequestBody::ConfirmFileUploadRequestBody()
{
    state_ = "";
    stateIsSet_ = false;
}

ConfirmFileUploadRequestBody::~ConfirmFileUploadRequestBody() = default;

void ConfirmFileUploadRequestBody::validate()
{
}

web::json::value ConfirmFileUploadRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }

    return val;
}
bool ConfirmFileUploadRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    return ok;
}


std::string ConfirmFileUploadRequestBody::getState() const
{
    return state_;
}

void ConfirmFileUploadRequestBody::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ConfirmFileUploadRequestBody::stateIsSet() const
{
    return stateIsSet_;
}

void ConfirmFileUploadRequestBody::unsetstate()
{
    stateIsSet_ = false;
}

}
}
}
}
}


