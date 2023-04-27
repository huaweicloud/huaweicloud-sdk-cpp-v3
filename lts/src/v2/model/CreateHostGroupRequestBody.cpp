

#include "huaweicloud/lts/v2/model/CreateHostGroupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateHostGroupRequestBody::CreateHostGroupRequestBody()
{
    hostGroupName_ = "";
    hostGroupNameIsSet_ = false;
    hostGroupType_ = "";
    hostGroupTypeIsSet_ = false;
    hostIdListIsSet_ = false;
    hostGroupTagIsSet_ = false;
}

CreateHostGroupRequestBody::~CreateHostGroupRequestBody() = default;

void CreateHostGroupRequestBody::validate()
{
}

web::json::value CreateHostGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostGroupNameIsSet_) {
        val[utility::conversions::to_string_t("host_group_name")] = ModelBase::toJson(hostGroupName_);
    }
    if(hostGroupTypeIsSet_) {
        val[utility::conversions::to_string_t("host_group_type")] = ModelBase::toJson(hostGroupType_);
    }
    if(hostIdListIsSet_) {
        val[utility::conversions::to_string_t("host_id_list")] = ModelBase::toJson(hostIdList_);
    }
    if(hostGroupTagIsSet_) {
        val[utility::conversions::to_string_t("host_group_tag")] = ModelBase::toJson(hostGroupTag_);
    }

    return val;
}

bool CreateHostGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("host_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostIdList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_group_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_group_tag"));
        if(!fieldValue.is_null())
        {
            std::vector<HostGroupTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostGroupTag(refVal);
        }
    }
    return ok;
}


std::string CreateHostGroupRequestBody::getHostGroupName() const
{
    return hostGroupName_;
}

void CreateHostGroupRequestBody::setHostGroupName(const std::string& value)
{
    hostGroupName_ = value;
    hostGroupNameIsSet_ = true;
}

bool CreateHostGroupRequestBody::hostGroupNameIsSet() const
{
    return hostGroupNameIsSet_;
}

void CreateHostGroupRequestBody::unsethostGroupName()
{
    hostGroupNameIsSet_ = false;
}

std::string CreateHostGroupRequestBody::getHostGroupType() const
{
    return hostGroupType_;
}

void CreateHostGroupRequestBody::setHostGroupType(const std::string& value)
{
    hostGroupType_ = value;
    hostGroupTypeIsSet_ = true;
}

bool CreateHostGroupRequestBody::hostGroupTypeIsSet() const
{
    return hostGroupTypeIsSet_;
}

void CreateHostGroupRequestBody::unsethostGroupType()
{
    hostGroupTypeIsSet_ = false;
}

std::vector<std::string>& CreateHostGroupRequestBody::getHostIdList()
{
    return hostIdList_;
}

void CreateHostGroupRequestBody::setHostIdList(const std::vector<std::string>& value)
{
    hostIdList_ = value;
    hostIdListIsSet_ = true;
}

bool CreateHostGroupRequestBody::hostIdListIsSet() const
{
    return hostIdListIsSet_;
}

void CreateHostGroupRequestBody::unsethostIdList()
{
    hostIdListIsSet_ = false;
}

std::vector<HostGroupTag>& CreateHostGroupRequestBody::getHostGroupTag()
{
    return hostGroupTag_;
}

void CreateHostGroupRequestBody::setHostGroupTag(const std::vector<HostGroupTag>& value)
{
    hostGroupTag_ = value;
    hostGroupTagIsSet_ = true;
}

bool CreateHostGroupRequestBody::hostGroupTagIsSet() const
{
    return hostGroupTagIsSet_;
}

void CreateHostGroupRequestBody::unsethostGroupTag()
{
    hostGroupTagIsSet_ = false;
}

}
}
}
}
}


