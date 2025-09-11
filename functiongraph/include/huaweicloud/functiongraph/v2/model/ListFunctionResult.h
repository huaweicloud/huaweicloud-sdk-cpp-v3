
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionResult_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionResult_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>
#include <huaweicloud/functiongraph/v2/model/StrategyConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数属性结构体。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListFunctionResult
    : public ModelBase
{
public:
    ListFunctionResult();
    virtual ~ListFunctionResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFunctionResult members

    /// <summary>
    /// 资源id。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 函数的URN（Uniform Resource Name），唯一标识函数。
    /// </summary>

    std::string getFuncUrn() const;
    bool funcUrnIsSet() const;
    void unsetfuncUrn();
    void setFuncUrn(const std::string& value);

    /// <summary>
    /// 函数名称。
    /// </summary>

    std::string getFuncName() const;
    bool funcNameIsSet() const;
    void unsetfuncName();
    void setFuncName(const std::string& value);

    /// <summary>
    /// 域名id。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 租户的project id。
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// 租户的project name。
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 函数所属的分组Package，用于用户针对函数的自定义分组。
    /// </summary>

    std::string getPackage() const;
    bool packageIsSet() const;
    void unsetpackage();
    void setPackage(const std::string& value);

    /// <summary>
    /// FunctionGraph函数的执行环境 Java8: Java语言8版本。 Java11: Java语言11版本。 Java17: Java语言17版本（当前仅支持华北-乌兰察布二零二） Python2.7: Python语言2.7版本。 Python3.6: Pyton语言3.6版本。 Python3.9: Python语言3.9版本。 Python3.10: Python语言3.10版本。 Go1.8: Go语言1.8版本。 Go1.x: Go语言1.x版本。 Node.js6.10: Nodejs语言6.10版本。 Node.js8.10: Nodejs语言8.10版本。 Node.js10.16: Nodejs语言10.16版本。 Node.js12.13: Nodejs语言12.13版本。 Node.js14.18: Nodejs语言14.18版本。 Node.js16.17: Nodejs语言16.17版本。 Node.js18.15: Nodejs语言18.15版本。 C#(.NET Core 2.0): C#语言2.0版本。 C#(.NET Core 2.1): C#语言2.1版本。 C#(.NET Core 3.1): C#语言3.1版本。 C#(.NET Core 6.0): C#语言6.0版本（当前仅支持华北-乌兰察布二零二）。 Custom: 自定义运行时。 PHP7.3: Php语言7.3版本。 Cangjie1.0：仓颉语言1.0版本。 http: HTTP函数。 Custom Image: 自定义镜像函数。
    /// </summary>

    std::string getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const std::string& value);

    /// <summary>
    /// 函数执行超时时间，超时函数将被强行停止，范围3～259200秒。
    /// </summary>

    int32_t getTimeout() const;
    bool timeoutIsSet() const;
    void unsettimeout();
    void setTimeout(int32_t value);

    /// <summary>
    /// 函数执行入口 规则：xx.xx，必须包含“. ” 举例：对于node.js函数：myfunction.handler，则表示函数的文件名为myfunction.js，执行的入口函数名为handler。
    /// </summary>

    std::string getHandler() const;
    bool handlerIsSet() const;
    void unsethandler();
    void setHandler(const std::string& value);

    /// <summary>
    /// 函数消耗的内存。 单位M。 取值范围为：128、256、512、768、1024、1280、1536、1792、2048、2560、3072、3584、4096。 最小值为128，最大值为4096。
    /// </summary>

    int32_t getMemorySize() const;
    bool memorySizeIsSet() const;
    void unsetmemorySize();
    void setMemorySize(int32_t value);

    /// <summary>
    /// 函数消耗的显存，只支持自定义运行时与自定义镜像函数配置GPU。 单位MB。 取值范围为：1024、2048、3072、4096、5120、6144、7168、8192、9216、10240、11264、12288、13312、14336、15360、16384。 最小值为1024，最大值为16384。
    /// </summary>

    int32_t getGpuMemory() const;
    bool gpuMemoryIsSet() const;
    void unsetgpuMemory();
    void setGpuMemory(int32_t value);

    /// <summary>
    /// 函数占用的cpu资源。 单位为millicore（1 core&#x3D;1000 millicores）。 取值与MemorySize成比例，默认是128M内存占0.1个核（100 millicores）。
    /// </summary>

    int32_t getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(int32_t value);

    /// <summary>
    /// 函数代码类型，取值有5种。 inline: UI在线编辑代码。 zip: 函数代码为zip包。 obs: 函数代码来源于obs存储。 jar: 函数代码为jar包，主要针对Java函数。 Custom-Image-Swr: 函数代码来源与SWR自定义镜像。
    /// </summary>

    std::string getCodeType() const;
    bool codeTypeIsSet() const;
    void unsetcodeType();
    void setCodeType(const std::string& value);

    /// <summary>
    /// 当CodeType为obs时，该值为函数代码包在OBS上的地址，CodeType为其他值时，该字段为空。
    /// </summary>

    std::string getCodeUrl() const;
    bool codeUrlIsSet() const;
    void unsetcodeUrl();
    void setCodeUrl(const std::string& value);

    /// <summary>
    /// 函数的文件名，当CodeType为jar/zip时必须提供该字段，inline和obs不需要提供。
    /// </summary>

    std::string getCodeFilename() const;
    bool codeFilenameIsSet() const;
    void unsetcodeFilename();
    void setCodeFilename(const std::string& value);

    /// <summary>
    /// 函数大小，单位：字节。
    /// </summary>

    int64_t getCodeSize() const;
    bool codeSizeIsSet() const;
    void unsetcodeSize();
    void setCodeSize(int64_t value);

    /// <summary>
    /// 用户自定义的name/value信息。 在函数中使用的参数。 举例：如函数要访问某个主机，可以设置自定义参数：Host&#x3D;{host_ip}，最多定义20个，总长度不超过4KB。
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);

    /// <summary>
    /// 用户自定义的name/value信息，用于需要加密的配置。
    /// </summary>

    std::string getEncryptedUserData() const;
    bool encryptedUserDataIsSet() const;
    void unsetencryptedUserData();
    void setEncryptedUserData(const std::string& value);

    /// <summary>
    /// 函数代码SHA512 hash值，用于判断函数是否变化。
    /// </summary>

    std::string getDigest() const;
    bool digestIsSet() const;
    void unsetdigest();
    void setDigest(const std::string& value);

    /// <summary>
    /// 函数版本号。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 函数版本的内部标识。
    /// </summary>

    std::string getImageName() const;
    bool imageNameIsSet() const;
    void unsetimageName();
    void setImageName(const std::string& value);

    /// <summary>
    /// 函数使用的权限委托名称，需要IAM支持，并在IAM界面创建委托，当函数需要访问其他服务时，必须提供该字段。
    /// </summary>

    std::string getXrole() const;
    bool xroleIsSet() const;
    void unsetxrole();
    void setXrole(const std::string& value);

    /// <summary>
    /// 函数app使用的权限委托名称，需要IAM支持，并在IAM界面创建委托，当函数需要访问其他服务时，必须提供该字段。
    /// </summary>

    std::string getAppXrole() const;
    bool appXroleIsSet() const;
    void unsetappXrole();
    void setAppXrole(const std::string& value);

    /// <summary>
    /// 函数描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 函数最后一次更新时间。
    /// </summary>

    utility::datetime getLastModified() const;
    bool lastModifiedIsSet() const;
    void unsetlastModified();
    void setLastModified(const utility::datetime& value);

    /// <summary>
    /// 用户的vpcid。
    /// </summary>

    std::string getFuncVpcId() const;
    bool funcVpcIdIsSet() const;
    void unsetfuncVpcId();
    void setFuncVpcId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    StrategyConfig getStrategyConfig() const;
    bool strategyConfigIsSet() const;
    void unsetstrategyConfig();
    void setStrategyConfig(const StrategyConfig& value);

    /// <summary>
    /// 函数扩展配置。
    /// </summary>

    std::string getExtendConfig() const;
    bool extendConfigIsSet() const;
    void unsetextendConfig();
    void setExtendConfig(const std::string& value);

    /// <summary>
    /// 函数初始化入口，规则：xx.xx，必须包含“. ”。当配置初始化函数时，此参数必填。 举例：对于node.js函数：myfunction.initializer，则表示函数的文件名为myfunction.js，初始化的入口函数名为initializer。
    /// </summary>

    std::string getInitializerHandler() const;
    bool initializerHandlerIsSet() const;
    void unsetinitializerHandler();
    void setInitializerHandler(const std::string& value);

    /// <summary>
    /// 初始化超时时间，超时函数将被强行停止，范围1～300秒。当配置初始化函数时，此参数必填。
    /// </summary>

    int32_t getInitializerTimeout() const;
    bool initializerTimeoutIsSet() const;
    void unsetinitializerTimeout();
    void setInitializerTimeout(int32_t value);

    /// <summary>
    /// 函数预停止函数的入口，规则：xx.xx，必须包含“. ”。 举例：对于node.js函数：myfunction.pre_stop_handler，则表示函数的文件名为myfunction.js，初始化的入口函数名为pre_stop_handler。
    /// </summary>

    std::string getPreStopHandler() const;
    bool preStopHandlerIsSet() const;
    void unsetpreStopHandler();
    void setPreStopHandler(const std::string& value);

    /// <summary>
    /// 初始化超时时间，超时函数将被强行停止，范围1～90秒。
    /// </summary>

    int32_t getPreStopTimeout() const;
    bool preStopTimeoutIsSet() const;
    void unsetpreStopTimeout();
    void setPreStopTimeout(int32_t value);

    /// <summary>
    /// 企业项目ID，在企业用户创建函数时必填。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 是否允许进行长时间超时设置。
    /// </summary>

    bool isLongTime() const;
    bool longTimeIsSet() const;
    void unsetlongTime();
    void setLongTime(bool value);

    /// <summary>
    /// 自定义日志查询组id
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 自定义日志查询流id
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// v2表示为正式版本,v1为废弃版本。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 函数最近1天内执行失败的次数。
    /// </summary>

    int32_t getFailCount() const;
    bool failCountIsSet() const;
    void unsetfailCount();
    void setFailCount(int32_t value);

    /// <summary>
    /// 是否为bridge函数
    /// </summary>

    bool isIsBridgeFunction() const;
    bool isBridgeFunctionIsSet() const;
    void unsetisBridgeFunction();
    void setIsBridgeFunction(bool value);

    /// <summary>
    /// 绑定bridge函数的urn列表
    /// </summary>

    std::vector<std::string>& getBindBridgeFuncUrns();
    bool bindBridgeFuncUrnsIsSet() const;
    void unsetbindBridgeFuncUrns();
    void setBindBridgeFuncUrns(const std::vector<std::string>& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string funcUrn_;
    bool funcUrnIsSet_;
    std::string funcName_;
    bool funcNameIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string package_;
    bool packageIsSet_;
    std::string runtime_;
    bool runtimeIsSet_;
    int32_t timeout_;
    bool timeoutIsSet_;
    std::string handler_;
    bool handlerIsSet_;
    int32_t memorySize_;
    bool memorySizeIsSet_;
    int32_t gpuMemory_;
    bool gpuMemoryIsSet_;
    int32_t cpu_;
    bool cpuIsSet_;
    std::string codeType_;
    bool codeTypeIsSet_;
    std::string codeUrl_;
    bool codeUrlIsSet_;
    std::string codeFilename_;
    bool codeFilenameIsSet_;
    int64_t codeSize_;
    bool codeSizeIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string encryptedUserData_;
    bool encryptedUserDataIsSet_;
    std::string digest_;
    bool digestIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string imageName_;
    bool imageNameIsSet_;
    std::string xrole_;
    bool xroleIsSet_;
    std::string appXrole_;
    bool appXroleIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    utility::datetime lastModified_;
    bool lastModifiedIsSet_;
    std::string funcVpcId_;
    bool funcVpcIdIsSet_;
    StrategyConfig strategyConfig_;
    bool strategyConfigIsSet_;
    std::string extendConfig_;
    bool extendConfigIsSet_;
    std::string initializerHandler_;
    bool initializerHandlerIsSet_;
    int32_t initializerTimeout_;
    bool initializerTimeoutIsSet_;
    std::string preStopHandler_;
    bool preStopHandlerIsSet_;
    int32_t preStopTimeout_;
    bool preStopTimeoutIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    bool longTime_;
    bool longTimeIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t failCount_;
    bool failCountIsSet_;
    bool isBridgeFunction_;
    bool isBridgeFunctionIsSet_;
    std::vector<std::string> bindBridgeFuncUrns_;
    bool bindBridgeFuncUrnsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionResult_H_
