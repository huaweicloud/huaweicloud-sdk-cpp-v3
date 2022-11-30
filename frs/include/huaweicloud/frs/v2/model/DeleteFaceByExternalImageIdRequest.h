
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DeleteFaceByExternalImageIdRequest_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DeleteFaceByExternalImageIdRequest_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_FRS_V2_EXPORT  DeleteFaceByExternalImageIdRequest
    : public ModelBase
{
public:
    DeleteFaceByExternalImageIdRequest();
    virtual ~DeleteFaceByExternalImageIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteFaceByExternalImageIdRequest members

    /// <summary>
    /// 人脸库名称。
    /// </summary>

    std::string getFaceSetName() const;
    bool faceSetNameIsSet() const;
    void unsetfaceSetName();
    void setFaceSetName(const std::string& value);

    /// <summary>
    /// external_image_id。
    /// </summary>

    std::string getExternalImageId() const;
    bool externalImageIdIsSet() const;
    void unsetexternalImageId();
    void setExternalImageId(const std::string& value);


protected:
    std::string faceSetName_;
    bool faceSetNameIsSet_;
    std::string externalImageId_;
    bool externalImageIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteFaceByExternalImageIdRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteFaceByExternalImageIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DeleteFaceByExternalImageIdRequest_H_
