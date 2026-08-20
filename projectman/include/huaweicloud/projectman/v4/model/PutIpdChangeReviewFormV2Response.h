
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PutIpdChangeReviewFormV2Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PutIpdChangeReviewFormV2Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ReviewEntity.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  PutIpdChangeReviewFormV2Response
    : public ModelBase, public HttpResponse
{
public:
    PutIpdChangeReviewFormV2Response();
    virtual ~PutIpdChangeReviewFormV2Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PutIpdChangeReviewFormV2Response members

    /// <summary>
    /// 响应状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 响应信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReviewEntity getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const ReviewEntity& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;
    ReviewEntity result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PutIpdChangeReviewFormV2Response_H_
