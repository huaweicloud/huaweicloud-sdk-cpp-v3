
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionTriggerRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionTriggerRequest_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/functiongraph/v2/model/CreateFunctionTriggerRequestBody.h>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  CreateFunctionTriggerRequest
    : public ModelBase
{
public:
    CreateFunctionTriggerRequest();
    virtual ~CreateFunctionTriggerRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFunctionTriggerRequest members

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
    /// 
    /// </summary>

    CreateFunctionTriggerRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateFunctionTriggerRequestBody& value);


protected:
    std::string functionUrn_;
    bool functionUrnIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    CreateFunctionTriggerRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateFunctionTriggerRequest& dereference_from_shared_ptr(std::shared_ptr<CreateFunctionTriggerRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionTriggerRequest_H_
