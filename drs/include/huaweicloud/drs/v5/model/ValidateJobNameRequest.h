
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ValidateJobNameRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ValidateJobNameRequest_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/CheckJobNameReq.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ValidateJobNameRequest
    : public ModelBase
{
public:
    ValidateJobNameRequest();
    virtual ~ValidateJobNameRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ValidateJobNameRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CheckJobNameReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CheckJobNameReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    CheckJobNameReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ValidateJobNameRequest& dereference_from_shared_ptr(std::shared_ptr<ValidateJobNameRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ValidateJobNameRequest_H_
