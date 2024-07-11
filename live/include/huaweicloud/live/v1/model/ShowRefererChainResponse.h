
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowRefererChainResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowRefererChainResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ShowRefererChainResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRefererChainResponse();
    virtual ~ShowRefererChainResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRefererChainResponse members

    /// <summary>
    /// 直播域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// referer防盗链开关：true表示开启；false表示关闭
    /// </summary>

    std::string getGuardSwitch() const;
    bool guardSwitchIsSet() const;
    void unsetguardSwitch();
    void setGuardSwitch(const std::string& value);

    /// <summary>
    /// 是否包含referer头域：true表示包含；false表示不包含；guard_switch为true则必填
    /// </summary>

    std::string getRefererConfigEmpty() const;
    bool refererConfigEmptyIsSet() const;
    void unsetrefererConfigEmpty();
    void setRefererConfigEmpty(const std::string& value);

    /// <summary>
    /// 是否为referer白名单：true表示白名单；false表示黑名单；guard_switch为true则必填
    /// </summary>

    std::string getRefererWhiteList() const;
    bool refererWhiteListIsSet() const;
    void unsetrefererWhiteList();
    void setRefererWhiteList(const std::string& value);

    /// <summary>
    /// 域名列表，域名为正则表达式；最多支持配置100个域名，以英文“;”进行分隔；guard_switch为true则必填
    /// </summary>

    std::vector<std::string>& getRefererAuthList();
    bool refererAuthListIsSet() const;
    void unsetrefererAuthList();
    void setRefererAuthList(const std::vector<std::string>& value);


protected:
    std::string domain_;
    bool domainIsSet_;
    std::string guardSwitch_;
    bool guardSwitchIsSet_;
    std::string refererConfigEmpty_;
    bool refererConfigEmptyIsSet_;
    std::string refererWhiteList_;
    bool refererWhiteListIsSet_;
    std::vector<std::string> refererAuthList_;
    bool refererAuthListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowRefererChainResponse_H_
