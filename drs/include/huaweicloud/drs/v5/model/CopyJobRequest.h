
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CopyJobRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CopyJobRequest_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/CloneJobReq.h>

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
class HUAWEICLOUD_DRS_V5_EXPORT  CopyJobRequest
    : public ModelBase
{
public:
    CopyJobRequest();
    virtual ~CopyJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CopyJobRequest members

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

    CloneJobReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CloneJobReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    CloneJobReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CopyJobRequest& dereference_from_shared_ptr(std::shared_ptr<CopyJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CopyJobRequest_H_
