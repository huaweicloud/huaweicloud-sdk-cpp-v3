
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlAuthGetBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlAuthGetBody_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/InheritConfigQuery.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// URL鉴权查询响应体。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  UrlAuthGetBody
    : public ModelBase
{
public:
    UrlAuthGetBody();
    virtual ~UrlAuthGetBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UrlAuthGetBody members

    /// <summary>
    /// 是否开启URL鉴权，on：开启,off：关闭。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 鉴权方式， type_a：鉴权方式A， type_b：鉴权方式B， type_c1：鉴权方式C1， type_c2：鉴权方式C2。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 过期时间，单位：秒。
    /// </summary>

    int32_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int32_t value);

    /// <summary>
    /// 加密算法。
    /// </summary>

    std::string getSignMethod() const;
    bool signMethodIsSet() const;
    void unsetsignMethod();
    void setSignMethod(const std::string& value);

    /// <summary>
    /// 鉴权范围。
    /// </summary>

    std::string getMatchType() const;
    bool matchTypeIsSet() const;
    void unsetmatchType();
    void setMatchType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    InheritConfigQuery getInheritConfig() const;
    bool inheritConfigIsSet() const;
    void unsetinheritConfig();
    void setInheritConfig(const InheritConfigQuery& value);

    /// <summary>
    /// 鉴权KEY。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 鉴权KEY（备）。
    /// </summary>

    std::string getBackupKey() const;
    bool backupKeyIsSet() const;
    void unsetbackupKey();
    void setBackupKey(const std::string& value);

    /// <summary>
    /// 鉴权参数。
    /// </summary>

    std::string getSignArg() const;
    bool signArgIsSet() const;
    void unsetsignArg();
    void setSignArg(const std::string& value);

    /// <summary>
    /// 时间格式， dec：十进制, hex：十六进制。
    /// </summary>

    std::string getTimeFormat() const;
    bool timeFormatIsSet() const;
    void unsettimeFormat();
    void setTimeFormat(const std::string& value);

    /// <summary>
    /// 时间参数。
    /// </summary>

    std::string getTimeArg() const;
    bool timeArgIsSet() const;
    void unsettimeArg();
    void setTimeArg(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t expireTime_;
    bool expireTimeIsSet_;
    std::string signMethod_;
    bool signMethodIsSet_;
    std::string matchType_;
    bool matchTypeIsSet_;
    InheritConfigQuery inheritConfig_;
    bool inheritConfigIsSet_;
    std::string key_;
    bool keyIsSet_;
    std::string backupKey_;
    bool backupKeyIsSet_;
    std::string signArg_;
    bool signArgIsSet_;
    std::string timeFormat_;
    bool timeFormatIsSet_;
    std::string timeArg_;
    bool timeArgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlAuthGetBody_H_
