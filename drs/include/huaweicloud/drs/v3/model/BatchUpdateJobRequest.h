
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateJobRequest_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateJobRequest_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/BatchModifyJobReq.h>

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
class HUAWEICLOUD_DRS_V3_EXPORT  BatchUpdateJobRequest
    : public ModelBase
{
public:
    BatchUpdateJobRequest();
    virtual ~BatchUpdateJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateJobRequest members

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

    BatchModifyJobReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchModifyJobReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    BatchModifyJobReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchUpdateJobRequest& dereference_from_shared_ptr(std::shared_ptr<BatchUpdateJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateJobRequest_H_
