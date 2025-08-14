
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDevicePolicyResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDevicePolicyResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/Statement.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateDevicePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateDevicePolicyResponse();
    virtual ~UpdateDevicePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDevicePolicyResponse members

    /// <summary>
    /// **参数说明**：资源空间ID。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 策略ID。
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// 策略名称。
    /// </summary>

    std::string getPolicyName() const;
    bool policyNameIsSet() const;
    void unsetpolicyName();
    void setPolicyName(const std::string& value);

    /// <summary>
    /// 策略文档。
    /// </summary>

    std::vector<Statement>& getStatement();
    bool statementIsSet() const;
    void unsetstatement();
    void setStatement(const std::vector<Statement>& value);

    /// <summary>
    /// 在物联网平台创建策略的时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 在物联网平台更新策略的时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    std::string policyId_;
    bool policyIdIsSet_;
    std::string policyName_;
    bool policyNameIsSet_;
    std::vector<Statement> statement_;
    bool statementIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDevicePolicyResponse_H_
