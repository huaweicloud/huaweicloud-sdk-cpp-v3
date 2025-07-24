
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UploadStepImgRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UploadStepImgRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/UploadStepImgRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UploadStepImgRequest
    : public ModelBase
{
public:
    UploadStepImgRequest();
    virtual ~UploadStepImgRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadStepImgRequest members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UploadStepImgRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UploadStepImgRequestBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    UploadStepImgRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UploadStepImgRequest& dereference_from_shared_ptr(std::shared_ptr<UploadStepImgRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UploadStepImgRequest_H_
