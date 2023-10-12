
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceSetFace_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceSetFace_H_


#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/frs/v2/model/BoundingBox.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  FaceSetFace
    : public ModelBase
{
public:
    FaceSetFace();
    virtual ~FaceSetFace();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FaceSetFace members

    /// <summary>
    /// 
    /// </summary>

    BoundingBox getBoundingBox() const;
    bool boundingBoxIsSet() const;
    void unsetboundingBox();
    void setBoundingBox(const BoundingBox& value);

    /// <summary>
    /// 用户添加的额外字段。
    /// </summary>

    Object getExternalFields() const;
    bool externalFieldsIsSet() const;
    void unsetexternalFields();
    void setExternalFields(const Object& value);

    /// <summary>
    /// 人脸所在的外部图片ID。
    /// </summary>

    std::string getExternalImageId() const;
    bool externalImageIdIsSet() const;
    void unsetexternalImageId();
    void setExternalImageId(const std::string& value);

    /// <summary>
    /// 人脸ID，由系统内部生成的唯一ID。
    /// </summary>

    std::string getFaceId() const;
    bool faceIdIsSet() const;
    void unsetfaceId();
    void setFaceId(const std::string& value);


protected:
    BoundingBox boundingBox_;
    bool boundingBoxIsSet_;
    Object externalFields_;
    bool externalFieldsIsSet_;
    std::string externalImageId_;
    bool externalImageIdIsSet_;
    std::string faceId_;
    bool faceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceSetFace_H_
