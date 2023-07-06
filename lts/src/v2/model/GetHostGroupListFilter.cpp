

#include "huaweicloud/lts/v2/model/GetHostGroupListFilter.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




GetHostGroupListFilter::GetHostGroupListFilter()
{
    hostGroupType_ = "";
    hostGroupTypeIsSet_ = false;
    hostGroupNameListIsSet_ = false;
    hostNameListIsSet_ = false;
    hostGroupTagIsSet_ = false;
}

GetHostGroupListFilter::~GetHostGroupListFilter() = default;

void GetHostGroupListFilter::validate()
{
}

web::json::value GetHostGroupListFilter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostGroupTypeIsSet_) {
        val[utility::conversions::to_string_t("host_group_type")] = ModelBase::toJson(hostGroupType_);
    }
    if(hostGroupNameListIsSet_) {
        val[utility::conversions::to_string_t("host_group_name_list")] = ModelBase::toJson(hostGroupNameList_);
    }
    if(hostNameListIsSet_) {
        val[utility::conversions::to_string_t("host_name_list")] = ModelBase::toJson(hostNameList_);
    }
    if(hostGroupTagIsSet_) {
        val[utility::conversions::to_string_t("host_group_tag")] = ModelBase::toJson(hostGroupTag_);
    }

    return val;
}

bool GetHostGroupListFilter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("host_group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_group_name_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_group_name_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostGroupNameList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_name_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_name_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostNameList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_group_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_group_tag"));
        if(!fieldValue.is_null())
        {
            GetHostGroupListTag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostGroupTag(refVal);
        }
    }
    return ok;
}

std::string GetHostGroupListFilter::getHostGroupType() const
{
    return hostGroupType_;
}

void GetHostGroupListFilter::setHostGroupType(const std::string& value)
{
    hostGroupType_ = value;
    hostGroupTypeIsSet_ = true;
}

bool GetHostGroupListFilter::hostGroupTypeIsSet() const
{
    return hostGroupTypeIsSet_;
}

void GetHostGroupListFilter::unsethostGroupType()
{
    hostGroupTypeIsSet_ = false;
}

std::vector<std::string>& GetHostGroupListFilter::getHostGroupNameList()
{
    return hostGroupNameList_;
}

void GetHostGroupListFilter::setHostGroupNameList(const std::vector<std::string>& value)
{
    hostGroupNameList_ = value;
    hostGroupNameListIsSet_ = true;
}

bool GetHostGroupListFilter::hostGroupNameListIsSet() const
{
    return hostGroupNameListIsSet_;
}

void GetHostGroupListFilter::unsethostGroupNameList()
{
    hostGroupNameListIsSet_ = false;
}

std::vector<std::string>& GetHostGroupListFilter::getHostNameList()
{
    return hostNameList_;
}

void GetHostGroupListFilter::setHostNameList(const std::vector<std::string>& value)
{
    hostNameList_ = value;
    hostNameListIsSet_ = true;
}

bool GetHostGroupListFilter::hostNameListIsSet() const
{
    return hostNameListIsSet_;
}

void GetHostGroupListFilter::unsethostNameList()
{
    hostNameListIsSet_ = false;
}

GetHostGroupListTag GetHostGroupListFilter::getHostGroupTag() const
{
    return hostGroupTag_;
}

void GetHostGroupListFilter::setHostGroupTag(const GetHostGroupListTag& value)
{
    hostGroupTag_ = value;
    hostGroupTagIsSet_ = true;
}

bool GetHostGroupListFilter::hostGroupTagIsSet() const
{
    return hostGroupTagIsSet_;
}

void GetHostGroupListFilter::unsethostGroupTag()
{
    hostGroupTagIsSet_ = false;
}

}
}
}
}
}


