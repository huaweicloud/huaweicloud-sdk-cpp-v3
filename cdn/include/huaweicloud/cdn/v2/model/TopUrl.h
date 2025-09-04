
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_TopUrl_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_TopUrl_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// top_url配置
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  TopUrl
    : public ModelBase
{
public:
    TopUrl();
    virtual ~TopUrl();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TopUrl members

    /// <summary>
    /// 配置开关
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// 热点统计配置指标的上报数量。如top_url 100、top_url 1000
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 热点统计类指标是否支持按状态码上报
    /// </summary>

    bool isSortByCode() const;
    bool sortByCodeIsSet() const;
    void unsetsortByCode();
    void setSortByCode(bool value);


protected:
    bool enable_;
    bool enableIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    bool sortByCode_;
    bool sortByCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_TopUrl_H_
