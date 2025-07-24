
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListIssueTreeResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListIssueTreeResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ApiError.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/ResultValueListWorkItemVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListIssueTreeResponse
    : public ModelBase, public HttpResponse
{
public:
    ListIssueTreeResponse();
    virtual ~ListIssueTreeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssueTreeResponse members

    /// <summary>
    /// 对外时：success|error; 对内时：ok|failed
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResultValueListWorkItemVo getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const ResultValueListWorkItemVo& value);

    /// <summary>
    /// 
    /// </summary>

    ApiError getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const ApiError& value);

    /// <summary>
    /// 由接口调用方传入，建议使用UUID保证请求的唯一性。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 对内接口才有此属性
    /// </summary>

    std::string getServerAddress() const;
    bool serverAddressIsSet() const;
    void unsetserverAddress();
    void setServerAddress(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    ResultValueListWorkItemVo result_;
    bool resultIsSet_;
    ApiError error_;
    bool errorIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;
    std::string serverAddress_;
    bool serverAddressIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListIssueTreeResponse_H_
