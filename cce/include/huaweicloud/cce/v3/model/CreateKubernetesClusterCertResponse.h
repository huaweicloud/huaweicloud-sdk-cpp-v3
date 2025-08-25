
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateKubernetesClusterCertResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateKubernetesClusterCertResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/Users.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/cce/v3/model/Clusters.h>
#include <huaweicloud/cce/v3/model/Contexts.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CreateKubernetesClusterCertResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateKubernetesClusterCertResponse();
    virtual ~CreateKubernetesClusterCertResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateKubernetesClusterCertResponse members

    /// <summary>
    /// API类型，固定值“Config”，该值不可修改。 
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// API版本，固定值“v1”。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 当前未使用该字段，当前默认为空。
    /// </summary>

    Object getPreferences() const;
    bool preferencesIsSet() const;
    void unsetpreferences();
    void setPreferences(const Object& value);

    /// <summary>
    /// 集群列表。
    /// </summary>

    std::vector<Clusters>& getClusters();
    bool clustersIsSet() const;
    void unsetclusters();
    void setClusters(const std::vector<Clusters>& value);

    /// <summary>
    /// 存放了指定用户的一些证书信息和ClientKey信息。
    /// </summary>

    std::vector<Users>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<Users>& value);

    /// <summary>
    /// 上下文列表。
    /// </summary>

    std::vector<Contexts>& getContexts();
    bool contextsIsSet() const;
    void unsetcontexts();
    void setContexts(const std::vector<Contexts>& value);

    /// <summary>
    /// 当前上下文，若存在publicIp（虚拟机弹性IP）时为 external; 若不存在publicIp为 internal。
    /// </summary>

    std::string getCurrentContext() const;
    bool currentContextIsSet() const;
    void unsetcurrentContext();
    void setCurrentContext(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getPortID() const;
    bool portIDIsSet() const;
    void unsetportID();
    void setPortID(const std::string& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    Object preferences_;
    bool preferencesIsSet_;
    std::vector<Clusters> clusters_;
    bool clustersIsSet_;
    std::vector<Users> users_;
    bool usersIsSet_;
    std::vector<Contexts> contexts_;
    bool contextsIsSet_;
    std::string currentContext_;
    bool currentContextIsSet_;
    std::string portID_;
    bool portIDIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateKubernetesClusterCertResponse_H_
