
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RunTestCaseResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RunTestCaseResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/ErrorDetailInfo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  RunTestCaseResponse
    : public ModelBase, public HttpResponse
{
public:
    RunTestCaseResponse();
    virtual ~RunTestCaseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunTestCaseResponse members

    /// <summary>
    /// 接口调用失败错误码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 接口调用失败错误信息
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorDetailInfo getErrorDetail() const;
    bool errorDetailIsSet() const;
    void unseterrorDetail();
    void setErrorDetail(const ErrorDetailInfo& value);


protected:
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;
    ErrorDetailInfo errorDetail_;
    bool errorDetailIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RunTestCaseResponse_H_
