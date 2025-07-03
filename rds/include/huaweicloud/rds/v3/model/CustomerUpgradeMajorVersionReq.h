
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CustomerUpgradeMajorVersionReq_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CustomerUpgradeMajorVersionReq_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  CustomerUpgradeMajorVersionReq
    : public ModelBase
{
public:
    CustomerUpgradeMajorVersionReq();
    virtual ~CustomerUpgradeMajorVersionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomerUpgradeMajorVersionReq members

    /// <summary>
    /// 是否在运维时间窗内切换版本,默认为否。
    /// </summary>

    bool isDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(bool value);

    /// <summary>
    /// 指定新版本的参数模板，若不填则默认会最大限度继承原实例的参数。
    /// </summary>

    std::string getConfigurationId() const;
    bool configurationIdIsSet() const;
    void unsetconfigurationId();
    void setConfigurationId(const std::string& value);


protected:
    bool delay_;
    bool delayIsSet_;
    std::string configurationId_;
    bool configurationIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CustomerUpgradeMajorVersionReq_H_
