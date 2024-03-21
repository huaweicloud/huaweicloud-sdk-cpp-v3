
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_HouseholdRegisterResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_HouseholdRegisterResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ocr/v1/model/HouseholdRegisterContent.h>
#include <map>
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
class HUAWEICLOUD_OCR_V1_EXPORT  HouseholdRegisterResult
    : public ModelBase
{
public:
    HouseholdRegisterResult();
    virtual ~HouseholdRegisterResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HouseholdRegisterResult members

    /// <summary>
    /// 类型。参数为“首页”或“登记页”。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 户口本证件位置信息，列表形式，包含证件位置四个顶点的二维坐标（x,y）;坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getLocation();
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 
    /// </summary>

    HouseholdRegisterContent getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const HouseholdRegisterContent& value);

    /// <summary>
    /// content中各个字段的置信度，取值范围0~1。置信度越大，本次识别的字段的可靠性越高，在统计意义上，置信度越大，准确率越高。置信度由算法给出，不直接等价于字段的准确率。 
    /// </summary>

    std::map<std::string, float>& getConfidence();
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(std::map<std::string, float> value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::vector<std::vector<int32_t>> location_;
    bool locationIsSet_;
    HouseholdRegisterContent content_;
    bool contentIsSet_;
    std::map<std::string, float> confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_HouseholdRegisterResult_H_
