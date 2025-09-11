
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionAsyncInvocationsResult_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionAsyncInvocationsResult_H_


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
/// 异步调用记录
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListFunctionAsyncInvocationsResult
    : public ModelBase
{
public:
    ListFunctionAsyncInvocationsResult();
    virtual ~ListFunctionAsyncInvocationsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFunctionAsyncInvocationsResult members

    /// <summary>
    /// 异步调用请求ID
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 异步调用状态，支持5种状态 WAIT: 等待 RUNNING: 执行中 SUCCESS: 执行成功 FAIL: 执行失败 DISCARD: 请求丢弃
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 异步调用错误信息，如果执行成功，则返回空
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);

    /// <summary>
    /// 异步调用错误码，如果执行成功，则返回0
    /// </summary>

    int32_t getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(int32_t value);

    /// <summary>
    /// 异步调用开始时间（格式为YYYY-MM-DD&#39;T&#39;HH:mm:ss,UTC时间）。
    /// </summary>

    utility::datetime getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const utility::datetime& value);

    /// <summary>
    /// 异步调用结束时间（格式为YYYY-MM-DD&#39;T&#39;HH:mm:ss,UTC时间）。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;
    int32_t errorCode_;
    bool errorCodeIsSet_;
    utility::datetime startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionAsyncInvocationsResult_H_
