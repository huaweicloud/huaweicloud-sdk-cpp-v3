
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ExportFunctionRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ExportFunctionRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ExportFunctionRequest
    : public ModelBase
{
public:
    ExportFunctionRequest();
    virtual ~ExportFunctionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportFunctionRequest members

    /// <summary>
    /// 函数的URN，详细解释见FunctionGraph函数模型的描述。
    /// </summary>

    std::string getFunctionUrn() const;
    bool functionUrnIsSet() const;
    void unsetfunctionUrn();
    void setFunctionUrn(const std::string& value);

    /// <summary>
    /// 是否导出函数配置，默认为false。若无type参数，则必填code&#x3D;true或config&#x3D;true至少一项。
    /// </summary>

    bool isConfig() const;
    bool configIsSet() const;
    void unsetconfig();
    void setConfig(bool value);

    /// <summary>
    /// 是否导出函数代码，默认为false。若无type参数，则必填code&#x3D;true或config&#x3D;true至少一项。
    /// </summary>

    bool isCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(bool value);

    /// <summary>
    /// 不兼容与code、config参数混用；type&#x3D;code代表导出代码，type&#x3D;config代码导出配置
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 消息体的类型（格式）
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);


protected:
    std::string functionUrn_;
    bool functionUrnIsSet_;
    bool config_;
    bool configIsSet_;
    bool code_;
    bool codeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ExportFunctionRequest& dereference_from_shared_ptr(std::shared_ptr<ExportFunctionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ExportFunctionRequest_H_
