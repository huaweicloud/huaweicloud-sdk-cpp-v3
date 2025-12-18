
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListNetworkQualityRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListNetworkQualityRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/RestQosRequestDTO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ListNetworkQualityRequest
    : public ModelBase
{
public:
    ListNetworkQualityRequest();
    virtual ~ListNetworkQualityRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListNetworkQualityRequest members

    /// <summary>
    /// 会议id
    /// </summary>

    std::string getConferenceid() const;
    bool conferenceidIsSet() const;
    void unsetconferenceid();
    void setConferenceid(const std::string& value);

    /// <summary>
    /// 会控Token，通过[[获取会控token](https://support.huaweicloud.com/api-meeting/meeting_21_0027.html)](tag:hws)[[获取会控token](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0027.html)](tag:hk)接口获得。
    /// </summary>

    std::string getConfToken() const;
    bool confTokenIsSet() const;
    void unsetconfToken();
    void setConfToken(const std::string& value);

    /// <summary>
    /// 会议的appId
    /// </summary>

    std::string getAppid() const;
    bool appidIsSet() const;
    void unsetappid();
    void setAppid(const std::string& value);

    /// <summary>
    /// 会议UUID，MMR房间ID
    /// </summary>

    std::string getConfuuid() const;
    bool confuuidIsSet() const;
    void unsetconfuuid();
    void setConfuuid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RestQosRequestDTO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RestQosRequestDTO& value);


protected:
    std::string conferenceid_;
    bool conferenceidIsSet_;
    std::string confToken_;
    bool confTokenIsSet_;
    std::string appid_;
    bool appidIsSet_;
    std::string confuuid_;
    bool confuuidIsSet_;
    RestQosRequestDTO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListNetworkQualityRequest& dereference_from_shared_ptr(std::shared_ptr<ListNetworkQualityRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListNetworkQualityRequest_H_
