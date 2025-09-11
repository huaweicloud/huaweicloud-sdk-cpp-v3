
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionAsyncInvokeConfigRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionAsyncInvokeConfigRequest_H_


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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListFunctionAsyncInvokeConfigRequest
    : public ModelBase
{
public:
    ListFunctionAsyncInvokeConfigRequest();
    virtual ~ListFunctionAsyncInvokeConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFunctionAsyncInvokeConfigRequest members

    /// <summary>
    /// 函数的URN，详细解释见FunctionGraph函数模型的描述。
    /// </summary>

    std::string getFunctionUrn() const;
    bool functionUrnIsSet() const;
    void unsetfunctionUrn();
    void setFunctionUrn(const std::string& value);

    /// <summary>
    /// 上一次查询到的最后的记录位置。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 每页显示的条目数量。 - 如果不提供该值或者提供的值等于0，则使用默认值：10，最大值100，大于100取值100。 - 如果该值小于0，则返回参数错误。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

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
    std::string marker_;
    bool markerIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListFunctionAsyncInvokeConfigRequest& dereference_from_shared_ptr(std::shared_ptr<ListFunctionAsyncInvokeConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionAsyncInvokeConfigRequest_H_
