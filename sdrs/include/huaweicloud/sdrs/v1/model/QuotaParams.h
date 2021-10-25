
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_QuotaParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_QuotaParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/QuotaResourceParams.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 配额数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  QuotaParams
    : public ModelBase
{
public:
    QuotaParams();
    virtual ~QuotaParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QuotaParams members

    /// <summary>
    /// 租户资源配额信息列表。
    /// </summary>

    std::vector<QuotaResourceParams>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<QuotaResourceParams>& value);


protected:
    std::vector<QuotaResourceParams> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_QuotaParams_H_
