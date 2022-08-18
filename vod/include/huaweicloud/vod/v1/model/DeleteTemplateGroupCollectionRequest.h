
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteTemplateGroupCollectionRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteTemplateGroupCollectionRequest_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  DeleteTemplateGroupCollectionRequest
    : public ModelBase
{
public:
    DeleteTemplateGroupCollectionRequest();
    virtual ~DeleteTemplateGroupCollectionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteTemplateGroupCollectionRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带的鉴权信息。 
    /// </summary>

    std::string getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 模板组集合id 
    /// </summary>

    std::string getGroupCollectionId() const;
    bool groupCollectionIdIsSet() const;
    void unsetgroupCollectionId();
    void setGroupCollectionId(const std::string& value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string groupCollectionId_;
    bool groupCollectionIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTemplateGroupCollectionRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTemplateGroupCollectionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteTemplateGroupCollectionRequest_H_
