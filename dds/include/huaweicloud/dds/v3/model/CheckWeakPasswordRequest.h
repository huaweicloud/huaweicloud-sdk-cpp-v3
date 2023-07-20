
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_CheckWeakPasswordRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_CheckWeakPasswordRequest_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/WeakPasswordCheckRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  CheckWeakPasswordRequest
    : public ModelBase
{
public:
    CheckWeakPasswordRequest();
    virtual ~CheckWeakPasswordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CheckWeakPasswordRequest members

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

    WeakPasswordCheckRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const WeakPasswordCheckRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    WeakPasswordCheckRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CheckWeakPasswordRequest& dereference_from_shared_ptr(std::shared_ptr<CheckWeakPasswordRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_CheckWeakPasswordRequest_H_
