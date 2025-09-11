
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ImportFunctionRequestBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ImportFunctionRequestBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 导入函数请求结构体
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ImportFunctionRequestBody
    : public ModelBase
{
public:
    ImportFunctionRequestBody();
    virtual ~ImportFunctionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImportFunctionRequestBody members

    /// <summary>
    /// 函数名
    /// </summary>

    std::string getFuncName() const;
    bool funcNameIsSet() const;
    void unsetfuncName();
    void setFuncName(const std::string& value);

    /// <summary>
    /// 文件名
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 文件类型
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// 函数代码。代码必须要进行base64编码
    /// </summary>

    std::string getFileCode() const;
    bool fileCodeIsSet() const;
    void unsetfileCode();
    void setFileCode(const std::string& value);

    /// <summary>
    /// 应用名称，默认为default
    /// </summary>

    std::string getPackage() const;
    bool packageIsSet() const;
    void unsetpackage();
    void setPackage(const std::string& value);


protected:
    std::string funcName_;
    bool funcNameIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    std::string fileCode_;
    bool fileCodeIsSet_;
    std::string package_;
    bool packageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ImportFunctionRequestBody_H_
