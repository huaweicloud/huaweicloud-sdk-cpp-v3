
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectedInstanceRequestParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectedInstanceRequestParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sdrs/v1/model/ResourceTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建保护实例数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  CreateProtectedInstanceRequestParams
    : public ModelBase
{
public:
    CreateProtectedInstanceRequestParams();
    virtual ~CreateProtectedInstanceRequestParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateProtectedInstanceRequestParams members

    /// <summary>
    /// 需要加入的保护组ID。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 指定的生产站点云服务器ID。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 指定保护实例的名称，最大支持长度为64个字节。只包含中文字符、英文字母（a～ｚ、Ａ～Ｚ）、数字（０~９）、小数点（．）、下划线（_）、中划线（-）。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 指定保护实例的描述，最大支持长度为64个字节。不能包含左尖括号（&lt;）或右尖括号（&gt;）。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 专属分布式存储池ID。 当容灾站点磁盘选择专属分布式存储时指定该字段。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 容灾站点云服务器主网卡所在的子网subnetID，与neutron_network_id字段值一致。
    /// </summary>

    std::string getPrimarySubnetId() const;
    bool primarySubnetIdIsSet() const;
    void unsetprimarySubnetId();
    void setPrimarySubnetId(const std::string& value);

    /// <summary>
    /// 容灾站点云服务器主网卡IP地址。此参数仅在传入primary_subnet_id时有效。指定primary_subnet_id时，如果不指定该参数，将自动分配容灾站点云服务器主网卡IP地址。
    /// </summary>

    std::string getPrimaryIpAddress() const;
    bool primaryIpAddressIsSet() const;
    void unsetprimaryIpAddress();
    void setPrimaryIpAddress(const std::string& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// 指定的容灾站点云服务器的flavor ID。 查询flavor列表，请参见查询云服务器规格变更支持列表。  说明:不指定此参数时，容灾站点云服务器的flavor ID默认和生产站点云服务器保持一致。 不同规格的云服务器在性能上存在差异，可能会对云服务器上运行的应用产生影响。为保证切换/故障切换后云服务器的性能，建议容灾站点服务器的规格（CPU、内存）不低于生产站点云服务器的规格（CPU、内存）。 生产站点云服务器和容灾站点云服务器的flavor存在匹配关系，可以通过上述接口使用生产站点云服务器过滤出满足要求的容灾站点云服务器flavor。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 在专属主机或共享池中创建容灾站点云服务器，默认为在共享池中创建。 值为：shared或dedicated。shared：表示共享池。 dedicated：表示专属主机。
    /// </summary>

    std::string getTenancy() const;
    bool tenancyIsSet() const;
    void unsettenancy();
    void setTenancy(const std::string& value);

    /// <summary>
    /// 专属主机id，此属性仅在tenancy值为dedicated时有效。 若不指定此属性，系统将自动分配租户可以自动放置弹性云服务器的专属主机。
    /// </summary>

    std::string getDedicatedHostId() const;
    bool dedicatedHostIdIsSet() const;
    void unsetdedicatedHostId();
    void setDedicatedHostId(const std::string& value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string primarySubnetId_;
    bool primarySubnetIdIsSet_;
    std::string primaryIpAddress_;
    bool primaryIpAddressIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string tenancy_;
    bool tenancyIsSet_;
    std::string dedicatedHostId_;
    bool dedicatedHostIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectedInstanceRequestParams_H_
