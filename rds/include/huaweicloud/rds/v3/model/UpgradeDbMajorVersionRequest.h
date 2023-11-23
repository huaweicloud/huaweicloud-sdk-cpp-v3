
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpgradeDbMajorVersionRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpgradeDbMajorVersionRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/UpgradePgMajorVersion.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  UpgradeDbMajorVersionRequest
    : public ModelBase
{
public:
    UpgradeDbMajorVersionRequest();
    virtual ~UpgradeDbMajorVersionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeDbMajorVersionRequest members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradePgMajorVersion getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpgradePgMajorVersion& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    UpgradePgMajorVersion body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpgradeDbMajorVersionRequest& dereference_from_shared_ptr(std::shared_ptr<UpgradeDbMajorVersionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpgradeDbMajorVersionRequest_H_
