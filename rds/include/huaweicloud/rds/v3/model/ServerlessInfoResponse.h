
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ServerlessInfoResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ServerlessInfoResponse_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  ServerlessInfoResponse
    : public ModelBase
{
public:
    ServerlessInfoResponse();
    virtual ~ServerlessInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerlessInfoResponse members

    /// <summary>
    /// Serverless型实例的算力范围最小值。取值范围：0.5 ~ 8，单位：RCU。
    /// </summary>

    std::string getMinComputeUnit() const;
    bool minComputeUnitIsSet() const;
    void unsetminComputeUnit();
    void setMinComputeUnit(const std::string& value);

    /// <summary>
    /// Serverless型实例的算力范围最大值。取值范围：0.5 ~ 8，单位：RCU。
    /// </summary>

    std::string getMaxComputeUnit() const;
    bool maxComputeUnitIsSet() const;
    void unsetmaxComputeUnit();
    void setMaxComputeUnit(const std::string& value);


protected:
    std::string minComputeUnit_;
    bool minComputeUnitIsSet_;
    std::string maxComputeUnit_;
    bool maxComputeUnitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ServerlessInfoResponse_H_
