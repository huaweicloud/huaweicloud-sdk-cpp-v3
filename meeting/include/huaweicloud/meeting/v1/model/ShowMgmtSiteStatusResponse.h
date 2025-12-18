
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowMgmtSiteStatusResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowMgmtSiteStatusResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowMgmtSiteStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMgmtSiteStatusResponse();
    virtual ~ShowMgmtSiteStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMgmtSiteStatusResponse members

    /// <summary>
    /// 管理站点状态 NORMAL:正常  FAULT:故障
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 链接入会跳转url
    /// </summary>

    std::string getRedirectJoinUrl() const;
    bool redirectJoinUrlIsSet() const;
    void unsetredirectJoinUrl();
    void setRedirectJoinUrl(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string redirectJoinUrl_;
    bool redirectJoinUrlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowMgmtSiteStatusResponse_H_
