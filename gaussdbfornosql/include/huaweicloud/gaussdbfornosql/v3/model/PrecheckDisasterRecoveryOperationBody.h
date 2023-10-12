
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_PrecheckDisasterRecoveryOperationBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_PrecheckDisasterRecoveryOperationBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/PrecheckDisasterRecoveryInstance.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  PrecheckDisasterRecoveryOperationBody
    : public ModelBase
{
public:
    PrecheckDisasterRecoveryOperationBody();
    virtual ~PrecheckDisasterRecoveryOperationBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrecheckDisasterRecoveryOperationBody members

    /// <summary>
    /// 指定预校验的具体容灾操作。
    /// </summary>

    std::string getOperation() const;
    bool operationIsSet() const;
    void unsetoperation();
    void setOperation(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PrecheckDisasterRecoveryInstance getDisasterRecoveryInstance() const;
    bool disasterRecoveryInstanceIsSet() const;
    void unsetdisasterRecoveryInstance();
    void setDisasterRecoveryInstance(const PrecheckDisasterRecoveryInstance& value);


protected:
    std::string operation_;
    bool operationIsSet_;
    PrecheckDisasterRecoveryInstance disasterRecoveryInstance_;
    bool disasterRecoveryInstanceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_PrecheckDisasterRecoveryOperationBody_H_
