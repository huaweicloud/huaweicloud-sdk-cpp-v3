
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchDeleteInstanceRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchDeleteInstanceRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/MultipleDeleteInsReq.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  BatchDeleteInstanceRequest
    : public ModelBase
{
public:
    BatchDeleteInstanceRequest();
    virtual ~BatchDeleteInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteInstanceRequest members

    /// <summary>
    /// **参数解释**：  请求语言类型。  **约束限制**：  不涉及。  **取值范围**：  - en-us - zh-cn **默认取值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MultipleDeleteInsReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const MultipleDeleteInsReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    MultipleDeleteInsReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchDeleteInstanceRequest_H_
