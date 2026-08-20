
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PutIpdChangeReviewFormV2Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PutIpdChangeReviewFormV2Request_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ReviewUpdateBodyV2.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  PutIpdChangeReviewFormV2Request
    : public ModelBase
{
public:
    PutIpdChangeReviewFormV2Request();
    virtual ~PutIpdChangeReviewFormV2Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PutIpdChangeReviewFormV2Request members

    /// <summary>
    /// 项目32位ID，项目唯一标识。通过查询IPD项目列表获取，响应消息体中的id字段的值就是项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 评审单ID，评审单唯一标识。通过查询评审单列表（BR/GR）接口获取，响应消息体中的id字段的值就是评审单ID。
    /// </summary>

    std::string getReviewId() const;
    bool reviewIdIsSet() const;
    void unsetreviewId();
    void setReviewId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReviewUpdateBodyV2 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ReviewUpdateBodyV2& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string reviewId_;
    bool reviewIdIsSet_;
    ReviewUpdateBodyV2 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    PutIpdChangeReviewFormV2Request& dereference_from_shared_ptr(std::shared_ptr<PutIpdChangeReviewFormV2Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PutIpdChangeReviewFormV2Request_H_
