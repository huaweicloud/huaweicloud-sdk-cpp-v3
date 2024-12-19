
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoClassificationResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoClassificationResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/ocr/v1/model/AutoClassificationResult_status.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  AutoClassificationResult
    : public ModelBase
{
public:
    AutoClassificationResult();
    virtual ~AutoClassificationResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutoClassificationResult members

    /// <summary>
    /// 
    /// </summary>

    AutoClassificationResult_status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const AutoClassificationResult_status& value);

    /// <summary>
    /// 对应票证具体结构化识别的结果。 
    /// </summary>

    Object getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const Object& value);

    /// <summary>
    /// 对应票证的类别。         
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 票证的区域位置信息，列表形式，包含票证区域四个顶点的二维坐标（x,y）;坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getLocation();
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 对应票证中是否含有印章。可选值包括： -  true：该票证中含有印章。 -  false：该票证中不含有印章。 
    /// </summary>

    bool isSealMark() const;
    bool sealMarkIsSet() const;
    void unsetsealMark();
    void setSealMark(bool value);


protected:
    AutoClassificationResult_status status_;
    bool statusIsSet_;
    Object content_;
    bool contentIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::vector<std::vector<int32_t>> location_;
    bool locationIsSet_;
    bool sealMark_;
    bool sealMarkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoClassificationResult_H_
