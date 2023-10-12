
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateDisasterRecoveryResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateDisasterRecoveryResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  CreateDisasterRecoveryResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateDisasterRecoveryResponse();
    virtual ~CreateDisasterRecoveryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDisasterRecoveryResponse members

    /// <summary>
    /// 搭建容灾关系的工作ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 容灾ID。
    /// </summary>

    std::string getDisasterRecoveryId() const;
    bool disasterRecoveryIdIsSet() const;
    void unsetdisasterRecoveryId();
    void setDisasterRecoveryId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string disasterRecoveryId_;
    bool disasterRecoveryIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateDisasterRecoveryResponse_H_
