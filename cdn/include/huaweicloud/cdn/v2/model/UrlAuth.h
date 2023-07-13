
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlAuth_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlAuth_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// URL鉴权。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  UrlAuth
    : public ModelBase
{
public:
    UrlAuth();
    virtual ~UrlAuth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UrlAuth members

    /// <summary>
    /// 是否开启URL鉴权，off：开启,on：关闭。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 鉴权方式 type_a：鉴权方式A type_b：鉴权方式B type_c1：鉴权方式C1 type_c2：鉴权方式C2
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 过期时间：范围：0-31536000单位为秒。
    /// </summary>

    int32_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int32_t value);

    /// <summary>
    /// 加密的算法 可选择md5或sha256。
    /// </summary>

    std::string getSignMethod() const;
    bool signMethodIsSet() const;
    void unsetsignMethod();
    void setSignMethod(const std::string& value);

    /// <summary>
    /// 鉴权范围，目前仅支持配置所有文件参与鉴权，all：所有文件。
    /// </summary>

    std::string getMatchType() const;
    bool matchTypeIsSet() const;
    void unsetmatchType();
    void setMatchType(const std::string& value);

    /// <summary>
    /// 鉴权KEY 由6-32位大小写字母、数字构成。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 鉴权KEY（备） 由6-32位大小写字母、数字构成。
    /// </summary>

    std::string getBackupKey() const;
    bool backupKeyIsSet() const;
    void unsetbackupKey();
    void setBackupKey(const std::string& value);

    /// <summary>
    /// 鉴权参数：1-100位可以由大小写字母、数字、下划线构成（不能以数字开头）。
    /// </summary>

    std::string getSignArg() const;
    bool signArgIsSet() const;
    void unsetsignArg();
    void setSignArg(const std::string& value);

    /// <summary>
    /// 时间格式 dec：十进制 hex：十六进制 鉴权方式A：只支持十进制 鉴权方式B：只支持十进制 鉴权方式C1：只支持十六进制鉴权方式 鉴权方式C2：支持十进制/十六进制
    /// </summary>

    std::string getTimeFormat() const;
    bool timeFormatIsSet() const;
    void unsettimeFormat();
    void setTimeFormat(const std::string& value);


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
    std::string key_;
    bool keyIsSet_;
    std::string backupKey_;
    bool backupKeyIsSet_;
    std::string signArg_;
    bool signArgIsSet_;
    std::string timeFormat_;
    bool timeFormatIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlAuth_H_
