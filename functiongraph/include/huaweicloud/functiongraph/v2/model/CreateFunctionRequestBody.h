
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionRequestBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionRequestBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/FuncLogConfig.h>
#include <huaweicloud/functiongraph/v2/model/CustomImage.h>
#include <huaweicloud/functiongraph/v2/model/FuncCode.h>
#include <string>
#include <huaweicloud/functiongraph/v2/model/NetworkControlConfig.h>
#include <map>
#include <vector>
#include <huaweicloud/functiongraph/v2/model/MountConfig.h>
#include <huaweicloud/functiongraph/v2/model/FuncVpc.h>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  CreateFunctionRequestBody
    : public ModelBase
{
public:
    CreateFunctionRequestBody();
    virtual ~CreateFunctionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFunctionRequestBody members

    /// <summary>
    /// 函数名称。
    /// </summary>

    std::string getFuncName() const;
    bool funcNameIsSet() const;
    void unsetfuncName();
    void setFuncName(const std::string& value);

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
    /// 函数执行入口 规则：xx.xx，必须包含“. ”；自定义镜像函数handler为“-” 举例：对于node.js函数：myfunction.handler，则表示函数的文件名为myfunction.js，执行的入口函数名为handler。
    /// </summary>

    std::string getHandler() const;
    bool handlerIsSet() const;
    void unsethandler();
    void setHandler(const std::string& value);

    /// <summary>
    /// 依赖版本id列表
    /// </summary>

    std::vector<std::string>& getDependVersionList();
    bool dependVersionListIsSet() const;
    void unsetdependVersionList();
    void setDependVersionList(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    FuncVpc getFuncVpc() const;
    bool funcVpcIsSet() const;
    void unsetfuncVpc();
    void setFuncVpc(const FuncVpc& value);

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
    /// 显卡类型。
    /// </summary>

    std::string getGpuType() const;
    bool gpuTypeIsSet() const;
    void unsetgpuType();
    void setGpuType(const std::string& value);

    /// <summary>
    /// 函数代码类型，取值有5种。 inline: UI在线编辑代码。 zip: 函数代码为zip包。 obs: 函数代码来源于obs存储。 jar: 函数代码为jar包，主要针对Java函数。 Custom-Image-Swr: 函数代码来源与SWR自定义镜像。 创建自定义镜像函数此参数非必填，其他类型函数此参数必填。
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
    /// 函数的文件名，当CodeType为jar/zip时必须提供该字段，CodeType为其他值时不需要提供。
    /// </summary>

    std::string getCodeFilename() const;
    bool codeFilenameIsSet() const;
    void unsetcodeFilename();
    void setCodeFilename(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CustomImage getCustomImage() const;
    bool customImageIsSet() const;
    void unsetcustomImage();
    void setCustomImage(const CustomImage& value);

    /// <summary>
    /// 用户自定义的name/value信息。 在函数中使用的参数。 举例：如函数要访问某个主机，可以设置自定义参数：Host&#x3D;{host_ip}，最多定义20个，总长度不超过4KB。
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);

    /// <summary>
    /// 用户自定义的name/value信息，用于需要加密的配置。举例：如配置加密密码，可以设置自定义参数：password&#x3D;{1234}，最多定义20个，总长度不超过4KB。
    /// </summary>

    std::string getEncryptedUserData() const;
    bool encryptedUserDataIsSet() const;
    void unsetencryptedUserData();
    void setEncryptedUserData(const std::string& value);

    /// <summary>
    /// 函数配置委托。需要IAM支持，并在IAM界面创建委托，当函数需要访问其他服务时，必须提供该字段。配置后用户可以通过函数执行入口方法中的context参数获取具有委托中权限的token、ak、sk，用于访问其他云服务。如果用户函数不访问任何云服务，则不用提供委托名称。
    /// </summary>

    std::string getXrole() const;
    bool xroleIsSet() const;
    void unsetxrole();
    void setXrole(const std::string& value);

    /// <summary>
    /// 函数执行委托。可为函数执行单独配置执行委托，这将减小不必要的性能损耗；不单独配置执行委托时，函数执行和函数配置将使用同一委托。
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
    /// 
    /// </summary>

    FuncCode getFuncCode() const;
    bool funcCodeIsSet() const;
    void unsetfuncCode();
    void setFuncCode(const FuncCode& value);

    /// <summary>
    /// 
    /// </summary>

    MountConfig getMountConfig() const;
    bool mountConfigIsSet() const;
    void unsetmountConfig();
    void setMountConfig(const MountConfig& value);

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
    /// 函数版本；部分局点只支持v1函数，缺省值则为v1
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FuncLogConfig getLogConfig() const;
    bool logConfigIsSet() const;
    void unsetlogConfig();
    void setLogConfig(const FuncLogConfig& value);

    /// <summary>
    /// 
    /// </summary>

    NetworkControlConfig getNetworkController() const;
    bool networkControllerIsSet() const;
    void unsetnetworkController();
    void setNetworkController(const NetworkControlConfig& value);

    /// <summary>
    /// 是否支持有状态，如果需要支持，需要固定传参为true，v2版本支持
    /// </summary>

    bool isIsStatefulFunction() const;
    bool isStatefulFunctionIsSet() const;
    void unsetisStatefulFunction();
    void setIsStatefulFunction(bool value);

    /// <summary>
    /// 是否启动动态内存配置
    /// </summary>

    bool isEnableDynamicMemory() const;
    bool enableDynamicMemoryIsSet() const;
    void unsetenableDynamicMemory();
    void setEnableDynamicMemory(bool value);

    /// <summary>
    /// 是否开启日志，缺省值为false。创建函数时，若此开关为true，且未传入log_config，则由FunctionGraph自动创建日志组日志流。
    /// </summary>

    bool isEnableLtsLog() const;
    bool enableLtsLogIsSet() const;
    void unsetenableLtsLog();
    void setEnableLtsLog(bool value);

    /// <summary>
    /// 自定义日志标签。函数执行时，可以按照自定义标签配置上报标签到云日志服务(LTS)，用户可以通过标签对日志进行过滤筛选。
    /// </summary>

    std::map<std::string, std::string>& getLtsCustomTag();
    bool ltsCustomTagIsSet() const;
    void unsetltsCustomTag();
    void setLtsCustomTag(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 用于环境变量加密的kms主秘钥ID。
    /// </summary>

    std::string getUserDataEncryptKmsKeyId() const;
    bool userDataEncryptKmsKeyIdIsSet() const;
    void unsetuserDataEncryptKmsKeyId();
    void setUserDataEncryptKmsKeyId(const std::string& value);

    /// <summary>
    /// 用于用户代码加密的kms主秘钥ID。
    /// </summary>

    std::string getCodeEncryptKmsKeyId() const;
    bool codeEncryptKmsKeyIdIsSet() const;
    void unsetcodeEncryptKmsKeyId();
    void setCodeEncryptKmsKeyId(const std::string& value);

    /// <summary>
    /// vpc中配置的内网域名。在函数配置调用DNS服务的接口解析内网域名时，则函数必须具备读取DNS资源权限的委托。
    /// </summary>

    std::string getDomainNames() const;
    bool domainNamesIsSet() const;
    void unsetdomainNames();
    void setDomainNames(const std::string& value);

    /// <summary>
    /// 函数标签。
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);


protected:
    std::string funcName_;
    bool funcNameIsSet_;
    std::string package_;
    bool packageIsSet_;
    std::string runtime_;
    bool runtimeIsSet_;
    int32_t timeout_;
    bool timeoutIsSet_;
    std::string handler_;
    bool handlerIsSet_;
    std::vector<std::string> dependVersionList_;
    bool dependVersionListIsSet_;
    FuncVpc funcVpc_;
    bool funcVpcIsSet_;
    int32_t memorySize_;
    bool memorySizeIsSet_;
    int32_t gpuMemory_;
    bool gpuMemoryIsSet_;
    std::string gpuType_;
    bool gpuTypeIsSet_;
    std::string codeType_;
    bool codeTypeIsSet_;
    std::string codeUrl_;
    bool codeUrlIsSet_;
    std::string codeFilename_;
    bool codeFilenameIsSet_;
    CustomImage customImage_;
    bool customImageIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string encryptedUserData_;
    bool encryptedUserDataIsSet_;
    std::string xrole_;
    bool xroleIsSet_;
    std::string appXrole_;
    bool appXroleIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    FuncCode funcCode_;
    bool funcCodeIsSet_;
    MountConfig mountConfig_;
    bool mountConfigIsSet_;
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
    std::string type_;
    bool typeIsSet_;
    FuncLogConfig logConfig_;
    bool logConfigIsSet_;
    NetworkControlConfig networkController_;
    bool networkControllerIsSet_;
    bool isStatefulFunction_;
    bool isStatefulFunctionIsSet_;
    bool enableDynamicMemory_;
    bool enableDynamicMemoryIsSet_;
    bool enableLtsLog_;
    bool enableLtsLogIsSet_;
    std::map<std::string, std::string> ltsCustomTag_;
    bool ltsCustomTagIsSet_;
    std::string userDataEncryptKmsKeyId_;
    bool userDataEncryptKmsKeyIdIsSet_;
    std::string codeEncryptKmsKeyId_;
    bool codeEncryptKmsKeyIdIsSet_;
    std::string domainNames_;
    bool domainNamesIsSet_;
    std::string tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionRequestBody_H_
