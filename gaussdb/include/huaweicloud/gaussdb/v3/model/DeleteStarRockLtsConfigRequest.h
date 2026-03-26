
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteStarRockLtsConfigRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteStarRockLtsConfigRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/HtapDeleteLTSConfigRequestBody.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteStarRockLtsConfigRequest
    : public ModelBase
{
public:
    DeleteStarRockLtsConfigRequest();
    virtual ~DeleteStarRockLtsConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteStarRockLtsConfigRequest members

    /// <summary>
    /// **参数解释**：              请求语言类型。  **约束限制**：  不涉及。  **取值范围**： - en-us - zh-cn  **默认值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    HtapDeleteLTSConfigRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const HtapDeleteLTSConfigRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    HtapDeleteLTSConfigRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteStarRockLtsConfigRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteStarRockLtsConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteStarRockLtsConfigRequest_H_
