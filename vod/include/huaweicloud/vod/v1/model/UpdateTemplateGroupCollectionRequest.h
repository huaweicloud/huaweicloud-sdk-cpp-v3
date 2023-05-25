
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateTemplateGroupCollectionRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateTemplateGroupCollectionRequest_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vod/v1/model/ModifyTemplateGroupCollection.h>

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
class HUAWEICLOUD_VOD_V1_EXPORT  UpdateTemplateGroupCollectionRequest
    : public ModelBase
{
public:
    UpdateTemplateGroupCollectionRequest();
    virtual ~UpdateTemplateGroupCollectionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateTemplateGroupCollectionRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ModifyTemplateGroupCollection getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifyTemplateGroupCollection& value);


protected:
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    ModifyTemplateGroupCollection body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateTemplateGroupCollectionRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateTemplateGroupCollectionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateTemplateGroupCollectionRequest_H_
