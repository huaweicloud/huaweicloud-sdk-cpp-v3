
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchDeleteBackupRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchDeleteBackupRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/BatchDeleteBackupRequestBody.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BatchDeleteBackupRequest
    : public ModelBase
{
public:
    BatchDeleteBackupRequest();
    virtual ~BatchDeleteBackupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteBackupRequest members

    /// <summary>
    /// **参数解释**：              请求语言类型。  **约束限制**：  不涉及。  **取值范围**： - en-us - zh-cn  **默认取值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchDeleteBackupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteBackupRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    BatchDeleteBackupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteBackupRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteBackupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchDeleteBackupRequest_H_
