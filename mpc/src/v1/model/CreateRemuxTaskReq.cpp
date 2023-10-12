

#include "huaweicloud/mpc/v1/model/CreateRemuxTaskReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateRemuxTaskReq::CreateRemuxTaskReq()
{
    inputIsSet_ = false;
    outputIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    outputParamIsSet_ = false;
}

CreateRemuxTaskReq::~CreateRemuxTaskReq() = default;

void CreateRemuxTaskReq::validate()
{
}

web::json::value CreateRemuxTaskReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(outputParamIsSet_) {
        val[utility::conversions::to_string_t("output_param")] = ModelBase::toJson(outputParam_);
    }

    return val;
}
bool CreateRemuxTaskReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_param"));
        if(!fieldValue.is_null())
        {
            RemuxOutputParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputParam(refVal);
        }
    }
    return ok;
}


ObsObjInfo CreateRemuxTaskReq::getInput() const
{
    return input_;
}

void CreateRemuxTaskReq::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool CreateRemuxTaskReq::inputIsSet() const
{
    return inputIsSet_;
}

void CreateRemuxTaskReq::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo CreateRemuxTaskReq::getOutput() const
{
    return output_;
}

void CreateRemuxTaskReq::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool CreateRemuxTaskReq::outputIsSet() const
{
    return outputIsSet_;
}

void CreateRemuxTaskReq::unsetoutput()
{
    outputIsSet_ = false;
}

std::string CreateRemuxTaskReq::getUserData() const
{
    return userData_;
}

void CreateRemuxTaskReq::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool CreateRemuxTaskReq::userDataIsSet() const
{
    return userDataIsSet_;
}

void CreateRemuxTaskReq::unsetuserData()
{
    userDataIsSet_ = false;
}

RemuxOutputParam CreateRemuxTaskReq::getOutputParam() const
{
    return outputParam_;
}

void CreateRemuxTaskReq::setOutputParam(const RemuxOutputParam& value)
{
    outputParam_ = value;
    outputParamIsSet_ = true;
}

bool CreateRemuxTaskReq::outputParamIsSet() const
{
    return outputParamIsSet_;
}

void CreateRemuxTaskReq::unsetoutputParam()
{
    outputParamIsSet_ = false;
}

}
}
}
}
}


