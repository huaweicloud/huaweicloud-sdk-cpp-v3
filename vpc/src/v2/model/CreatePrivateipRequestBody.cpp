

#include "huaweicloud/vpc/v2/model/CreatePrivateipRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreatePrivateipRequestBody::CreatePrivateipRequestBody()
{
    privateipsIsSet_ = false;
}

CreatePrivateipRequestBody::~CreatePrivateipRequestBody() = default;

void CreatePrivateipRequestBody::validate()
{
}

web::json::value CreatePrivateipRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(privateipsIsSet_) {
        val[utility::conversions::to_string_t("privateips")] = ModelBase::toJson(privateips_);
    }

    return val;
}
bool CreatePrivateipRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("privateips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privateips"));
        if(!fieldValue.is_null())
        {
            std::vector<CreatePrivateipOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateips(refVal);
        }
    }
    return ok;
}


std::vector<CreatePrivateipOption>& CreatePrivateipRequestBody::getPrivateips()
{
    return privateips_;
}

void CreatePrivateipRequestBody::setPrivateips(const std::vector<CreatePrivateipOption>& value)
{
    privateips_ = value;
    privateipsIsSet_ = true;
}

bool CreatePrivateipRequestBody::privateipsIsSet() const
{
    return privateipsIsSet_;
}

void CreatePrivateipRequestBody::unsetprivateips()
{
    privateipsIsSet_ = false;
}

}
}
}
}
}


