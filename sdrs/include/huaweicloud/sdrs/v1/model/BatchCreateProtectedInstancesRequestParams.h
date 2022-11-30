
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchCreateProtectedInstancesRequestParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchCreateProtectedInstancesRequestParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ServerInfo.h>
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
/// 批量创建保护实例请求数据接口
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  BatchCreateProtectedInstancesRequestParams
    : public ModelBase
{
public:
    BatchCreateProtectedInstancesRequestParams();
    virtual ~BatchCreateProtectedInstancesRequestParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreateProtectedInstancesRequestParams members

    /// <summary>
    /// 保护实例的名称前缀，批量创建保护实例时，为区分不同保护实例，创建过程中系统会自动在名称后加\&quot;-0001\&quot;的类似标记，故此时名称的长度为[1-59]个字符。只包含中文字符、英文字母（a～ｚ、Ａ～Ｚ）、数字（０~９）、小数点（．）、下划线（_）、中划线（-）。
    /// </summary>

    std::string getNamePrefix() const;
    bool namePrefixIsSet() const;
    void unsetnamePrefix();
    void setNamePrefix(const std::string& value);

    /// <summary>
    /// 保护实例的描述，最大支持长度为64个字符。不能包含左尖括号（&lt;）或右尖括号（&gt;）。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 需要加入的保护组ID。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 专属分布式存储池ID。当容灾站点磁盘选择专属分布式存储时指定该字段。
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
    /// 在专属主机或共享池中创建容灾站点云服务器，默认为在共享池中创建。值为：shared或dedicated。shared：表示共享池。dedicated：表示专属主机。
    /// </summary>

    std::string getTenancy() const;
    bool tenancyIsSet() const;
    void unsettenancy();
    void setTenancy(const std::string& value);

    /// <summary>
    /// 专属主机id，此属性仅在tenancy值为dedicated时有效。若不指定此属性，系统将自动分配租户可以自动放置弹性云服务器的专属主机。
    /// </summary>

    std::string getDedicatedHostId() const;
    bool dedicatedHostIdIsSet() const;
    void unsetdedicatedHostId();
    void setDedicatedHostId(const std::string& value);

    /// <summary>
    /// 用于创建保护实例的云服务器信息列表。
    /// </summary>

    std::vector<ServerInfo>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<ServerInfo>& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);


protected:
    std::string namePrefix_;
    bool namePrefixIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string primarySubnetId_;
    bool primarySubnetIdIsSet_;
    std::string tenancy_;
    bool tenancyIsSet_;
    std::string dedicatedHostId_;
    bool dedicatedHostIdIsSet_;
    std::vector<ServerInfo> servers_;
    bool serversIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchCreateProtectedInstancesRequestParams_H_
