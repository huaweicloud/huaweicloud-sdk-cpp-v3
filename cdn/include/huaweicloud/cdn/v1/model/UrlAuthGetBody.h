
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_UrlAuthGetBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_UrlAuthGetBody_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// URL鉴权查询响应体。
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  UrlAuthGetBody
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
    /// 是否开启URL鉴权，off：开启,on：关闭。
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
    /// 时间格式， dec：十进制, hex：十六进制。
    /// </summary>

    std::string getTimeFormat() const;
    bool timeFormatIsSet() const;
    void unsettimeFormat();
    void setTimeFormat(const std::string& value);

    /// <summary>
    /// 过期时间，单位：秒。
    /// </summary>

    int32_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int32_t value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string timeFormat_;
    bool timeFormatIsSet_;
    int32_t expireTime_;
    bool expireTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_UrlAuthGetBody_H_
