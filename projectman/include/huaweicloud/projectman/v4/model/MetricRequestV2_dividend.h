
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_MetricRequestV2_dividend_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_MetricRequestV2_dividend_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/projectman/v4/model/MetricRequestV2_dividend_custom_fields.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 指标分子过滤条件
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  MetricRequestV2_dividend
    : public ModelBase
{
public:
    MetricRequestV2_dividend();
    virtual ~MetricRequestV2_dividend();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MetricRequestV2_dividend members

    /// <summary>
    /// 自定义类型过滤条件
    /// </summary>

    std::vector<MetricRequestV2_dividend_custom_fields>& getCustomFields();
    bool customFieldsIsSet() const;
    void unsetcustomFields();
    void setCustomFields(const std::vector<MetricRequestV2_dividend_custom_fields>& value);


protected:
    std::vector<MetricRequestV2_dividend_custom_fields> customFields_;
    bool customFieldsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_MetricRequestV2_dividend_H_
