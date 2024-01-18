
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SealResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SealResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/SealList.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  SealResult
    : public ModelBase
{
public:
    SealResult();
    virtual ~SealResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SealResult members

    /// <summary>
    /// 印章信息列表。 
    /// </summary>

    std::vector<SealList>& getSealList();
    bool sealListIsSet() const;
    void unsetsealList();
    void setSealList(const std::vector<SealList>& value);

    /// <summary>
    /// 在输入图片基础上进行印章擦除后的base64编码图片。 
    /// </summary>

    std::string getErasedSealImage() const;
    bool erasedSealImageIsSet() const;
    void unseterasedSealImage();
    void setErasedSealImage(const std::string& value);


protected:
    std::vector<SealList> sealList_;
    bool sealListIsSet_;
    std::string erasedSealImage_;
    bool erasedSealImageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SealResult_H_
