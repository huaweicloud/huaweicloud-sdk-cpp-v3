
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigDeatilCreate_H_
