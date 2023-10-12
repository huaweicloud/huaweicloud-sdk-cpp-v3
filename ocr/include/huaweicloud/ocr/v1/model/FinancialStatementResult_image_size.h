
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementResult_image_size_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementResult_image_size_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 图像信息
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  FinancialStatementResult_image_size
    : public ModelBase
{
public:
    FinancialStatementResult_image_size();
    virtual ~FinancialStatementResult_image_size();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FinancialStatementResult_image_size members

    /// <summary>
    /// 矫正后图像的高。 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 矫正后图像的宽。 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);


protected:
    int32_t height_;
    bool heightIsSet_;
    int32_t width_;
    bool widthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_FinancialStatementResult_image_size_H_
