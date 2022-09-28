
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_HealthCodeResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_HealthCodeResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/ocr/v1/model/HealthCodeWordsBlockList.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  HealthCodeResult
    : public ModelBase
{
public:
    HealthCodeResult();
    virtual ~HealthCodeResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// HealthCodeResult members

    /// <summary>
    /// 防疫码类别： - 健康码：health_code - 核酸检测记录：pcr_test_record - 通信行程卡：travel_card - 其他：other 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 姓名 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 身份证号码 
    /// </summary>

    std::string getIdcardNumber() const;
    bool idcardNumberIsSet() const;
    void unsetidcardNumber();
    void setIdcardNumber(const std::string& value);

    /// <summary>
    /// 手机号码 
    /// </summary>

    std::string getPhoneNumber() const;
    bool phoneNumberIsSet() const;
    void unsetphoneNumber();
    void setPhoneNumber(const std::string& value);

    /// <summary>
    /// 省份 
    /// </summary>

    std::string getProvince() const;
    bool provinceIsSet() const;
    void unsetprovince();
    void setProvince(const std::string& value);

    /// <summary>
    /// 城市 
    /// </summary>

    std::string getCity() const;
    bool cityIsSet() const;
    void unsetcity();
    void setCity(const std::string& value);

    /// <summary>
    /// 健康码或行程卡的更新时间 
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 健康码或行程卡颜色。 健康码颜色可选值包括：  - \&quot;green\&quot;，绿码 - \&quot;yellow\&quot;，黄码 - \&quot;red\&quot;，红码 - \&quot;gray\&quot;，灰码  行程卡颜色可选值包括：  - \&quot;green\&quot;，绿码 - \&quot;yellow\&quot;，黄码 - \&quot;red\&quot;，红码 
    /// </summary>

    std::string getColor() const;
    bool colorIsSet() const;
    void unsetcolor();
    void setColor(const std::string& value);

    /// <summary>
    /// 疫苗接种情况 
    /// </summary>

    std::string getVaccinationStatus() const;
    bool vaccinationStatusIsSet() const;
    void unsetvaccinationStatus();
    void setVaccinationStatus(const std::string& value);

    /// <summary>
    /// 核酸检测结果，可选值包括： - \&quot;positive\&quot;,即阳性 - \&quot;negative\&quot;,即阴性 - \&quot;unknown\&quot;,未知 
    /// </summary>

    std::string getPcrTestResult() const;
    bool pcrTestResultIsSet() const;
    void unsetpcrTestResult();
    void setPcrTestResult(const std::string& value);

    /// <summary>
    /// 核酸检测机构 
    /// </summary>

    std::string getPcrTestOrganization() const;
    bool pcrTestOrganizationIsSet() const;
    void unsetpcrTestOrganization();
    void setPcrTestOrganization(const std::string& value);

    /// <summary>
    /// 核酸检测结果更新时间 
    /// </summary>

    std::string getPcrTestTime() const;
    bool pcrTestTimeIsSet() const;
    void unsetpcrTestTime();
    void setPcrTestTime(const std::string& value);

    /// <summary>
    /// 核酸检测采样时间 
    /// </summary>

    std::string getPcrSamplingTime() const;
    bool pcrSamplingTimeIsSet() const;
    void unsetpcrSamplingTime();
    void setPcrSamplingTime(const std::string& value);

    /// <summary>
    /// 行程卡的途径地址 
    /// </summary>

    std::vector<std::string>& getReachedCity();
    bool reachedCityIsSet() const;
    void unsetreachedCity();
    void setReachedCity(const std::vector<std::string>& value);

    /// <summary>
    /// 各个字段的置信度。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);

    /// <summary>
    /// 代表检测识别出来的文字块数目。 
    /// </summary>

    int32_t getWordsBlockCount() const;
    bool wordsBlockCountIsSet() const;
    void unsetwordsBlockCount();
    void setWordsBlockCount(int32_t value);

    /// <summary>
    /// 识别文字块列表，输出顺序从左到右，从上到下。 
    /// </summary>

    std::vector<HealthCodeWordsBlockList>& getWordsBlockList();
    bool wordsBlockListIsSet() const;
    void unsetwordsBlockList();
    void setWordsBlockList(const std::vector<HealthCodeWordsBlockList>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string idcardNumber_;
    bool idcardNumberIsSet_;
    std::string phoneNumber_;
    bool phoneNumberIsSet_;
    std::string province_;
    bool provinceIsSet_;
    std::string city_;
    bool cityIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string color_;
    bool colorIsSet_;
    std::string vaccinationStatus_;
    bool vaccinationStatusIsSet_;
    std::string pcrTestResult_;
    bool pcrTestResultIsSet_;
    std::string pcrTestOrganization_;
    bool pcrTestOrganizationIsSet_;
    std::string pcrTestTime_;
    bool pcrTestTimeIsSet_;
    std::string pcrSamplingTime_;
    bool pcrSamplingTimeIsSet_;
    std::vector<std::string> reachedCity_;
    bool reachedCityIsSet_;
    Object confidence_;
    bool confidenceIsSet_;
    int32_t wordsBlockCount_;
    bool wordsBlockCountIsSet_;
    std::vector<HealthCodeWordsBlockList> wordsBlockList_;
    bool wordsBlockListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_HealthCodeResult_H_
