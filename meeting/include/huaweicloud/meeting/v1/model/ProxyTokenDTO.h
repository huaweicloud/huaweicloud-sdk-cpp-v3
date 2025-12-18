
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ProxyTokenDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ProxyTokenDTO_H_


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
/// 代理鉴权信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ProxyTokenDTO
    : public ModelBase
{
public:
    ProxyTokenDTO();
    virtual ~ProxyTokenDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyTokenDTO members

    /// <summary>
    /// 代理鉴权服务器的短token字符串。
    /// </summary>

    std::string getAccessToken() const;
    bool accessTokenIsSet() const;
    void unsetaccessToken();
    void setAccessToken(const std::string& value);

    /// <summary>
    /// 代理鉴权服务器的长token字符串。
    /// </summary>

    std::string getLongAccessToken() const;
    bool longAccessTokenIsSet() const;
    void unsetlongAccessToken();
    void setLongAccessToken(const std::string& value);

    /// <summary>
    /// Token有效时长，单位：秒。
    /// </summary>

    int64_t getValidPeriod() const;
    bool validPeriodIsSet() const;
    void unsetvalidPeriod();
    void setValidPeriod(int64_t value);

    /// <summary>
    /// 中台地址。
    /// </summary>

    std::string getMiddleEndUrl() const;
    bool middleEndUrlIsSet() const;
    void unsetmiddleEndUrl();
    void setMiddleEndUrl(const std::string& value);

    /// <summary>
    /// 中台内网地址。
    /// </summary>

    std::string getMiddleEndInnerUrl() const;
    bool middleEndInnerUrlIsSet() const;
    void unsetmiddleEndInnerUrl();
    void setMiddleEndInnerUrl(const std::string& value);

    /// <summary>
    /// 是否开启二次路由。
    /// </summary>

    bool isEnableRerouting() const;
    bool enableReroutingIsSet() const;
    void unsetenableRerouting();
    void setEnableRerouting(bool value);


protected:
    std::string accessToken_;
    bool accessTokenIsSet_;
    std::string longAccessToken_;
    bool longAccessTokenIsSet_;
    int64_t validPeriod_;
    bool validPeriodIsSet_;
    std::string middleEndUrl_;
    bool middleEndUrlIsSet_;
    std::string middleEndInnerUrl_;
    bool middleEndInnerUrlIsSet_;
    bool enableRerouting_;
    bool enableReroutingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ProxyTokenDTO_H_
