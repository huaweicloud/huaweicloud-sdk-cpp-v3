
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DiagnosisInstancesInfoResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DiagnosisInstancesInfoResult_H_


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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DiagnosisInstancesInfoResult
    : public ModelBase
{
public:
    DiagnosisInstancesInfoResult();
    virtual ~DiagnosisInstancesInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DiagnosisInstancesInfoResult members

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DiagnosisInstancesInfoResult_H_
