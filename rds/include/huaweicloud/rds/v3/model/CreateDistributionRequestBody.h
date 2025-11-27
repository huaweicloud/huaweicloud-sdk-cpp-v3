
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDistributionRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDistributionRequestBody_H_


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
/// 分发服务器信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateDistributionRequestBody
    : public ModelBase
{
public:
    CreateDistributionRequestBody();
    virtual ~CreateDistributionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDistributionRequestBody members

    /// <summary>
    /// 配置为分发服务器的实例id。
    /// </summary>

    std::string getDistributorInstanceId() const;
    bool distributorInstanceIdIsSet() const;
    void unsetdistributorInstanceId();
    void setDistributorInstanceId(const std::string& value);


protected:
    std::string distributorInstanceId_;
    bool distributorInstanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDistributionRequestBody_H_
