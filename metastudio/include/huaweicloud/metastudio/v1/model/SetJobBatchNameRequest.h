
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SetJobBatchNameRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SetJobBatchNameRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/SetJobBatchNameReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SetJobBatchNameRequest
    : public ModelBase
{
public:
    SetJobBatchNameRequest();
    virtual ~SetJobBatchNameRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetJobBatchNameRequest members

    /// <summary>
    /// 第三方用户ID。不允许输入中文。
    /// </summary>

    std::string getXAppUserId() const;
    bool xAppUserIdIsSet() const;
    void unsetxAppUserId();
    void setXAppUserId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SetJobBatchNameReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SetJobBatchNameReq& value);


protected:
    std::string xAppUserId_;
    bool xAppUserIdIsSet_;
    SetJobBatchNameReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetJobBatchNameRequest& dereference_from_shared_ptr(std::shared_ptr<SetJobBatchNameRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SetJobBatchNameRequest_H_
