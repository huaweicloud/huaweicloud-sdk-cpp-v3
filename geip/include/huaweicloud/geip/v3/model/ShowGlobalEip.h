
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ShowGlobalEip_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ShowGlobalEip_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/InternetBandwidthInfo.h>
#include <huaweicloud/geip/v3/model/InstanceInfo.h>
#include <huaweicloud/geip/v3/model/GlobalConnectionBandwidthInfo.h>
#include <huaweicloud/geip/v3/model/Tag.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  ShowGlobalEip
    : public ModelBase
{
public:
    ShowGlobalEip();
    virtual ~ShowGlobalEip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGlobalEip members

    /// <summary>
    /// 全域弹性公网IP的ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// - 功能说明：全域弹性公网IP名称 - 取值范围：1-64，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// - 功能说明：用户自定义的资源描述 - 约束：   - 值的长度最大512字符，由数字、字母、中文、_(下划线)、-（中划线）、.（点）组成。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// - 租户账号ID，获取租户账号ID请参见[租户账号ID](https://support.huaweicloud.com/api-iam/iam_17_0002.html)
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 接入点信息
    /// </summary>

    std::string getAccessSite() const;
    bool accessSiteIsSet() const;
    void unsetaccessSite();
    void setAccessSite(const std::string& value);

    /// <summary>
    /// 全域弹性公网IP池子名称
    /// </summary>

    std::string getGeipPoolName() const;
    bool geipPoolNameIsSet() const;
    void unsetgeipPoolName();
    void setGeipPoolName(const std::string& value);

    /// <summary>
    /// 全域弹性公网IP所属线路
    /// </summary>

    std::string getIsp() const;
    bool ispIsSet() const;
    void unsetisp();
    void setIsp(const std::string& value);

    /// <summary>
    /// - 功能说明：全域弹性公网IP的版本 - 取值范围：4、6
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

    /// <summary>
    /// IPv4地址
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// IPv6地址
    /// </summary>

    std::string getIpv6Address() const;
    bool ipv6AddressIsSet() const;
    void unsetipv6Address();
    void setIpv6Address(const std::string& value);

    /// <summary>
    /// 是否冻结
    /// </summary>

    bool isFreezen() const;
    bool freezenIsSet() const;
    void unsetfreezen();
    void setFreezen(bool value);

    /// <summary>
    /// 冻结原因
    /// </summary>

    std::string getFreezenInfo() const;
    bool freezenInfoIsSet() const;
    void unsetfreezenInfo();
    void setFreezenInfo(const std::string& value);

    /// <summary>
    /// 是否污染
    /// </summary>

    bool isPolluted() const;
    bool pollutedIsSet() const;
    void unsetpolluted();
    void setPolluted(bool value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>

    InternetBandwidthInfo getInternetBandwidthInfo() const;
    bool internetBandwidthInfoIsSet() const;
    void unsetinternetBandwidthInfo();
    void setInternetBandwidthInfo(const InternetBandwidthInfo& value);

    /// <summary>
    /// 
    /// </summary>

    GlobalConnectionBandwidthInfo getGlobalConnectionBandwidthInfo() const;
    bool globalConnectionBandwidthInfoIsSet() const;
    void unsetglobalConnectionBandwidthInfo();
    void setGlobalConnectionBandwidthInfo(const GlobalConnectionBandwidthInfo& value);

    /// <summary>
    /// 
    /// </summary>

    InstanceInfo getAssociateInstanceInfo() const;
    bool associateInstanceInfoIsSet() const;
    void unsetassociateInstanceInfo();
    void setAssociateInstanceInfo(const InstanceInfo& value);

    /// <summary>
    /// 是否包周期
    /// </summary>

    bool isIsPrePaid() const;
    bool isPrePaidIsSet() const;
    void unsetisPrePaid();
    void setIsPrePaid(bool value);

    /// <summary>
    /// 全域弹性公网IP标签
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// 系统标签
    /// </summary>

    std::vector<Tag>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<Tag>& value);

    /// <summary>
    /// - 企业项目ID。最大长度36字节，带“-”连字符的UUID格式，或者是字符串“0”。 - 创建全域弹性公网IP时，给全域弹性公网IP绑定企业项目ID。 - 不指定该参数时，默认值是 0 - 关于企业项目ID的获取及企业项目特性的详细信息，请参见[《企业管理用户指南》](https://support.huaweicloud.com/usermanual-em/zh-cn_topic_0126101490.html)。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string accessSite_;
    bool accessSiteIsSet_;
    std::string geipPoolName_;
    bool geipPoolNameIsSet_;
    std::string isp_;
    bool ispIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    std::string ipv6Address_;
    bool ipv6AddressIsSet_;
    bool freezen_;
    bool freezenIsSet_;
    std::string freezenInfo_;
    bool freezenInfoIsSet_;
    bool polluted_;
    bool pollutedIsSet_;
    std::string status_;
    bool statusIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    InternetBandwidthInfo internetBandwidthInfo_;
    bool internetBandwidthInfoIsSet_;
    GlobalConnectionBandwidthInfo globalConnectionBandwidthInfo_;
    bool globalConnectionBandwidthInfoIsSet_;
    InstanceInfo associateInstanceInfo_;
    bool associateInstanceInfoIsSet_;
    bool isPrePaid_;
    bool isPrePaidIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;
    std::vector<Tag> sysTags_;
    bool sysTagsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ShowGlobalEip_H_
