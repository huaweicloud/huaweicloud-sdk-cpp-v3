
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageWordsBlockList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageWordsBlockList_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  WebImageWordsBlockList
    : public ModelBase
{
public:
    WebImageWordsBlockList();
    virtual ~WebImageWordsBlockList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// WebImageWordsBlockList members

    /// <summary>
    /// 文字块识别结果。 
    /// </summary>

    std::string getWords() const;
    bool wordsIsSet() const;
    void unsetwords();
    void setWords(const std::string& value);

    /// <summary>
    /// 相关字段的置信度信息，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。 置信度由算法给出，不直接等价于对应字段的准确率。 
    /// </summary>

    float getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(float value);

    /// <summary>
    /// 文字块的区域位置信息，列表形式，包含文字区域四个顶点的二维坐标（x,y）;坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getLocation();
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 提取出的结构化JSON结果，该字典内的key值与入参列表extract_type的值一致，目前仅支持联系人信息提取，亦即key值为\&quot;contact_info\&quot;的字段。 若入参extract_type为空列表或该字段缺失时，不进行提取，此字段为空。 
    /// </summary>

    Object getExtractedData() const;
    bool extractedDataIsSet() const;
    void unsetextractedData();
    void setExtractedData(const Object& value);

    /// <summary>
    /// 该字段表示提取的联系人信息，包括：姓名、联系电话、省市区以及详细地址。 若入参extract_type列表中无该字段，则此字段不存在。 
    /// </summary>

    Object getContactInfo() const;
    bool contactInfoIsSet() const;
    void unsetcontactInfo();
    void setContactInfo(const Object& value);

    /// <summary>
    /// 该字段表示返回图片宽高信息。 如入参extract_type列表中无该字段，则此字段不存在。 
    /// </summary>

    Object getImageSize() const;
    bool imageSizeIsSet() const;
    void unsetimageSize();
    void setImageSize(const Object& value);

    /// <summary>
    /// 传入image_size时的返回，为图像高度。 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 传入image_size时的返回，为图像宽度。 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 传入contact_info时的返回，为姓名。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 传入contact_info时的返回，联系电话。 
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// 传入contact_info时的返回，省。 
    /// </summary>

    std::string getProvince() const;
    bool provinceIsSet() const;
    void unsetprovince();
    void setProvince(const std::string& value);

    /// <summary>
    /// 传入contact_info时的返回，市。 
    /// </summary>

    std::string getCity() const;
    bool cityIsSet() const;
    void unsetcity();
    void setCity(const std::string& value);

    /// <summary>
    /// 传入contact_info时的返回，县区。 
    /// </summary>

    std::string getDistrict() const;
    bool districtIsSet() const;
    void unsetdistrict();
    void setDistrict(const std::string& value);

    /// <summary>
    /// 传入contact_info时的返回，详细地址（不含省市区）。 
    /// </summary>

    std::string getDetailAddress() const;
    bool detailAddressIsSet() const;
    void unsetdetailAddress();
    void setDetailAddress(const std::string& value);


protected:
    std::string words_;
    bool wordsIsSet_;
    float confidence_;
    bool confidenceIsSet_;
    std::vector<std::vector<int32_t>> location_;
    bool locationIsSet_;
    Object extractedData_;
    bool extractedDataIsSet_;
    Object contactInfo_;
    bool contactInfoIsSet_;
    Object imageSize_;
    bool imageSizeIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t width_;
    bool widthIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string province_;
    bool provinceIsSet_;
    std::string city_;
    bool cityIsSet_;
    std::string district_;
    bool districtIsSet_;
    std::string detailAddress_;
    bool detailAddressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageWordsBlockList_H_
