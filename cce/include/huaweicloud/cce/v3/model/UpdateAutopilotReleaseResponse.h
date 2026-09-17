
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateAutopilotReleaseResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateAutopilotReleaseResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CCE_V3_EXPORT  UpdateAutopilotReleaseResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateAutopilotReleaseResponse();
    virtual ~UpdateAutopilotReleaseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAutopilotReleaseResponse members

    /// <summary>
    /// **参数解释：** 模板名称 **约束限制：** 最长64个字符 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getChartName() const;
    bool chartNameIsSet() const;
    void unsetchartName();
    void setChartName(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否公开模板 **约束限制：** 不涉及 **取值范围：** - true：公开模板 - false：不公开模板  **默认取值：** false
    /// </summary>

    bool isChartPublic() const;
    bool chartPublicIsSet() const;
    void unsetchartPublic();
    void setChartPublic(bool value);

    /// <summary>
    /// **参数解释：** 模板版本 **约束限制：** 最长64个字符 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getChartVersion() const;
    bool chartVersionIsSet() const;
    void unsetchartVersion();
    void setChartVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 集群ID **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// **参数解释：** 集群名称 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getClusterName() const;
    bool clusterNameIsSet() const;
    void unsetclusterName();
    void setClusterName(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 模板实例描述 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 模板实例名称 **约束限制：** 由小写字母开头，中间由小写字母、数字和中划线(-)组成，以小写字母或数字结尾 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 模板实例所在的命名空间 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// **参数解释：** 模板实例参数 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getParameters() const;
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::string& value);

    /// <summary>
    /// **参数解释：** 模板实例需要的资源 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getResources() const;
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::string& value);

    /// <summary>
    /// **参数解释：** 模板实例状态 **约束限制：** 不涉及 **取值范围：** - DEPLOYED：已部署，表示模板实例处于正常状态 - DELETED：已删除，表示模板实例已经被删除 - FAILED：失败，表示模板实例部署失败 - DELETING：删除中，表示模板实例正处于删除过程中 - PENDING_INSTALL：待安装，表示模板正在等待安装 - PENDING_UPGRADE：待升级，表示模板正在等待升级 - PENDING_ROLLBACK：待回滚，表示模板正在等待回滚 - UNKNOWN：未知，表示模板状态异常，可尝试手动删除后重新安装  **默认取值：** 不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 模板实例状态描述 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getStatusDescription() const;
    bool statusDescriptionIsSet() const;
    void unsetstatusDescription();
    void setStatusDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 模板实例的值 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getValues() const;
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::string& value);

    /// <summary>
    /// **参数解释：** 模板实例版本 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    int32_t getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(int32_t value);


protected:
    std::string chartName_;
    bool chartNameIsSet_;
    bool chartPublic_;
    bool chartPublicIsSet_;
    std::string chartVersion_;
    bool chartVersionIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string clusterName_;
    bool clusterNameIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string parameters_;
    bool parametersIsSet_;
    std::string resources_;
    bool resourcesIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string statusDescription_;
    bool statusDescriptionIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;
    std::string values_;
    bool valuesIsSet_;
    int32_t version_;
    bool versionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateAutopilotReleaseResponse_H_
