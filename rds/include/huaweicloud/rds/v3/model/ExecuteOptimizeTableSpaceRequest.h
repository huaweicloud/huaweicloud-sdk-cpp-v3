
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ExecuteOptimizeTableSpaceRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ExecuteOptimizeTableSpaceRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ExecuteOptimizeTableSpaceRequestBody.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ExecuteOptimizeTableSpaceRequest
    : public ModelBase
{
public:
    ExecuteOptimizeTableSpaceRequest();
    virtual ~ExecuteOptimizeTableSpaceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecuteOptimizeTableSpaceRequest members

    /// <summary>
    /// **参数解释**：  请求语言类型。  **约束限制**：  不涉及。  **取值范围**：  - en-us - zh-cn **默认取值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExecuteOptimizeTableSpaceRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ExecuteOptimizeTableSpaceRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    ExecuteOptimizeTableSpaceRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ExecuteOptimizeTableSpaceRequest& dereference_from_shared_ptr(std::shared_ptr<ExecuteOptimizeTableSpaceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ExecuteOptimizeTableSpaceRequest_H_
