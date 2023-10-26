
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesInfoDiagnosisRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesInfoDiagnosisRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListInstancesInfoDiagnosisRequest
    : public ModelBase
{
public:
    ListInstancesInfoDiagnosisRequest();
    virtual ~ListInstancesInfoDiagnosisRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstancesInfoDiagnosisRequest members

    /// <summary>
    /// 引擎类型
    /// </summary>

    std::string getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const std::string& value);

    /// <summary>
    /// 诊断项
    /// </summary>

    std::string getDiagnosis() const;
    bool diagnosisIsSet() const;
    void unsetdiagnosis();
    void setDiagnosis(const std::string& value);

    /// <summary>
    /// offset
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// limit
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string engine_;
    bool engineIsSet_;
    std::string diagnosis_;
    bool diagnosisIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListInstancesInfoDiagnosisRequest& dereference_from_shared_ptr(std::shared_ptr<ListInstancesInfoDiagnosisRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesInfoDiagnosisRequest_H_
