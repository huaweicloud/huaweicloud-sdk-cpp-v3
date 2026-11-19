
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpdateTaurusSlowProcessThresholdRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpdateTaurusSlowProcessThresholdRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/BatchModifySlowProcessThresholdRequestBody.h>
#include <string>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BatchUpdateTaurusSlowProcessThresholdRequest
    : public ModelBase
{
public:
    BatchUpdateTaurusSlowProcessThresholdRequest();
    virtual ~BatchUpdateTaurusSlowProcessThresholdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateTaurusSlowProcessThresholdRequest members

    /// <summary>
    /// **参数解释**：  请求语言类型。  **约束限制**：  不涉及。  **取值范围**：  - en-us：英文。 - zh-cn：中文。  **默认取值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchModifySlowProcessThresholdRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchModifySlowProcessThresholdRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    BatchModifySlowProcessThresholdRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchUpdateTaurusSlowProcessThresholdRequest& dereference_from_shared_ptr(std::shared_ptr<BatchUpdateTaurusSlowProcessThresholdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpdateTaurusSlowProcessThresholdRequest_H_
