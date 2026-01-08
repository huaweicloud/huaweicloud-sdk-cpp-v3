
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_RefererConfig_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_RefererConfig_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 防盗链。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  RefererConfig
    : public ModelBase
{
public:
    RefererConfig();
    virtual ~RefererConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RefererConfig members

    /// <summary>
    /// Referer黑白名单类型，off：关闭Referer黑白名单，black：Referer黑名单，white：Referer白名单。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 域名或IP地址，以“,”进行分割，域名、IP地址可以混合输入，支持泛域名和带端口的域名。域名、IP地址总数不超过500个，端口取值范围1-65535。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 是否包含空Referer，如果是黑名单并开启该选项，则表示无referer不允许访问，如果是白名单并开启该选项，则表示无referer允许访问，true:包含空，false：不包含空，默认值false。
    /// </summary>

    bool isIncludeEmpty() const;
    bool includeEmptyIsSet() const;
    void unsetincludeEmpty();
    void setIncludeEmpty(bool value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string value_;
    bool valueIsSet_;
    bool includeEmpty_;
    bool includeEmptyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_RefererConfig_H_
