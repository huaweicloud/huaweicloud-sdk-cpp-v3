
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/DiagnosisInfo.h>
#include <vector>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse();
    virtual ~ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse members

    /// <summary>
    /// 诊断信息列表。
    /// </summary>

    std::vector<DiagnosisInfo>& getDiagnosisInfo();
    bool diagnosisInfoIsSet() const;
    void unsetdiagnosisInfo();
    void setDiagnosisInfo(const std::vector<DiagnosisInfo>& value);


protected:
    std::vector<DiagnosisInfo> diagnosisInfo_;
    bool diagnosisInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse_H_
