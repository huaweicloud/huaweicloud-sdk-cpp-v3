
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerTableResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerTableResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/SmartDocumentRecognizerTableBlock.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  SmartDocumentRecognizerTableResult
    : public ModelBase
{
public:
    SmartDocumentRecognizerTableResult();
    virtual ~SmartDocumentRecognizerTableResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartDocumentRecognizerTableResult members

    /// <summary>
    /// 模型识别到的表格数量。 
    /// </summary>

    int32_t getTableCount() const;
    bool tableCountIsSet() const;
    void unsettableCount();
    void setTableCount(int32_t value);

    /// <summary>
    /// 表格识别结果列表。 
    /// </summary>

    std::vector<SmartDocumentRecognizerTableBlock>& getTableList();
    bool tableListIsSet() const;
    void unsettableList();
    void setTableList(const std::vector<SmartDocumentRecognizerTableBlock>& value);


protected:
    int32_t tableCount_;
    bool tableCountIsSet_;
    std::vector<SmartDocumentRecognizerTableBlock> tableList_;
    bool tableListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerTableResult_H_
