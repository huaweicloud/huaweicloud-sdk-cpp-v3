
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyAutoExpandPolicyRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyAutoExpandPolicyRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/ModifyAutoExpandPolicyReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyAutoExpandPolicyRequest
    : public ModelBase
{
public:
    ModifyAutoExpandPolicyRequest();
    virtual ~ModifyAutoExpandPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyAutoExpandPolicyRequest members

    /// <summary>
    /// **参数解释**：              请求语言类型。  **约束限制**：  不涉及。  **取值范围**： - en-us - zh-cn  **默认值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例ID，此参数是实例的唯一标识。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，后缀为in07，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ModifyAutoExpandPolicyReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifyAutoExpandPolicyReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    ModifyAutoExpandPolicyReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifyAutoExpandPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<ModifyAutoExpandPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyAutoExpandPolicyRequest_H_
