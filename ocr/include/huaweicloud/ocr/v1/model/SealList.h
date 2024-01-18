
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SealList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SealList_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/SealWordsBlockList.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  SealList
    : public ModelBase
{
public:
    SealList();
    virtual ~SealList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SealList members

    /// <summary>
    /// 印章类型，当前支持circle（圆形章）、ellipse（椭圆章）、rectangle（方形章）、triangle（三角章）、rhombus（菱形章）五种。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 提取的单个印章base64编码图片。 
    /// </summary>

    std::string getSealImage() const;
    bool sealImageIsSet() const;
    void unsetsealImage();
    void setSealImage(const std::string& value);

    /// <summary>
    /// 印章位置的置信度。 
    /// </summary>

    float getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(float value);

    /// <summary>
    /// 印章位置，列表形式，包含印章区域四个顶点的二维坐标（x,y），坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getLocation();
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 印章文本块列表。 
    /// </summary>

    std::vector<SealWordsBlockList>& getWordsBlockList();
    bool wordsBlockListIsSet() const;
    void unsetwordsBlockList();
    void setWordsBlockList(const std::vector<SealWordsBlockList>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string sealImage_;
    bool sealImageIsSet_;
    float confidence_;
    bool confidenceIsSet_;
    std::vector<std::vector<int32_t>> location_;
    bool locationIsSet_;
    std::vector<SealWordsBlockList> wordsBlockList_;
    bool wordsBlockListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SealList_H_
