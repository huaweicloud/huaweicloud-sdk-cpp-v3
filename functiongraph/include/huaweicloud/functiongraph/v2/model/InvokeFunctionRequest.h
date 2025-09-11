
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_InvokeFunctionRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_InvokeFunctionRequest_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  InvokeFunctionRequest
    : public ModelBase
{
public:
    InvokeFunctionRequest();
    virtual ~InvokeFunctionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InvokeFunctionRequest members

    /// <summary>
    /// 函数的URN，详细解释见FunctionGraph函数模型的描述。
    /// </summary>

    std::string getFunctionUrn() const;
    bool functionUrnIsSet() const;
    void unsetfunctionUrn();
    void setFunctionUrn(const std::string& value);

    /// <summary>
    /// 消息体的类型（格式）
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 取值为：tail（返回函数执行后的4K日志），或者为空（不返回日志）。
    /// </summary>

    std::string getXCffLogType() const;
    bool xCffLogTypeIsSet() const;
    void unsetxCffLogType();
    void setXCffLogType(const std::string& value);

    /// <summary>
    /// 返回体格式，取值v0,v1。 v0:默认返回文本格式 v1:默认返回json格式，sdk需要使用此值。
    /// </summary>

    std::string getXCFFRequestVersion() const;
    bool xCFFRequestVersionIsSet() const;
    void unsetxCFFRequestVersion();
    void setXCFFRequestVersion(const std::string& value);

    /// <summary>
    /// 设置本次执行函数使用的内存规格,取值： 128、256、512、768、1024、1280、1536、1792、2048、2560、3072、3584、4096、8192、10240
    /// </summary>

    std::string getXCffInstanceMemory() const;
    bool xCffInstanceMemoryIsSet() const;
    void unsetxCffInstanceMemory();
    void setXCffInstanceMemory(const std::string& value);

    /// <summary>
    /// 执行函数请求体，为json格式。
    /// </summary>

    std::map<std::string, Object>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::map<std::string, Object>& value);


protected:
    std::string functionUrn_;
    bool functionUrnIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    std::string xCffLogType_;
    bool xCffLogTypeIsSet_;
    std::string xCFFRequestVersion_;
    bool xCFFRequestVersionIsSet_;
    std::string xCffInstanceMemory_;
    bool xCffInstanceMemoryIsSet_;
    std::map<std::string, Object> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    InvokeFunctionRequest& dereference_from_shared_ptr(std::shared_ptr<InvokeFunctionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_InvokeFunctionRequest_H_
