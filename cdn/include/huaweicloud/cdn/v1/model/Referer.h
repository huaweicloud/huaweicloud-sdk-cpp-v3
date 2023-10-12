
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_Referer_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_Referer_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  Referer
    : public ModelBase
{
public:
    Referer();
    virtual ~Referer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Referer members

    /// <summary>
    /// Referer类型。取值：0代表不设置Referer过滤；1代表黑名单；2代表白名单。默认取值为0。
    /// </summary>

    int32_t getRefererType() const;
    bool refererTypeIsSet() const;
    void unsetrefererType();
    void setRefererType(int32_t value);

    /// <summary>
    /// 请输入域名或IP地址，以“;”进行分割，域名、IP地址可以混合输入，支持泛域名添加。输入的域名、IP地址总数不超过400个。当设置防盗链时，此项必填。
    /// </summary>

    std::string getRefererList() const;
    bool refererListIsSet() const;
    void unsetrefererList();
    void setRefererList(const std::string& value);

    /// <summary>
    /// 是否包含空Referer。如果是黑名单并开启该选项，则表示无referer不允许访问。如果是白名单并开启该选项，则表示无referer允许访问。ttrue:包含，false：不包含，默认值false。
    /// </summary>

    bool isIncludeEmpty() const;
    bool includeEmptyIsSet() const;
    void unsetincludeEmpty();
    void setIncludeEmpty(bool value);


protected:
    int32_t refererType_;
    bool refererTypeIsSet_;
    std::string refererList_;
    bool refererListIsSet_;
    bool includeEmpty_;
    bool includeEmptyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_Referer_H_
