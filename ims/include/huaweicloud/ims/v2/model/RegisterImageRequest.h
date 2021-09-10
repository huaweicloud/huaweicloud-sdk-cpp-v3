
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_RegisterImageRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_RegisterImageRequest_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ims/v2/model/RegisterImageRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  RegisterImageRequest
    : public ModelBase
{
public:
    RegisterImageRequest();
    virtual ~RegisterImageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RegisterImageRequest members

    /// <summary>
    /// 镜像ID。 image_id为用户调用创建镜像元数据接口所创建出来镜像的id，使用其他方式创建的镜像id会导致注册失败。 注册接口调用成功后，请根据镜像id查询镜像的状态。镜像状态变为active表示镜像注册成功，详情请参见查询镜像详情（OpenStack原生）。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RegisterImageRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RegisterImageRequestBody& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    RegisterImageRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RegisterImageRequest& dereference_from_shared_ptr(std::shared_ptr<RegisterImageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_RegisterImageRequest_H_
