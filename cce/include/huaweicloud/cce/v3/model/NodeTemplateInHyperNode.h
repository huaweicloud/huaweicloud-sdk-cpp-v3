
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplateInHyperNode_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplateInHyperNode_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/Volume.h>
#include <string>
#include <huaweicloud/cce/v3/model/Runtime.h>
#include <huaweicloud/cce/v3/model/Login.h>
#include <huaweicloud/cce/v3/model/Storage.h>
#include <huaweicloud/cce/v3/model/NodeExtendParam.h>
#include <huaweicloud/cce/v3/model/HostnameConfig.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 超节点下节点的信息。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeTemplateInHyperNode
    : public ModelBase
{
public:
    NodeTemplateInHyperNode();
    virtual ~NodeTemplateInHyperNode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeTemplateInHyperNode members

    /// <summary>
    /// **参数解释**： 超节点下节点所在的可用区。 [CCE支持的可用区请参考[地区和终端节点](https://console.huaweicloud.com/apiexplorer/#/endpoint/CCE)。](tag:hws) [CCE支持的可用区请参考[地区和终端节点](https://console-intl.huaweicloud.com/apiexplorer/#/endpoint/CCE)。](tag:hws_hk)
    /// </summary>

    std::string getAz() const;
    bool azIsSet() const;
    void unsetaz();
    void setAz(const std::string& value);

    /// <summary>
    /// **参数解释**： 超节点下节点的操作系统类型。具体支持的操作系统请参见[节点操作系统说明](node-os.xml)。
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Login getLogin() const;
    bool loginIsSet() const;
    void unsetlogin();
    void setLogin(const Login& value);

    /// <summary>
    /// 
    /// </summary>

    Volume getRootVolume() const;
    bool rootVolumeIsSet() const;
    void unsetrootVolume();
    void setRootVolume(const Volume& value);

    /// <summary>
    /// **参数解释**： 节点的数据盘参数。
    /// </summary>

    std::vector<Volume>& getDataVolumes();
    bool dataVolumesIsSet() const;
    void unsetdataVolumes();
    void setDataVolumes(const std::vector<Volume>& value);

    /// <summary>
    /// 
    /// </summary>

    Storage getStorage() const;
    bool storageIsSet() const;
    void unsetstorage();
    void setStorage(const Storage& value);

    /// <summary>
    /// **参数解释**： 超节点创建时下发到节点上的 k8s 标签，格式为key/value键值对。此接口中仅为展示作用。 示例： &#x60;&#x60;&#x60; \&quot;k8sTags\&quot;: {   \&quot;key\&quot;: \&quot;value\&quot; } &#x60;&#x60;&#x60;
    /// </summary>

    std::map<std::string, std::string>& getK8sTags();
    bool k8sTagsIsSet() const;
    void unsetk8sTags();
    void setK8sTags(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    Runtime getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const Runtime& value);

    /// <summary>
    /// 
    /// </summary>

    NodeExtendParam getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const NodeExtendParam& value);

    /// <summary>
    /// 
    /// </summary>

    HostnameConfig getHostnameConfig() const;
    bool hostnameConfigIsSet() const;
    void unsethostnameConfig();
    void setHostnameConfig(const HostnameConfig& value);


protected:
    std::string az_;
    bool azIsSet_;
    std::string os_;
    bool osIsSet_;
    Login login_;
    bool loginIsSet_;
    Volume rootVolume_;
    bool rootVolumeIsSet_;
    std::vector<Volume> dataVolumes_;
    bool dataVolumesIsSet_;
    Storage storage_;
    bool storageIsSet_;
    std::map<std::string, std::string> k8sTags_;
    bool k8sTagsIsSet_;
    Runtime runtime_;
    bool runtimeIsSet_;
    NodeExtendParam extendParam_;
    bool extendParamIsSet_;
    HostnameConfig hostnameConfig_;
    bool hostnameConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplateInHyperNode_H_
