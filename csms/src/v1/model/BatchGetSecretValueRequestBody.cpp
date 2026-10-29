

#include "huaweicloud/csms/v1/model/BatchGetSecretValueRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




BatchGetSecretValueRequestBody::BatchGetSecretValueRequestBody()
{
    secretNameListIsSet_ = false;
}

BatchGetSecretValueRequestBody::~BatchGetSecretValueRequestBody() = default;

void BatchGetSecretValueRequestBody::validate()
{
}

web::json::value BatchGetSecretValueRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameListIsSet_) {
        val[utility::conversions::to_string_t("secret_name_list")] = ModelBase::toJson(secretNameList_);
    }

    return val;
}
bool BatchGetSecretValueRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_name_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretNameList(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchGetSecretValueRequestBody::getSecretNameList()
{
    return secretNameList_;
}

void BatchGetSecretValueRequestBody::setSecretNameList(const std::vector<std::string>& value)
{
    secretNameList_ = value;
    secretNameListIsSet_ = true;
}

bool BatchGetSecretValueRequestBody::secretNameListIsSet() const
{
    return secretNameListIsSet_;
}

void BatchGetSecretValueRequestBody::unsetsecretNameList()
{
    secretNameListIsSet_ = false;
}

}
}
}
}
}


