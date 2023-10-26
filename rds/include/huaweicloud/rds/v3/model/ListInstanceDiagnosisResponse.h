
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstanceDiagnosisResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstanceDiagnosisResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DiagnosisItemResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListInstanceDiagnosisResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstanceDiagnosisResponse();
    virtual ~ListInstanceDiagnosisResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstanceDiagnosisResponse members

    /// <summary>
    /// diagnosis info
    /// </summary>

    std::vector<DiagnosisItemResult>& getDiagnosis();
    bool diagnosisIsSet() const;
    void unsetdiagnosis();
    void setDiagnosis(const std::vector<DiagnosisItemResult>& value);


protected:
    std::vector<DiagnosisItemResult> diagnosis_;
    bool diagnosisIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstanceDiagnosisResponse_H_
