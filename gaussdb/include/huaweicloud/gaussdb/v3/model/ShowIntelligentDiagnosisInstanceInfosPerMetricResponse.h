
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowIntelligentDiagnosisInstanceInfosPerMetricResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowIntelligentDiagnosisInstanceInfosPerMetricResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdb/v3/model/InstanceInfoForDiagnosis.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowIntelligentDiagnosisInstanceInfosPerMetricResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowIntelligentDiagnosisInstanceInfosPerMetricResponse();
    virtual ~ShowIntelligentDiagnosisInstanceInfosPerMetricResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIntelligentDiagnosisInstanceInfosPerMetricResponse members

    /// <summary>
    /// 当前指标的异常实例总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 异常实例信息。
    /// </summary>

    std::vector<InstanceInfoForDiagnosis>& getInstanceInfos();
    bool instanceInfosIsSet() const;
    void unsetinstanceInfos();
    void setInstanceInfos(const std::vector<InstanceInfoForDiagnosis>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<InstanceInfoForDiagnosis> instanceInfos_;
    bool instanceInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowIntelligentDiagnosisInstanceInfosPerMetricResponse_H_
