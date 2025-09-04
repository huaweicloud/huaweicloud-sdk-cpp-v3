
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_TopOriginUrlSummary_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_TopOriginUrlSummary_H_


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
/// top origin url 详情数据
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  TopOriginUrlSummary
    : public ModelBase
{
public:
    TopOriginUrlSummary();
    virtual ~TopOriginUrlSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TopOriginUrlSummary members

    /// <summary>
    /// 回源url名称
    /// </summary>

    std::string getOriginUrl() const;
    bool originUrlIsSet() const;
    void unsetoriginUrl();
    void setOriginUrl(const std::string& value);

    /// <summary>
    /// 对应查询类型的值。（流量单位：Byte）
    /// </summary>

    int64_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int64_t value);

    /// <summary>
    /// 该origin url的流量(或请求数)占当前查询条件下总流量(或请求数)的比例。保留4位小数
    /// </summary>

    double getRatio() const;
    bool ratioIsSet() const;
    void unsetratio();
    void setRatio(double value);


protected:
    std::string originUrl_;
    bool originUrlIsSet_;
    int64_t value_;
    bool valueIsSet_;
    double ratio_;
    bool ratioIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_TopOriginUrlSummary_H_
