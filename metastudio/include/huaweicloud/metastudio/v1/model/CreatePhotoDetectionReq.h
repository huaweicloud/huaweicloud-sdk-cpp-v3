
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePhotoDetectionReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePhotoDetectionReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreatePhotoDetectionReq
    : public ModelBase
{
public:
    CreatePhotoDetectionReq();
    virtual ~CreatePhotoDetectionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePhotoDetectionReq members

    /// <summary>
    /// 人物照片，需要Base64编码。照片分辨率不超过1080P。
    /// </summary>

    std::string getHumanImage() const;
    bool humanImageIsSet() const;
    void unsethumanImage();
    void setHumanImage(const std::string& value);


protected:
    std::string humanImage_;
    bool humanImageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePhotoDetectionReq_H_
