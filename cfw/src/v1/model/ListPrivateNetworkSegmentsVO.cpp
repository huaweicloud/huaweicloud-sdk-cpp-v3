

#include "huaweicloud/cfw/v1/model/ListPrivateNetworkSegmentsVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListPrivateNetworkSegmentsVO::ListPrivateNetworkSegmentsVO()
{
    privateNetworkListIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    supportAzListIsSet_ = false;
}

ListPrivateNetworkSegmentsVO::~ListPrivateNetworkSegmentsVO() = default;

void ListPrivateNetworkSegmentsVO::validate()
{
}

web::json::value ListPrivateNetworkSegmentsVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(privateNetworkListIsSet_) {
        val[utility::conversions::to_string_t("private_network_list")] = ModelBase::toJson(privateNetworkList_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(supportAzListIsSet_) {
        val[utility::conversions::to_string_t("support_az_list")] = ModelBase::toJson(supportAzList_);
    }

    return val;
}
bool ListPrivateNetworkSegmentsVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("private_network_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_network_list"));
        if(!fieldValue.is_null())
        {
            std::vector<PrivateNetworkSegmentVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateNetworkList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_az_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_az_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportAzList(refVal);
        }
    }
    return ok;
}


std::vector<PrivateNetworkSegmentVO>& ListPrivateNetworkSegmentsVO::getPrivateNetworkList()
{
    return privateNetworkList_;
}

void ListPrivateNetworkSegmentsVO::setPrivateNetworkList(const std::vector<PrivateNetworkSegmentVO>& value)
{
    privateNetworkList_ = value;
    privateNetworkListIsSet_ = true;
}

bool ListPrivateNetworkSegmentsVO::privateNetworkListIsSet() const
{
    return privateNetworkListIsSet_;
}

void ListPrivateNetworkSegmentsVO::unsetprivateNetworkList()
{
    privateNetworkListIsSet_ = false;
}

int32_t ListPrivateNetworkSegmentsVO::getTotal() const
{
    return total_;
}

void ListPrivateNetworkSegmentsVO::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListPrivateNetworkSegmentsVO::totalIsSet() const
{
    return totalIsSet_;
}

void ListPrivateNetworkSegmentsVO::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ListPrivateNetworkSegmentsVO::getQuota() const
{
    return quota_;
}

void ListPrivateNetworkSegmentsVO::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool ListPrivateNetworkSegmentsVO::quotaIsSet() const
{
    return quotaIsSet_;
}

void ListPrivateNetworkSegmentsVO::unsetquota()
{
    quotaIsSet_ = false;
}

std::vector<std::string>& ListPrivateNetworkSegmentsVO::getSupportAzList()
{
    return supportAzList_;
}

void ListPrivateNetworkSegmentsVO::setSupportAzList(const std::vector<std::string>& value)
{
    supportAzList_ = value;
    supportAzListIsSet_ = true;
}

bool ListPrivateNetworkSegmentsVO::supportAzListIsSet() const
{
    return supportAzListIsSet_;
}

void ListPrivateNetworkSegmentsVO::unsetsupportAzList()
{
    supportAzListIsSet_ = false;
}

}
}
}
}
}


