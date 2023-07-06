
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchRestoreTaskRequest_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchRestoreTaskRequest_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/BatchRetryReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchRestoreTaskRequest
    : public ModelBase
{
public:
    BatchRestoreTaskRequest();
    virtual ~BatchRestoreTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchRestoreTaskRequest members

    /// <summary>
    /// 请求语言类型
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchRetryReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchRetryReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    BatchRetryReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchRestoreTaskRequest& dereference_from_shared_ptr(std::shared_ptr<BatchRestoreTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchRestoreTaskRequest_H_
