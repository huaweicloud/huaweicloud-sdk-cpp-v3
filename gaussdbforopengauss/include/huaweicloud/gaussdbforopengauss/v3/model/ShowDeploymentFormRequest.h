
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowDeploymentFormRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowDeploymentFormRequest_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowDeploymentFormRequest
    : public ModelBase
{
public:
    ShowDeploymentFormRequest();
    virtual ~ShowDeploymentFormRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDeploymentFormRequest members

    /// <summary>
    /// **参数解释**: 语言。 **约束限制**: 不涉及。 **取值范围**:   - zh-cn   - en-us  **默认取值**: en-us
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 解决方案模板名称。
    /// </summary>

    std::string getSolution() const;
    bool solutionIsSet() const;
    void unsetsolution();
    void setSolution(const std::string& value);

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**: 事务一致性类型。 **约束限制**: 不涉及。 **取值范围**: - strong - eventual **默认取值**: 不涉及。
    /// </summary>

    std::string getConsistency() const;
    bool consistencyIsSet() const;
    void unsetconsistency();
    void setConsistency(const std::string& value);

    /// <summary>
    /// **参数解释**: 副本一致性协议类型。 **约束限制**: 不涉及。 **取值范围**: - quorum - paxos **默认取值**: 不涉及。
    /// </summary>

    std::string getConsistencyProtocol() const;
    bool consistencyProtocolIsSet() const;
    void unsetconsistencyProtocol();
    void setConsistencyProtocol(const std::string& value);

    /// <summary>
    /// **参数解释**: 引擎版本号。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string solution_;
    bool solutionIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string consistency_;
    bool consistencyIsSet_;
    std::string consistencyProtocol_;
    bool consistencyProtocolIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDeploymentFormRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDeploymentFormRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowDeploymentFormRequest_H_
