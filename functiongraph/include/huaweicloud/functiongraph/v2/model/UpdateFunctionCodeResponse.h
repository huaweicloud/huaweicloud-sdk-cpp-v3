
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionCodeResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionCodeResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/FuncCode.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>
#include <huaweicloud/functiongraph/v2/model/StrategyConfig.h>
#include <huaweicloud/functiongraph/v2/model/Dependency.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  UpdateFunctionCodeResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateFunctionCodeResponse();
    virtual ~UpdateFunctionCodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateFunctionCodeResponse members

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
    /// FunctionGraph函数的执行环境 Java8: Java语言8版本。 Java11: Java语言11版本。 Java17: Java语言17版本（当前仅支持华北-乌兰察布二零二） Python2.7: Python语言2.7版本。 Python3.6: Pyton语言3.6版本。 Python3.9: Python语言3.9版本。 Python3.10: Python语言3.10版本。 Go1.8: Go语言1.8版本。 Go1.x: Go语言1.x版本。 Node.js6.10: Nodejs语言6.10版本。 Node.js8.10: Nodejs语言8.10版本。 Node.js10.16: Nodejs语言10.16版本。 Node.js12.13: Nodejs语言12.13版本。 Node.js14.18: Nodejs语言14.18版本。 Node.js16.17: Nodejs语言16.17版本。 Node.js18.15: Nodejs语言18.15版本。 C#(.NET Core 2.0): C#语言2.0版本。 C#(.NET Core 2.1): C#语言2.1版本。 C#(.NET Core 3.1): C#语言3.1版本。 C#(.NET Core 6.0): C#语言6.0版本（当前仅支持华北-乌兰察布二零二）。 Custom: 自定义运行时。 PHP7.3: Php语言7.3版本。 Cangjie1.0：仓颉语言1.0版本。 http: HTTP函数。 Custom Image: 自定义镜像函数。
    /// </summary>

    std::string getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const std::string& value);

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
    /// 函数代码SHA512 hash值，用于判断函数是否变化。
    /// </summary>

    std::string getDigest() const;
    bool digestIsSet() const;
    void unsetdigest();
    void setDigest(const std::string& value);

    /// <summary>
    /// 函数最后一次更新时间。
    /// </summary>

    utility::datetime getLastModified() const;
    bool lastModifiedIsSet() const;
    void unsetlastModified();
    void setLastModified(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>

    FuncCode getFuncCode() const;
    bool funcCodeIsSet() const;
    void unsetfuncCode();
    void setFuncCode(const FuncCode& value);

    /// <summary>
    /// 依赖id列表
    /// </summary>

    std::vector<std::string>& getDependList();
    bool dependListIsSet() const;
    void unsetdependList();
    void setDependList(const std::vector<std::string>& value);

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

    StrategyConfig getStrategyConfig() const;
    bool strategyConfigIsSet() const;
    void unsetstrategyConfig();
    void setStrategyConfig(const StrategyConfig& value);

    /// <summary>
    /// 函数依赖代码包列表。
    /// </summary>

    std::vector<Dependency>& getDependencies();
    bool dependenciesIsSet() const;
    void unsetdependencies();
    void setDependencies(const std::vector<Dependency>& value);

    /// <summary>
    /// 用于用户代码加密的kms主秘钥ID。
    /// </summary>

    std::string getCodeEncryptKmsKeyId() const;
    bool codeEncryptKmsKeyIdIsSet() const;
    void unsetcodeEncryptKmsKeyId();
    void setCodeEncryptKmsKeyId(const std::string& value);


protected:
    std::string funcUrn_;
    bool funcUrnIsSet_;
    std::string funcName_;
    bool funcNameIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string runtime_;
    bool runtimeIsSet_;
    std::string codeType_;
    bool codeTypeIsSet_;
    std::string codeUrl_;
    bool codeUrlIsSet_;
    std::string codeFilename_;
    bool codeFilenameIsSet_;
    int64_t codeSize_;
    bool codeSizeIsSet_;
    std::string digest_;
    bool digestIsSet_;
    utility::datetime lastModified_;
    bool lastModifiedIsSet_;
    FuncCode funcCode_;
    bool funcCodeIsSet_;
    std::vector<std::string> dependList_;
    bool dependListIsSet_;
    std::vector<std::string> dependVersionList_;
    bool dependVersionListIsSet_;
    StrategyConfig strategyConfig_;
    bool strategyConfigIsSet_;
    std::vector<Dependency> dependencies_;
    bool dependenciesIsSet_;
    std::string codeEncryptKmsKeyId_;
    bool codeEncryptKmsKeyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionCodeResponse_H_
