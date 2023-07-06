

#include "huaweicloud/mpc/v1/model/CommonCreateTaskReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CommonCreateTaskReq::CommonCreateTaskReq()
{
    inputIsSet_ = false;
    outputIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
}

CommonCreateTaskReq::~CommonCreateTaskReq() = default;

void CommonCreateTaskReq::validate()
{
}

web::json::value CommonCreateTaskReq::toJson() const
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

    return val;
}

bool CommonCreateTaskReq::fromJson(const web::json::value& val)
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
    return ok;
}

ObsObjInfo CommonCreateTaskReq::getInput() const
{
    return input_;
}

void CommonCreateTaskReq::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool CommonCreateTaskReq::inputIsSet() const
{
    return inputIsSet_;
}

void CommonCreateTaskReq::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo CommonCreateTaskReq::getOutput() const
{
    return output_;
}

void CommonCreateTaskReq::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool CommonCreateTaskReq::outputIsSet() const
{
    return outputIsSet_;
}

void CommonCreateTaskReq::unsetoutput()
{
    outputIsSet_ = false;
}

std::string CommonCreateTaskReq::getUserData() const
{
    return userData_;
}

void CommonCreateTaskReq::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool CommonCreateTaskReq::userDataIsSet() const
{
    return userDataIsSet_;
}

void CommonCreateTaskReq::unsetuserData()
{
    userDataIsSet_ = false;
}

}
}
}
}
}


