
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipSegmentsRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipSegmentsRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  ListGlobalEipSegmentsRequest
    : public ModelBase
{
public:
    ListGlobalEipSegmentsRequest();
    virtual ~ListGlobalEipSegmentsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGlobalEipSegmentsRequest members

    /// <summary>
    /// 每页条数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页起始点
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 分页起始点
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 翻页方向
    /// </summary>

    bool isPageReverse() const;
    bool pageReverseIsSet() const;
    void unsetpageReverse();
    void setPageReverse(bool value);

    /// <summary>
    /// 只显示指定的字段
    /// </summary>

    std::vector<std::string>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::vector<std::string>& value);

    /// <summary>
    /// 按照sort_key指定的字段排序
    /// </summary>

    std::vector<std::string>& getSortKey();
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::vector<std::string>& value);

    /// <summary>
    /// 排序的方向，倒序或者正序
    /// </summary>

    std::vector<std::string>& getSortDir();
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::vector<std::string>& value);

    /// <summary>
    /// 根据资源ID过滤
    /// </summary>

    std::vector<std::string>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(const std::vector<std::string>& value);

    /// <summary>
    /// 根据全域公网带宽的ID过滤
    /// </summary>

    std::vector<std::string>& getInternetBandwidthId();
    bool internetBandwidthIdIsSet() const;
    void unsetinternetBandwidthId();
    void setInternetBandwidthId(const std::vector<std::string>& value);

    /// <summary>
    /// 根据名称过滤
    /// </summary>

    std::vector<std::string>& getName();
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::vector<std::string>& value);

    /// <summary>
    /// 根据名称模糊匹配
    /// </summary>

    std::string getNameLike() const;
    bool nameLikeIsSet() const;
    void unsetnameLike();
    void setNameLike(const std::string& value);

    /// <summary>
    /// 根据接入点过滤
    /// </summary>

    std::vector<std::string>& getAccessSite();
    bool accessSiteIsSet() const;
    void unsetaccessSite();
    void setAccessSite(const std::vector<std::string>& value);

    /// <summary>
    /// 根据全域弹性公网IP池名称过滤
    /// </summary>

    std::vector<std::string>& getGeipPoolName();
    bool geipPoolNameIsSet() const;
    void unsetgeipPoolName();
    void setGeipPoolName(const std::vector<std::string>& value);

    /// <summary>
    /// 根据运营商线路过滤
    /// </summary>

    std::vector<std::string>& getIsp();
    bool ispIsSet() const;
    void unsetisp();
    void setIsp(const std::vector<std::string>& value);

    /// <summary>
    /// 根据可分配的IP版本过滤
    /// </summary>

    std::vector<int32_t>& getIpVersion();
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(std::vector<int32_t> value);

    /// <summary>
    /// 根据分配的CIDR过滤
    /// </summary>

    std::vector<std::string>& getCidr();
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::vector<std::string>& value);

    /// <summary>
    /// 根据分配的IPv6 CIDR过滤
    /// </summary>

    std::vector<std::string>& getCidrV6();
    bool cidrV6IsSet() const;
    void unsetcidrV6();
    void setCidrV6(const std::vector<std::string>& value);

    /// <summary>
    /// 根据是否冻结过滤
    /// </summary>

    std::vector<bool>& getFreezen();
    bool freezenIsSet() const;
    void unsetfreezen();
    void setFreezen(std::vector<bool> value);

    /// <summary>
    /// 根据是否绑定全域公网带宽过滤
    /// </summary>

    std::vector<bool>& getInternetBandwidthIsNull();
    bool internetBandwidthIsNullIsSet() const;
    void unsetinternetBandwidthIsNull();
    void setInternetBandwidthIsNull(std::vector<bool> value);

    /// <summary>
    /// 根据状态过滤
    /// </summary>

    std::vector<std::string>& getStatus();
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::vector<std::string>& value);

    /// <summary>
    /// 根据绑定实例所属的局点过滤
    /// </summary>

    std::vector<std::string>& getAssociateInstanceRegion();
    bool associateInstanceRegionIsSet() const;
    void unsetassociateInstanceRegion();
    void setAssociateInstanceRegion(const std::vector<std::string>& value);

    /// <summary>
    /// 根据绑定实例的类型过滤
    /// </summary>

    std::vector<std::string>& getAssociateInstanceInstanceType();
    bool associateInstanceInstanceTypeIsSet() const;
    void unsetassociateInstanceInstanceType();
    void setAssociateInstanceInstanceType(const std::vector<std::string>& value);

    /// <summary>
    /// 根据绑定实例所属的边缘信息过滤
    /// </summary>

    std::vector<std::string>& getAssociateInstancePublicBorderGroup();
    bool associateInstancePublicBorderGroupIsSet() const;
    void unsetassociateInstancePublicBorderGroup();
    void setAssociateInstancePublicBorderGroup(const std::vector<std::string>& value);

    /// <summary>
    /// 根据绑定实例所在的站点过滤
    /// </summary>

    std::vector<std::string>& getAssociateInstanceInstanceSite();
    bool associateInstanceInstanceSiteIsSet() const;
    void unsetassociateInstanceInstanceSite();
    void setAssociateInstanceInstanceSite(const std::vector<std::string>& value);

    /// <summary>
    /// 根据绑定实例的ID过滤
    /// </summary>

    std::vector<std::string>& getAssociateInstanceInstanceId();
    bool associateInstanceInstanceIdIsSet() const;
    void unsetassociateInstanceInstanceId();
    void setAssociateInstanceInstanceId(const std::vector<std::string>& value);

    /// <summary>
    /// 根据绑定实例所属的项目ID过滤
    /// </summary>

    std::vector<std::string>& getAssociateInstanceProjectId();
    bool associateInstanceProjectIdIsSet() const;
    void unsetassociateInstanceProjectId();
    void setAssociateInstanceProjectId(const std::vector<std::string>& value);

    /// <summary>
    /// 根据绑定实例所属的服务ID过滤
    /// </summary>

    std::vector<std::string>& getAssociateInstanceServiceId();
    bool associateInstanceServiceIdIsSet() const;
    void unsetassociateInstanceServiceId();
    void setAssociateInstanceServiceId(const std::vector<std::string>& value);

    /// <summary>
    /// 根据绑定实例的服务类型过滤
    /// </summary>

    std::vector<std::string>& getAssociateInstanceServiceType();
    bool associateInstanceServiceTypeIsSet() const;
    void unsetassociateInstanceServiceType();
    void setAssociateInstanceServiceType(const std::vector<std::string>& value);

    /// <summary>
    /// 根据企业项目ID过滤
    /// </summary>

    std::vector<std::string>& getEnterpriseProjectId();
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::vector<std::string>& value);

    /// <summary>
    /// 根据标签过滤
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string marker_;
    bool markerIsSet_;
    bool pageReverse_;
    bool pageReverseIsSet_;
    std::vector<std::string> fields_;
    bool fieldsIsSet_;
    std::vector<std::string> sortKey_;
    bool sortKeyIsSet_;
    std::vector<std::string> sortDir_;
    bool sortDirIsSet_;
    std::vector<std::string> id_;
    bool idIsSet_;
    std::vector<std::string> internetBandwidthId_;
    bool internetBandwidthIdIsSet_;
    std::vector<std::string> name_;
    bool nameIsSet_;
    std::string nameLike_;
    bool nameLikeIsSet_;
    std::vector<std::string> accessSite_;
    bool accessSiteIsSet_;
    std::vector<std::string> geipPoolName_;
    bool geipPoolNameIsSet_;
    std::vector<std::string> isp_;
    bool ispIsSet_;
    std::vector<int32_t> ipVersion_;
    bool ipVersionIsSet_;
    std::vector<std::string> cidr_;
    bool cidrIsSet_;
    std::vector<std::string> cidrV6_;
    bool cidrV6IsSet_;
    std::vector<bool> freezen_;
    bool freezenIsSet_;
    std::vector<bool> internetBandwidthIsNull_;
    bool internetBandwidthIsNullIsSet_;
    std::vector<std::string> status_;
    bool statusIsSet_;
    std::vector<std::string> associateInstanceRegion_;
    bool associateInstanceRegionIsSet_;
    std::vector<std::string> associateInstanceInstanceType_;
    bool associateInstanceInstanceTypeIsSet_;
    std::vector<std::string> associateInstancePublicBorderGroup_;
    bool associateInstancePublicBorderGroupIsSet_;
    std::vector<std::string> associateInstanceInstanceSite_;
    bool associateInstanceInstanceSiteIsSet_;
    std::vector<std::string> associateInstanceInstanceId_;
    bool associateInstanceInstanceIdIsSet_;
    std::vector<std::string> associateInstanceProjectId_;
    bool associateInstanceProjectIdIsSet_;
    std::vector<std::string> associateInstanceServiceId_;
    bool associateInstanceServiceIdIsSet_;
    std::vector<std::string> associateInstanceServiceType_;
    bool associateInstanceServiceTypeIsSet_;
    std::vector<std::string> enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListGlobalEipSegmentsRequest& dereference_from_shared_ptr(std::shared_ptr<ListGlobalEipSegmentsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipSegmentsRequest_H_
