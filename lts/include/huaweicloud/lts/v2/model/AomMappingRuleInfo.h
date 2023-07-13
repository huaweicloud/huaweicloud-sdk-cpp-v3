
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AomMappingRuleInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AomMappingRuleInfo_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/AomMappingfilesInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  AomMappingRuleInfo
    : public ModelBase
{
public:
    AomMappingRuleInfo();
    virtual ~AomMappingRuleInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AomMappingRuleInfo members

    /// <summary>
    /// 集群id
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 集群名称
    /// </summary>

    std::string getClusterName() const;
    bool clusterNameIsSet() const;
    void unsetclusterName();
    void setClusterName(const std::string& value);

    /// <summary>
    /// 日志流前缀
    /// </summary>

    std::string getDeploymentsPrefix() const;
    bool deploymentsPrefixIsSet() const;
    void unsetdeploymentsPrefix();
    void setDeploymentsPrefix(const std::string& value);

    /// <summary>
    /// 工作负载
    /// </summary>

    std::vector<std::string>& getDeployments();
    bool deploymentsIsSet() const;
    void unsetdeployments();
    void setDeployments(const std::vector<std::string>& value);

    /// <summary>
    /// 命名空间
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// 容器名称
    /// </summary>

    std::string getContainerName() const;
    bool containerNameIsSet() const;
    void unsetcontainerName();
    void setContainerName(const std::string& value);

    /// <summary>
    /// 接入规则详情
    /// </summary>

    std::vector<AomMappingfilesInfo>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();
    void setFiles(const std::vector<AomMappingfilesInfo>& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string clusterName_;
    bool clusterNameIsSet_;
    std::string deploymentsPrefix_;
    bool deploymentsPrefixIsSet_;
    std::vector<std::string> deployments_;
    bool deploymentsIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string containerName_;
    bool containerNameIsSet_;
    std::vector<AomMappingfilesInfo> files_;
    bool filesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AomMappingRuleInfo_H_
