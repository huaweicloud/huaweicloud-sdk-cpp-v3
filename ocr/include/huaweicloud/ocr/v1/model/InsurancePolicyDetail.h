
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_InsurancePolicyDetail_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_InsurancePolicyDetail_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  InsurancePolicyDetail
    : public ModelBase
{
public:
    InsurancePolicyDetail();
    virtual ~InsurancePolicyDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InsurancePolicyDetail members

    /// <summary>
    /// 对应识别出的文本内容
    /// </summary>

    std::string getWords() const;
    bool wordsIsSet() const;
    void unsetwords();
    void setWords(const std::string& value);

    /// <summary>
    /// 对应识别出的四个顶点坐标 
    /// </summary>

    std::vector<std::vector<int32_t>>& getLocation();
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::vector<std::vector<int32_t>>& value);


protected:
    std::string words_;
    bool wordsIsSet_;
    std::vector<std::vector<int32_t>> location_;
    bool locationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_InsurancePolicyDetail_H_
