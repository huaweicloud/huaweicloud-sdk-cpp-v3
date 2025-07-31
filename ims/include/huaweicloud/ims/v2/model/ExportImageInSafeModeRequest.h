
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ExportImageInSafeModeRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ExportImageInSafeModeRequest_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ims/v2/model/ExportImageRequestBody.h>

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
class HUAWEICLOUD_IMS_V2_EXPORT  ExportImageInSafeModeRequest
    : public ModelBase
{
public:
    ExportImageInSafeModeRequest();
    virtual ~ExportImageInSafeModeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportImageInSafeModeRequest members

    /// <summary>
    /// 镜像ID。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExportImageRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ExportImageRequestBody& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    ExportImageRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ExportImageInSafeModeRequest& dereference_from_shared_ptr(std::shared_ptr<ExportImageInSafeModeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ExportImageInSafeModeRequest_H_
