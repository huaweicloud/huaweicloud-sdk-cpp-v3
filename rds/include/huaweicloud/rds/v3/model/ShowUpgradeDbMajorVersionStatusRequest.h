
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowUpgradeDbMajorVersionStatusRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowUpgradeDbMajorVersionStatusRequest_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowUpgradeDbMajorVersionStatusRequest
    : public ModelBase
{
public:
    ShowUpgradeDbMajorVersionStatusRequest();
    virtual ~ShowUpgradeDbMajorVersionStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUpgradeDbMajorVersionStatusRequest members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 要查询的状态 check：查询升级预检查的状态。 upgrade：查询大板本升级的状态。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 语言。默认en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowUpgradeDbMajorVersionStatusRequest& dereference_from_shared_ptr(std::shared_ptr<ShowUpgradeDbMajorVersionStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowUpgradeDbMajorVersionStatusRequest_H_
