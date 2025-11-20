
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ExecuteTransferAssetActionRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ExecuteTransferAssetActionRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/TransJobRejectBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ExecuteTransferAssetActionRequest
    : public ModelBase
{
public:
    ExecuteTransferAssetActionRequest();
    virtual ~ExecuteTransferAssetActionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecuteTransferAssetActionRequest members

    /// <summary>
    /// 第三方用户ID。不允许输入中文。
    /// </summary>

    std::string getXAppUserId() const;
    bool xAppUserIdIsSet() const;
    void unsetxAppUserId();
    void setXAppUserId(const std::string& value);

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带的鉴权信息。
    /// </summary>

    std::string getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。  格式为(YYYYMMDD&#39;T&#39;HHMMSS&#39;Z&#39;)。
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 控制。 cancel：取消资产转移，仅转移发起方可调用。 accept：接受资产转移，仅转移接受方可调用。 accept_confirm：确认接受资产转移，仅转移接受方可调用，仅需要计费的转移需再次确认。 reject: 拒绝资产转移，仅转移接受方可调用。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TransJobRejectBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TransJobRejectBody& value);


protected:
    std::string xAppUserId_;
    bool xAppUserIdIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string action_;
    bool actionIsSet_;
    TransJobRejectBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ExecuteTransferAssetActionRequest& dereference_from_shared_ptr(std::shared_ptr<ExecuteTransferAssetActionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ExecuteTransferAssetActionRequest_H_
