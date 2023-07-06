

#include "huaweicloud/mpc/v1/model/CreateEncryptReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateEncryptReq::CreateEncryptReq()
{
    inputIsSet_ = false;
    outputIsSet_ = false;
    encryptionIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
}

CreateEncryptReq::~CreateEncryptReq() = default;

void CreateEncryptReq::validate()
{
}

web::json::value CreateEncryptReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(encryptionIsSet_) {
        val[utility::conversions::to_string_t("encryption")] = ModelBase::toJson(encryption_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }

    return val;
}

bool CreateEncryptReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encryption"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption"));
        if(!fieldValue.is_null())
        {
            Encryption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    return ok;
}

ObsObjInfo CreateEncryptReq::getInput() const
{
    return input_;
}

void CreateEncryptReq::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool CreateEncryptReq::inputIsSet() const
{
    return inputIsSet_;
}

void CreateEncryptReq::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo CreateEncryptReq::getOutput() const
{
    return output_;
}

void CreateEncryptReq::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool CreateEncryptReq::outputIsSet() const
{
    return outputIsSet_;
}

void CreateEncryptReq::unsetoutput()
{
    outputIsSet_ = false;
}

Encryption CreateEncryptReq::getEncryption() const
{
    return encryption_;
}

void CreateEncryptReq::setEncryption(const Encryption& value)
{
    encryption_ = value;
    encryptionIsSet_ = true;
}

bool CreateEncryptReq::encryptionIsSet() const
{
    return encryptionIsSet_;
}

void CreateEncryptReq::unsetencryption()
{
    encryptionIsSet_ = false;
}

std::string CreateEncryptReq::getUserData() const
{
    return userData_;
}

void CreateEncryptReq::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool CreateEncryptReq::userDataIsSet() const
{
    return userDataIsSet_;
}

void CreateEncryptReq::unsetuserData()
{
    userDataIsSet_ = false;
}

}
}
}
}
}


