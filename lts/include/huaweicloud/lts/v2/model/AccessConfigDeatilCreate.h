
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigDeatilCreate_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigDeatilCreate_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/AccessConfigFormatCreate.h>
#include <string>
#include <map>
#include <vector>
#include <huaweicloud/lts/v2/model/AccessConfigWindowsLogInfoCreate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志接入详细信息
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  AccessConfigDeatilCreate
    : public ModelBase
{
public:
    AccessConfigDeatilCreate();
    virtual ~AccessConfigDeatilCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessConfigDeatilCreate members

    /// <summary>
    /// 采集路径。 1. 路径必须以/或者字母:\\\\开头 2. 不能包含特殊字符&lt;&gt; &#39; | \&quot; 且不能只输入/ 3. 第一级目录不支持通配符*：不能以/_**   /_*开头 4.**只能出现一次&#x60;&#x60; CCE类型中 容器路径和主机路径必填，标准输出不用 最小长度：1 最大长度：128
    /// </summary>

    std::vector<std::string>& getPaths();
    bool pathsIsSet() const;
    void unsetpaths();
    void setPaths(const std::vector<std::string>& value);

    /// <summary>
    /// 采集路径黑名单。 1. 路径必须以/或者字母:\\\\开头 2. 不能包含特殊字符&lt;&gt; &#39; | \&quot; 且不能只输入/ 3. 第一级目录不支持通配符*：不能以/_**   /_*开头 4.**只能出现一次 最小长度：1 最大长度：128
    /// </summary>

    std::vector<std::string>& getBlackPaths();
    bool blackPathsIsSet() const;
    void unsetblackPaths();
    void setBlackPaths(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigFormatCreate getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const AccessConfigFormatCreate& value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigWindowsLogInfoCreate getWindowsLogInfo() const;
    bool windowsLogInfoIsSet() const;
    void unsetwindowsLogInfo();
    void setWindowsLogInfo(const AccessConfigWindowsLogInfoCreate& value);

    /// <summary>
    /// 标准输出开关，仅CCE接入类型时使用
    /// </summary>

    bool isStdout() const;
    bool stdoutIsSet() const;
    void unsetstdout();
    void setStdout(bool value);

    /// <summary>
    /// 标准输出开关标准错误开关，仅CCE接入类型时使用
    /// </summary>

    bool isStderr() const;
    bool stderrIsSet() const;
    void unsetstderr();
    void setStderr(bool value);

    /// <summary>
    /// CCE接入类型，仅CCE接入类型时使用
    /// </summary>

    std::string getPathType() const;
    bool pathTypeIsSet() const;
    void unsetpathType();
    void setPathType(const std::string& value);

    /// <summary>
    /// K8s Namespace正则匹配，仅CCE接入类型时使用
    /// </summary>

    std::string getNamespaceRegex() const;
    bool namespaceRegexIsSet() const;
    void unsetnamespaceRegex();
    void setNamespaceRegex(const std::string& value);

    /// <summary>
    /// K8s Pod正则匹配，仅CCE接入类型时使用
    /// </summary>

    std::string getPodNameRegex() const;
    bool podNameRegexIsSet() const;
    void unsetpodNameRegex();
    void setPodNameRegex(const std::string& value);

    /// <summary>
    /// K8s 容器名称正则匹配，仅CCE接入类型时使用
    /// </summary>

    std::string getContainerNameRegex() const;
    bool containerNameRegexIsSet() const;
    void unsetcontainerNameRegex();
    void setContainerNameRegex(const std::string& value);

    /// <summary>
    /// 容器 Label白名单，最多支持创建30个，keyname不支持重名，仅CCE接入类型时使用
    /// </summary>

    std::map<std::string, std::string>& getIncludeLabels();
    bool includeLabelsIsSet() const;
    void unsetincludeLabels();
    void setIncludeLabels(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 容器 Label黑名单，最多支持创建30个，keyname不支持重名，仅CCE接入类型时使用
    /// </summary>

    std::map<std::string, std::string>& getExcludeLabels();
    bool excludeLabelsIsSet() const;
    void unsetexcludeLabels();
    void setExcludeLabels(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 环境变量白名单，最多支持创建30个，keyname不支持重名，仅CCE接入类型时使用
    /// </summary>

    std::map<std::string, std::string>& getIncludeEnvs();
    bool includeEnvsIsSet() const;
    void unsetincludeEnvs();
    void setIncludeEnvs(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 环境变量黑名单，最多支持创建30个，keyname不支持重名，仅CCE接入类型时使用
    /// </summary>

    std::map<std::string, std::string>& getExcludeEnvs();
    bool excludeEnvsIsSet() const;
    void unsetexcludeEnvs();
    void setExcludeEnvs(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 容器 Label日志标签，最多支持创建30个，keyname不支持重名，仅CCE接入类型时使用
    /// </summary>

    std::map<std::string, std::string>& getLogLabels();
    bool logLabelsIsSet() const;
    void unsetlogLabels();
    void setLogLabels(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 环境变量日志标签，最多支持创建30个，keyname不支持重名，仅CCE接入类型时使用
    /// </summary>

    std::map<std::string, std::string>& getLogEnvs();
    bool logEnvsIsSet() const;
    void unsetlogEnvs();
    void setLogEnvs(const std::map<std::string, std::string>& value);

    /// <summary>
    /// K8s Label白名单，最多支持创建30个，keyname不支持重名，仅CCE接入类型时使用
    /// </summary>

    std::map<std::string, std::string>& getIncludeK8sLabels();
    bool includeK8sLabelsIsSet() const;
    void unsetincludeK8sLabels();
    void setIncludeK8sLabels(const std::map<std::string, std::string>& value);

    /// <summary>
    /// K8s Label黑名单，最多支持创建30个，keyname不支持重名，仅CCE接入类型时使用
    /// </summary>

    std::map<std::string, std::string>& getExcludeK8sLabels();
    bool excludeK8sLabelsIsSet() const;
    void unsetexcludeK8sLabels();
    void setExcludeK8sLabels(const std::map<std::string, std::string>& value);

    /// <summary>
    /// K8s Label日志标签，最多支持创建30个，keyname不支持重名，仅CCE接入类型时使用
    /// </summary>

    std::map<std::string, std::string>& getLogK8s();
    bool logK8sIsSet() const;
    void unsetlogK8s();
    void setLogK8s(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 是否允许此文件重复采集
    /// </summary>

    bool isRepeatCollect() const;
    bool repeatCollectIsSet() const;
    void unsetrepeatCollect();
    void setRepeatCollect(bool value);

    /// <summary>
    /// 系统内置字段：配置日志接入规则时，可以配置系统内置字段，上报日志后，每条日志数据的标签数据中将会有系统字段 采集场景为主机文件的内置字段为：hostName、hostId、hostIP、pathFile、hostIPv6、category、collectTime、__host_group__ 采集场景为K8S集群容器文件的内置字段为：hostName、hostId、hostIP、pathFile、hostIPv6、clusterId、podName、appName、containerName、nameSpace、category、collectTime、__host_group__、serviceID、podIp、clusterName、workloadType 若修改时传入此字段，将覆盖原有配置
    /// </summary>

    std::vector<std::string>& getSystemFields();
    bool systemFieldsIsSet() const;
    void unsetsystemFields();
    void setSystemFields(const std::vector<std::string>& value);

    /// <summary>
    /// 自定义键值对：配置日志接入规则时，可以配置自定义键值对规则，上报日志后，每条日志数据的标签数据中将会有用户自定义的键值对字段，键值对数量不超过20 键的长度限制为128，允许的字符有a-zA-Z0-9_- 值的长度限制为1024
    /// </summary>

    std::map<std::string, std::string>& getCustomKeyValue();
    bool customKeyValueIsSet() const;
    void unsetcustomKeyValue();
    void setCustomKeyValue(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 容器 Label白名单，可选为AND，OR，不配置时默认为OR；当存在多个值时的处理逻辑，AND表示同时满足才会生效，OR表示有一项满足就会生效
    /// </summary>

    std::string getIncludeLabelsLogical() const;
    bool includeLabelsLogicalIsSet() const;
    void unsetincludeLabelsLogical();
    void setIncludeLabelsLogical(const std::string& value);

    /// <summary>
    /// 容器 Label黑名单，可选为AND，OR，不配置时默认为OR；当存在多个值时的处理逻辑，AND表示同时满足才会生效，OR表示有一项满足就会生效
    /// </summary>

    std::string getExcludeLabelsLogical() const;
    bool excludeLabelsLogicalIsSet() const;
    void unsetexcludeLabelsLogical();
    void setExcludeLabelsLogical(const std::string& value);

    /// <summary>
    /// K8S Label白名单，可选为AND，OR，不配置时默认为OR；当存在多个值时的处理逻辑，AND表示同时满足才会生效，OR表示有一项满足就会生效
    /// </summary>

    std::string getIncludeK8sLabelsLogical() const;
    bool includeK8sLabelsLogicalIsSet() const;
    void unsetincludeK8sLabelsLogical();
    void setIncludeK8sLabelsLogical(const std::string& value);

    /// <summary>
    /// K8S Label黑名单，可选为AND，OR，不配置时默认为OR；当存在多个值时的处理逻辑，AND表示同时满足才会生效，OR表示有一项满足就会生效
    /// </summary>

    std::string getExcludeK8sLabelsLogical() const;
    bool excludeK8sLabelsLogicalIsSet() const;
    void unsetexcludeK8sLabelsLogical();
    void setExcludeK8sLabelsLogical(const std::string& value);

    /// <summary>
    /// 环境变量白名单，可选为AND，OR，不配置时默认为OR；当存在多个值时的处理逻辑，AND表示同时满足才会生效，OR表示有一项满足就会生效
    /// </summary>

    std::string getIncludeEnvsLogical() const;
    bool includeEnvsLogicalIsSet() const;
    void unsetincludeEnvsLogical();
    void setIncludeEnvsLogical(const std::string& value);

    /// <summary>
    /// 环境变量黑名单，可选为AND，OR，不配置时默认为OR；当存在多个值时的处理逻辑，AND表示同时满足才会生效，OR表示有一项满足就会生效
    /// </summary>

    std::string getExcludeEnvsLogical() const;
    bool excludeEnvsLogicalIsSet() const;
    void unsetexcludeEnvsLogical();
    void setExcludeEnvsLogical(const std::string& value);


protected:
    std::vector<std::string> paths_;
    bool pathsIsSet_;
    std::vector<std::string> blackPaths_;
    bool blackPathsIsSet_;
    AccessConfigFormatCreate format_;
    bool formatIsSet_;
    AccessConfigWindowsLogInfoCreate windowsLogInfo_;
    bool windowsLogInfoIsSet_;
    bool stdout_;
    bool stdoutIsSet_;
    bool stderr_;
    bool stderrIsSet_;
    std::string pathType_;
    bool pathTypeIsSet_;
    std::string namespaceRegex_;
    bool namespaceRegexIsSet_;
    std::string podNameRegex_;
    bool podNameRegexIsSet_;
    std::string containerNameRegex_;
    bool containerNameRegexIsSet_;
    std::map<std::string, std::string> includeLabels_;
    bool includeLabelsIsSet_;
    std::map<std::string, std::string> excludeLabels_;
    bool excludeLabelsIsSet_;
    std::map<std::string, std::string> includeEnvs_;
    bool includeEnvsIsSet_;
    std::map<std::string, std::string> excludeEnvs_;
    bool excludeEnvsIsSet_;
    std::map<std::string, std::string> logLabels_;
    bool logLabelsIsSet_;
    std::map<std::string, std::string> logEnvs_;
    bool logEnvsIsSet_;
    std::map<std::string, std::string> includeK8sLabels_;
    bool includeK8sLabelsIsSet_;
    std::map<std::string, std::string> excludeK8sLabels_;
    bool excludeK8sLabelsIsSet_;
    std::map<std::string, std::string> logK8s_;
    bool logK8sIsSet_;
    bool repeatCollect_;
    bool repeatCollectIsSet_;
    std::vector<std::string> systemFields_;
    bool systemFieldsIsSet_;
    std::map<std::string, std::string> customKeyValue_;
    bool customKeyValueIsSet_;
    std::string includeLabelsLogical_;
    bool includeLabelsLogicalIsSet_;
    std::string excludeLabelsLogical_;
    bool excludeLabelsLogicalIsSet_;
    std::string includeK8sLabelsLogical_;
    bool includeK8sLabelsLogicalIsSet_;
    std::string excludeK8sLabelsLogical_;
    bool excludeK8sLabelsLogicalIsSet_;
    std::string includeEnvsLogical_;
    bool includeEnvsLogicalIsSet_;
    std::string excludeEnvsLogical_;
    bool excludeEnvsLogicalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigDeatilCreate_H_
