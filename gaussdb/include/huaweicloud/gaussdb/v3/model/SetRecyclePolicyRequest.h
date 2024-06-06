
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetRecyclePolicyRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetRecyclePolicyRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/SetRecyclePolicyRequestBody.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SetRecyclePolicyRequest
    : public ModelBase
{
public:
    SetRecyclePolicyRequest();
    virtual ~SetRecyclePolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetRecyclePolicyRequest members

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SetRecyclePolicyRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SetRecyclePolicyRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    SetRecyclePolicyRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetRecyclePolicyRequest& dereference_from_shared_ptr(std::shared_ptr<SetRecyclePolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetRecyclePolicyRequest_H_
