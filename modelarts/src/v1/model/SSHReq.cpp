

#include "huaweicloud/modelarts/v1/model/SSHReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SSHReq::SSHReq()
{
    keyPairNamesIsSet_ = false;
}

SSHReq::~SSHReq() = default;

void SSHReq::validate()
{
}

web::json::value SSHReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyPairNamesIsSet_) {
        val[utility::conversions::to_string_t("key_pair_names")] = ModelBase::toJson(keyPairNames_);
    }

    return val;
}
bool SSHReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_pair_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_pair_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyPairNames(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& SSHReq::getKeyPairNames()
{
    return keyPairNames_;
}

void SSHReq::setKeyPairNames(const std::vector<std::string>& value)
{
    keyPairNames_ = value;
    keyPairNamesIsSet_ = true;
}

bool SSHReq::keyPairNamesIsSet() const
{
    return keyPairNamesIsSet_;
}

void SSHReq::unsetkeyPairNames()
{
    keyPairNamesIsSet_ = false;
}

}
}
}
}
}


