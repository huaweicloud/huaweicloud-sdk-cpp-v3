
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionCodeRequestBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionCodeRequestBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/FuncCode.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  UpdateFunctionCodeRequestBody
    : public ModelBase
{
public:
    UpdateFunctionCodeRequestBody();
    virtual ~UpdateFunctionCodeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateFunctionCodeRequestBody members

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
    /// 
    /// </summary>

    FuncCode getFuncCode() const;
    bool funcCodeIsSet() const;
    void unsetfuncCode();
    void setFuncCode(const FuncCode& value);

    /// <summary>
    /// 依赖版本id列表
    /// </summary>

    std::vector<std::string>& getDependVersionList();
    bool dependVersionListIsSet() const;
    void unsetdependVersionList();
    void setDependVersionList(const std::vector<std::string>& value);

    /// <summary>
    /// 用于用户代码加密的kms主秘钥ID。
    /// </summary>

    std::string getCodeEncryptKmsKeyId() const;
    bool codeEncryptKmsKeyIdIsSet() const;
    void unsetcodeEncryptKmsKeyId();
    void setCodeEncryptKmsKeyId(const std::string& value);


protected:
    std::string codeType_;
    bool codeTypeIsSet_;
    std::string codeUrl_;
    bool codeUrlIsSet_;
    std::string codeFilename_;
    bool codeFilenameIsSet_;
    FuncCode funcCode_;
    bool funcCodeIsSet_;
    std::vector<std::string> dependVersionList_;
    bool dependVersionListIsSet_;
    std::string codeEncryptKmsKeyId_;
    bool codeEncryptKmsKeyIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionCodeRequestBody_H_
