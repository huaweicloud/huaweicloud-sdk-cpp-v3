
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateUrlAuthchainReq_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateUrlAuthchainReq_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateUrlAuthchainReq
    : public ModelBase
{
public:
    CreateUrlAuthchainReq();
    virtual ~CreateUrlAuthchainReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateUrlAuthchainReq members

    /// <summary>
    /// 播放域名或推流域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 域名类型
    /// </summary>

    std::string getDomainType() const;
    bool domainTypeIsSet() const;
    void unsetdomainType();
    void setDomainType(const std::string& value);

    /// <summary>
    /// 流名称，与推流或播放地址中的StreamName一致。
    /// </summary>

    std::string getStream() const;
    bool streamIsSet() const;
    void unsetstream();
    void setStream(const std::string& value);

    /// <summary>
    /// 应用名称，与推流或播放地址中的AppName一致。
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 鉴权方式C必选。 检查级别。LiveID由AppName和StreamName组成,即\&quot;&lt;app_name&gt;/&lt;stream_name&gt;\&quot;。 包含如下取值： - 3：只检查LiveID是否匹配，不检查鉴权URL是否过期。 - 5：检查LiveID是否匹配，Timestamp是否超时。 
    /// </summary>

    int32_t getCheckLevel() const;
    bool checkLevelIsSet() const;
    void unsetcheckLevel();
    void setCheckLevel(int32_t value);

    /// <summary>
    /// 用户定义的有效访问时间起始点；例如：2006-01-02T15:04:05Z07:00 不传或为空表示当前时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);


protected:
    std::string domain_;
    bool domainIsSet_;
    std::string domainType_;
    bool domainTypeIsSet_;
    std::string stream_;
    bool streamIsSet_;
    std::string app_;
    bool appIsSet_;
    int32_t checkLevel_;
    bool checkLevelIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateUrlAuthchainReq_H_
