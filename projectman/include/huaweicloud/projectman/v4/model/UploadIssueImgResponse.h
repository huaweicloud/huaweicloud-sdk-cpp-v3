
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadIssueImgResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadIssueImgResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UploadIssueImgResponse
    : public ModelBase, public HttpResponse
{
public:
    UploadIssueImgResponse();
    virtual ~UploadIssueImgResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadIssueImgResponse members

    /// <summary>
    /// 图片id
    /// </summary>

    std::string getImgId() const;
    bool imgIdIsSet() const;
    void unsetimgId();
    void setImgId(const std::string& value);

    /// <summary>
    /// 图片url v1改成v3作为下载图片请求
    /// </summary>

    std::string getImgUrl() const;
    bool imgUrlIsSet() const;
    void unsetimgUrl();
    void setImgUrl(const std::string& value);


protected:
    std::string imgId_;
    bool imgIdIsSet_;
    std::string imgUrl_;
    bool imgUrlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadIssueImgResponse_H_
