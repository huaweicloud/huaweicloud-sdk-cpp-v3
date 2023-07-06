
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_IpFilter_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_IpFilter_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// IP黑白名单。
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  IpFilter
    : public ModelBase
{
public:
    IpFilter();
    virtual ~IpFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// IpFilter members

    /// <summary>
    /// IP黑白名单类型，off：关闭IP黑白名单，black：IP黑名单，white：IP白名单。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 配置IP黑白名单，当type&#x3D;off时，非必传， 支持IPv6,支持配置IP地址和IP&amp;掩码格式的网段, 多条规则用“,”分割,最多支持配置150个, 多个完全重复的IP/IP段将合并为一个,不支持带通配符的地址，如192.168.0.*。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_IpFilter_H_
