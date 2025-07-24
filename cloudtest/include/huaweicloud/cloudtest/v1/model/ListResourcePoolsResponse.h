
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListResourcePoolsResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListResourcePoolsResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ApiError.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/ResultValueListResourcePoolVo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListResourcePoolsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListResourcePoolsResponse();
    virtual ~ListResourcePoolsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListResourcePoolsResponse members

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

    ResultValueListResourcePoolVo getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const ResultValueListResourcePoolVo& value);

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


protected:
    std::string status_;
    bool statusIsSet_;
    ResultValueListResourcePoolVo result_;
    bool resultIsSet_;
    ApiError error_;
    bool errorIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListResourcePoolsResponse_H_
