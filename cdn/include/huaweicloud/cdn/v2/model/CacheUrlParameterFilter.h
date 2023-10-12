
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CacheUrlParameterFilter_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CacheUrlParameterFilter_H_


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
/// 缓存url参数配置。  &gt; 此参数作为旧参数，将于近期下线，建议使用CacheRules设置URL参数。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CacheUrlParameterFilter
    : public ModelBase
{
public:
    CacheUrlParameterFilter();
    virtual ~CacheUrlParameterFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CacheUrlParameterFilter members

    /// <summary>
    /// 缓存URL参数操作类型： - full_url：缓存所有参数； - ignore_url_params：忽略所有参数； - del_params：忽略指定URL参数； - reserve_params：保留指定URL参数。   &gt; 本接口参数有调整，参数替换如下：   &gt; - del_params替代del_args。   &gt; - reserve_params替代reserve_args。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 参数值，多个参数使用分号分隔。
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CacheUrlParameterFilter_H_
