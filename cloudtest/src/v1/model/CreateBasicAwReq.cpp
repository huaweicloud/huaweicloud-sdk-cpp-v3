

#include "huaweicloud/cloudtest/v1/model/CreateBasicAwReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateBasicAwReq::CreateBasicAwReq()
{
    bodyParamType_ = "";
    bodyParamTypeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    dftCheckPointListIsSet_ = false;
    dftCustomHeaderIsSet_ = false;
    dftVariableListIsSet_ = false;
    extraInfoIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    paramTypeAndDftValueIsSet_ = false;
}

CreateBasicAwReq::~CreateBasicAwReq() = default;

void CreateBasicAwReq::validate()
{
}

web::json::value CreateBasicAwReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyParamTypeIsSet_) {
        val[utility::conversions::to_string_t("body_param_type")] = ModelBase::toJson(bodyParamType_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(dftCheckPointListIsSet_) {
        val[utility::conversions::to_string_t("dft_check_point_list")] = ModelBase::toJson(dftCheckPointList_);
    }
    if(dftCustomHeaderIsSet_) {
        val[utility::conversions::to_string_t("dft_custom_header")] = ModelBase::toJson(dftCustomHeader_);
    }
    if(dftVariableListIsSet_) {
        val[utility::conversions::to_string_t("dft_variable_list")] = ModelBase::toJson(dftVariableList_);
    }
    if(extraInfoIsSet_) {
        val[utility::conversions::to_string_t("extra_info")] = ModelBase::toJson(extraInfo_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(paramTypeAndDftValueIsSet_) {
        val[utility::conversions::to_string_t("param_type_and_dft_value")] = ModelBase::toJson(paramTypeAndDftValue_);
    }

    return val;
}
bool CreateBasicAwReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body_param_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body_param_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBodyParamType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dft_check_point_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dft_check_point_list"));
        if(!fieldValue.is_null())
        {
            std::vector<CheckPoint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftCheckPointList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dft_custom_header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dft_custom_header"));
        if(!fieldValue.is_null())
        {
            std::vector<AwParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftCustomHeader(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dft_variable_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dft_variable_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AwVariable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftVariableList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_info"));
        if(!fieldValue.is_null())
        {
            ExtraInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param_type_and_dft_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_type_and_dft_value"));
        if(!fieldValue.is_null())
        {
            std::vector<AwParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamTypeAndDftValue(refVal);
        }
    }
    return ok;
}


std::string CreateBasicAwReq::getBodyParamType() const
{
    return bodyParamType_;
}

void CreateBasicAwReq::setBodyParamType(const std::string& value)
{
    bodyParamType_ = value;
    bodyParamTypeIsSet_ = true;
}

bool CreateBasicAwReq::bodyParamTypeIsSet() const
{
    return bodyParamTypeIsSet_;
}

void CreateBasicAwReq::unsetbodyParamType()
{
    bodyParamTypeIsSet_ = false;
}

std::string CreateBasicAwReq::getDescription() const
{
    return description_;
}

void CreateBasicAwReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateBasicAwReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateBasicAwReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<CheckPoint>& CreateBasicAwReq::getDftCheckPointList()
{
    return dftCheckPointList_;
}

void CreateBasicAwReq::setDftCheckPointList(const std::vector<CheckPoint>& value)
{
    dftCheckPointList_ = value;
    dftCheckPointListIsSet_ = true;
}

bool CreateBasicAwReq::dftCheckPointListIsSet() const
{
    return dftCheckPointListIsSet_;
}

void CreateBasicAwReq::unsetdftCheckPointList()
{
    dftCheckPointListIsSet_ = false;
}

std::vector<AwParam>& CreateBasicAwReq::getDftCustomHeader()
{
    return dftCustomHeader_;
}

void CreateBasicAwReq::setDftCustomHeader(const std::vector<AwParam>& value)
{
    dftCustomHeader_ = value;
    dftCustomHeaderIsSet_ = true;
}

bool CreateBasicAwReq::dftCustomHeaderIsSet() const
{
    return dftCustomHeaderIsSet_;
}

void CreateBasicAwReq::unsetdftCustomHeader()
{
    dftCustomHeaderIsSet_ = false;
}

std::vector<AwVariable>& CreateBasicAwReq::getDftVariableList()
{
    return dftVariableList_;
}

void CreateBasicAwReq::setDftVariableList(const std::vector<AwVariable>& value)
{
    dftVariableList_ = value;
    dftVariableListIsSet_ = true;
}

bool CreateBasicAwReq::dftVariableListIsSet() const
{
    return dftVariableListIsSet_;
}

void CreateBasicAwReq::unsetdftVariableList()
{
    dftVariableListIsSet_ = false;
}

ExtraInfo CreateBasicAwReq::getExtraInfo() const
{
    return extraInfo_;
}

void CreateBasicAwReq::setExtraInfo(const ExtraInfo& value)
{
    extraInfo_ = value;
    extraInfoIsSet_ = true;
}

bool CreateBasicAwReq::extraInfoIsSet() const
{
    return extraInfoIsSet_;
}

void CreateBasicAwReq::unsetextraInfo()
{
    extraInfoIsSet_ = false;
}

std::string CreateBasicAwReq::getGroupName() const
{
    return groupName_;
}

void CreateBasicAwReq::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool CreateBasicAwReq::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void CreateBasicAwReq::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string CreateBasicAwReq::getName() const
{
    return name_;
}

void CreateBasicAwReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateBasicAwReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateBasicAwReq::unsetname()
{
    nameIsSet_ = false;
}

std::vector<AwParam>& CreateBasicAwReq::getParamTypeAndDftValue()
{
    return paramTypeAndDftValue_;
}

void CreateBasicAwReq::setParamTypeAndDftValue(const std::vector<AwParam>& value)
{
    paramTypeAndDftValue_ = value;
    paramTypeAndDftValueIsSet_ = true;
}

bool CreateBasicAwReq::paramTypeAndDftValueIsSet() const
{
    return paramTypeAndDftValueIsSet_;
}

void CreateBasicAwReq::unsetparamTypeAndDftValue()
{
    paramTypeAndDftValueIsSet_ = false;
}

}
}
}
}
}


