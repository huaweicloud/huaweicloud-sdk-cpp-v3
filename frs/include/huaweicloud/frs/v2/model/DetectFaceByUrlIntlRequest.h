
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByUrlIntlRequest_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByUrlIntlRequest_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/FaceDetectUrlReq.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  DetectFaceByUrlIntlRequest
    : public ModelBase
{
public:
    DetectFaceByUrlIntlRequest();
    virtual ~DetectFaceByUrlIntlRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectFaceByUrlIntlRequest members

    /// <summary>
    /// 企业项目ID。FRS支持通过企业项目管理（EPS）对不同用户组和用户的资源使用，进行分账。当前仅支持按需计费模式。  获取方法：进入“[企业项目管理](https://console.huaweicloud.com/eps/?region&#x3D;cn-north-4#/projects/list)”页面，单击企业项目名称，在企业项目详情页获取Enterprise-Project-Id（企业项目ID）。  企业项目创建步骤请参见用户指南。 &gt; 说明： 创建企业项目后，在传参时，有以下三类场景。 - 携带正确的ID，正常使用FRS服务，账单归到企业ID对应的企业项目中。 - 携带错误的ID，正常使用FRS服务，账单的企业项目会被分类为“未归集”。 - 不携带ID，正常使用FRS服务，账单的企业项目会被分类为“未归集”。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FaceDetectUrlReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const FaceDetectUrlReq& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    FaceDetectUrlReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetectFaceByUrlIntlRequest& dereference_from_shared_ptr(std::shared_ptr<DetectFaceByUrlIntlRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByUrlIntlRequest_H_
