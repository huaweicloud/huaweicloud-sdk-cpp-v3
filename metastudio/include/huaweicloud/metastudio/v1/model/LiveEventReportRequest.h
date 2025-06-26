
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveEventReportRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveEventReportRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ReportLiveEventReq.h>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LiveEventReportRequest
    : public ModelBase
{
public:
    LiveEventReportRequest();
    virtual ~LiveEventReportRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveEventReportRequest members

    /// <summary>
    /// 直播间ID。
    /// </summary>

    std::string getRoomId() const;
    bool roomIdIsSet() const;
    void unsetroomId();
    void setRoomId(const std::string& value);

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
    /// 使用AK/SK方式认证时必选，携带项目ID信息。
    /// </summary>

    std::string getXProjectId() const;
    bool xProjectIdIsSet() const;
    void unsetxProjectId();
    void setXProjectId(const std::string& value);

    /// <summary>
    /// 第三方用户ID。不允许输入中文。
    /// </summary>

    std::string getXAppUserId() const;
    bool xAppUserIdIsSet() const;
    void unsetxAppUserId();
    void setXAppUserId(const std::string& value);

    /// <summary>
    /// 鉴权Key。通过HmacSHA256生成的鉴权key
    /// </summary>

    std::string getAuthKey() const;
    bool authKeyIsSet() const;
    void unsetauthKey();
    void setAuthKey(const std::string& value);

    /// <summary>
    /// 鉴权key过期时间。从1970年1月1日（UTC/GMT的午夜）开始所经过的毫秒数。
    /// </summary>

    int64_t getExpiresTime() const;
    bool expiresTimeIsSet() const;
    void unsetexpiresTime();
    void setExpiresTime(int64_t value);

    /// <summary>
    /// 鉴权Key。通过HmacSHA256生成的鉴权key
    /// </summary>

    std::string getXMssAuthKey() const;
    bool xMssAuthKeyIsSet() const;
    void unsetxMssAuthKey();
    void setXMssAuthKey(const std::string& value);

    /// <summary>
    /// **参数解释**： 鉴权key过期时间。从1970年1月1日（UTC/GMT的午夜）开始所经过的毫秒数。
    /// </summary>

    int64_t getXMssExpiresTime() const;
    bool xMssExpiresTimeIsSet() const;
    void unsetxMssExpiresTime();
    void setXMssExpiresTime(int64_t value);

    /// <summary>
    /// 是否刷新URL
    /// </summary>

    bool isRefreshUrl() const;
    bool refreshUrlIsSet() const;
    void unsetrefreshUrl();
    void setRefreshUrl(bool value);

    /// <summary>
    /// 
    /// </summary>

    ReportLiveEventReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ReportLiveEventReq& value);


protected:
    std::string roomId_;
    bool roomIdIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string xProjectId_;
    bool xProjectIdIsSet_;
    std::string xAppUserId_;
    bool xAppUserIdIsSet_;
    std::string authKey_;
    bool authKeyIsSet_;
    int64_t expiresTime_;
    bool expiresTimeIsSet_;
    std::string xMssAuthKey_;
    bool xMssAuthKeyIsSet_;
    int64_t xMssExpiresTime_;
    bool xMssExpiresTimeIsSet_;
    bool refreshUrl_;
    bool refreshUrlIsSet_;
    ReportLiveEventReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    LiveEventReportRequest& dereference_from_shared_ptr(std::shared_ptr<LiveEventReportRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveEventReportRequest_H_
