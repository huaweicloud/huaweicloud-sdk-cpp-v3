
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterMetadata_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
/// 可以通过 annotations[\&quot;cluster.install.addons/install\&quot;] 来指定创建集群时需要安装的插件，格式形如 &#x60;&#x60;&#x60; [   {     \&quot;addonTemplateName\&quot;: \&quot;autoscaler\&quot;,     \&quot;version\&quot;: \&quot;1.15.3\&quot;,     \&quot;values\&quot;: {       \&quot;flavor\&quot;: {         \&quot;description\&quot;: \&quot;Has only one instance\&quot;,         \&quot;name\&quot;: \&quot;Single\&quot;,         \&quot;replicas\&quot;: 1,         \&quot;resources\&quot;: [           {             \&quot;limitsCpu\&quot;: \&quot;100m\&quot;,             \&quot;limitsMem\&quot;: \&quot;300Mi\&quot;,             \&quot;name\&quot;: \&quot;autoscaler\&quot;,             \&quot;requestsCpu\&quot;: \&quot;100m\&quot;,             \&quot;requestsMem\&quot;: \&quot;300Mi\&quot;           }         ]       },       \&quot;custom\&quot;: {         \&quot;coresTotal\&quot;: 32000,         \&quot;maxEmptyBulkDeleteFlag\&quot;: 10,         \&quot;maxNodesTotal\&quot;: 1000,         \&quot;memoryTotal\&quot;: 128000,         \&quot;scaleDownDelayAfterAdd\&quot;: 10,         \&quot;scaleDownDelayAfterDelete\&quot;: 10,         \&quot;scaleDownDelayAfterFailure\&quot;: 3,         \&quot;scaleDownEnabled\&quot;: false,         \&quot;scaleDownUnneededTime\&quot;: 10,         \&quot;scaleDownUtilizationThreshold\&quot;: 0.5,         \&quot;scaleUpCpuUtilizationThreshold\&quot;: 1,         \&quot;scaleUpMemUtilizationThreshold\&quot;: 1,         \&quot;scaleUpUnscheduledPodEnabled\&quot;: true,         \&quot;scaleUpUtilizationEnabled\&quot;: true,         \&quot;tenant_id\&quot;: \&quot;47eb1d64cbeb45cfa01ae20af4f4b563\&quot;,         \&quot;unremovableNodeRecheckTimeout\&quot;: 5       }     }   } ] &#x60;&#x60;&#x60;
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterMetadata
    : public ModelBase
{
public:
    ClusterMetadata();
    virtual ~ClusterMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterMetadata members

    /// <summary>
    /// 集群名称。  命名规则：以小写字母开头，由小写字母、数字、中划线(-)组成，长度范围4-128位，且不能以中划线(-)结尾。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 集群ID，资源唯一标识，创建成功后自动生成，填写无效。在创建包周期集群时，响应体不返回集群ID。
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);

    /// <summary>
    /// 集群显示名，用于在 CCE 界面显示，该名称创建后可修改。  命名规则：以小写字母开头，由小写字母、数字、中划线(-)组成，长度范围4-128位，且不能以中划线(-)结尾。  显示名和其他集群的名称、显示名不可以重复。  在创建集群、更新集群请求体中，集群显示名alias未指定或取值为空，表示与集群名称name一致。在查询集群等响应体中，集群显示名alias将必然返回，未配置时将返回集群名称name。
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// **参数解释：** 集群注解，由key/value组成：  &#x60;&#x60;&#x60; \&quot;annotations\&quot;: {    \&quot;key1\&quot; : \&quot;value1\&quot;,    \&quot;key2\&quot; : \&quot;value2\&quot; } &#x60;&#x60;&#x60; **约束限制：** 该字段不会被数据库保存，当前仅用于指定集群待安装插件。 **取值范围：** 不涉及 **默认取值：** 不涉及  &gt;    - Annotations不用于标识和选择对象。Annotations中的元数据可以是small或large，structured或unstructured，并且可以包括标签不允许使用的字符。 &gt;    - 可通过加入\&quot;cluster.install.addons.external/install\&quot;: \&quot;[{\\\\\&quot;addonTemplateName\\\\\&quot;:\\\\\&quot;icagent\\\\\&quot;}]\&quot;的键值对在创建集群时安装ICAgent。 
    /// </summary>

    std::map<std::string, std::string>& getAnnotations();
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 集群标签，key/value对格式。  &gt;  该字段值由系统自动生成，用于升级时前端识别集群支持的特性开关，用户指定无效。
    /// </summary>

    std::map<std::string, std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释：** 集群创建时间。 **约束限制：** 创建集群时自动记录，不支持传入。 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);

    /// <summary>
    /// **参数解释：** 集群更新时间。 **约束限制：** 更新集群时自动记录，不支持传入。 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getUpdateTimestamp() const;
    bool updateTimestampIsSet() const;
    void unsetupdateTimestamp();
    void setUpdateTimestamp(const std::string& value);

    /// <summary>
    /// **参数解释：** 集群时区。[IANA Time Zone Database](https://www.iana.org/time-zones)中收录的时区名称, 例如：\&quot;Asia/Shanghai\&quot;。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getTimezone() const;
    bool timezoneIsSet() const;
    void unsettimezone();
    void setTimezone(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string uid_;
    bool uidIsSet_;
    std::string alias_;
    bool aliasIsSet_;
    std::map<std::string, std::string> annotations_;
    bool annotationsIsSet_;
    std::map<std::string, std::string> labels_;
    bool labelsIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;
    std::string updateTimestamp_;
    bool updateTimestampIsSet_;
    std::string timezone_;
    bool timezoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterMetadata_H_
