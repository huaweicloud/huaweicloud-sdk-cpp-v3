
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListAsyncInvocationsRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListAsyncInvocationsRequest_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListAsyncInvocationsRequest
    : public ModelBase
{
public:
    ListAsyncInvocationsRequest();
    virtual ~ListAsyncInvocationsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAsyncInvocationsRequest members

    /// <summary>
    /// 函数的URN，详细解释见FunctionGraph函数模型的描述。
    /// </summary>

    std::string getFunctionUrn() const;
    bool functionUrnIsSet() const;
    void unsetfunctionUrn();
    void setFunctionUrn(const std::string& value);

    /// <summary>
    /// 需要查询的异步请求ID。如果不指定，默认查询所有异步调用记录
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 本次查询起始位置，默认值0
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 本次查询最大返回的数据条数，最大值500，默认值100
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 本次查询指定的异步调用状态，支持5种状态，如果不指定，则查询所有状态的调用记录 WAIT: 等待 RUNNING: 执行中 SUCCESS: 执行成功 FAIL: 执行失败 DISCARD: 请求丢弃
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 搜索起始时间（格式为YYYY-MM-DD&#39;T&#39;HH:mm:ss,UTC时间）。如果不指定默认为当前时间前1小时
    /// </summary>

    utility::datetime getQueryBeginTime() const;
    bool queryBeginTimeIsSet() const;
    void unsetqueryBeginTime();
    void setQueryBeginTime(const utility::datetime& value);

    /// <summary>
    /// 搜索结束时间（格式为YYYY-MM-DD&#39;T&#39;HH:mm:ss,UTC时间）。如果不指定默认为当前时间
    /// </summary>

    utility::datetime getQueryEndTime() const;
    bool queryEndTimeIsSet() const;
    void unsetqueryEndTime();
    void setQueryEndTime(const utility::datetime& value);

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
    std::string requestId_;
    bool requestIdIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string status_;
    bool statusIsSet_;
    utility::datetime queryBeginTime_;
    bool queryBeginTimeIsSet_;
    utility::datetime queryEndTime_;
    bool queryEndTimeIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAsyncInvocationsRequest& dereference_from_shared_ptr(std::shared_ptr<ListAsyncInvocationsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListAsyncInvocationsRequest_H_
