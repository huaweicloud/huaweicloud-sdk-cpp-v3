
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CheckWeakpwdRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CheckWeakpwdRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/CheckWeakPasswordRequest.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  CheckWeakpwdRequest
    : public ModelBase
{
public:
    CheckWeakpwdRequest();
    virtual ~CheckWeakpwdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckWeakpwdRequest members

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

    CheckWeakPasswordRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CheckWeakPasswordRequest& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    CheckWeakPasswordRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CheckWeakpwdRequest& dereference_from_shared_ptr(std::shared_ptr<CheckWeakpwdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CheckWeakpwdRequest_H_
