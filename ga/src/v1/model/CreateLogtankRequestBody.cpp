

#include "huaweicloud/ga/v1/model/CreateLogtankRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateLogtankRequestBody::CreateLogtankRequestBody()
{
    logtankIsSet_ = false;
}

CreateLogtankRequestBody::~CreateLogtankRequestBody() = default;

void CreateLogtankRequestBody::validate()
{
}

web::json::value CreateLogtankRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logtankIsSet_) {
        val[utility::conversions::to_string_t("logtank")] = ModelBase::toJson(logtank_);
    }

    return val;
}
bool CreateLogtankRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("logtank"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logtank"));
        if(!fieldValue.is_null())
        {
            CreateLogtankOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogtank(refVal);
        }
    }
    return ok;
}


CreateLogtankOption CreateLogtankRequestBody::getLogtank() const
{
    return logtank_;
}

void CreateLogtankRequestBody::setLogtank(const CreateLogtankOption& value)
{
    logtank_ = value;
    logtankIsSet_ = true;
}

bool CreateLogtankRequestBody::logtankIsSet() const
{
    return logtankIsSet_;
}

void CreateLogtankRequestBody::unsetlogtank()
{
    logtankIsSet_ = false;
}

}
}
}
}
}


