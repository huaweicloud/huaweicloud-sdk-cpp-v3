
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyUpgradeVersionDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyUpgradeVersionDetail_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Proxy升级内核版本对象。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ProxyUpgradeVersionDetail
    : public ModelBase
{
public:
    ProxyUpgradeVersionDetail();
    virtual ~ProxyUpgradeVersionDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyUpgradeVersionDetail members

    /// <summary>
    /// 实例id.
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 工作流Id。
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// agent返回的升级下发状态码，默认返回。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 错误消息。
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyUpgradeVersionDetail_H_
