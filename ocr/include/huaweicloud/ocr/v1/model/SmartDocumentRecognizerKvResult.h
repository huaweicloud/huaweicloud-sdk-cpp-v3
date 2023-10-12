
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerKvResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerKvResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/SmartDocumentRecognizerKVBlock.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  SmartDocumentRecognizerKvResult
    : public ModelBase
{
public:
    SmartDocumentRecognizerKvResult();
    virtual ~SmartDocumentRecognizerKvResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartDocumentRecognizerKvResult members

    /// <summary>
    /// 模型识别到的键值对数量。 
    /// </summary>

    int32_t getKvBlockCount() const;
    bool kvBlockCountIsSet() const;
    void unsetkvBlockCount();
    void setKvBlockCount(int32_t value);

    /// <summary>
    /// 键值对识别结果列表。 
    /// </summary>

    std::vector<SmartDocumentRecognizerKVBlock>& getKvBlockList();
    bool kvBlockListIsSet() const;
    void unsetkvBlockList();
    void setKvBlockList(const std::vector<SmartDocumentRecognizerKVBlock>& value);


protected:
    int32_t kvBlockCount_;
    bool kvBlockCountIsSet_;
    std::vector<SmartDocumentRecognizerKVBlock> kvBlockList_;
    bool kvBlockListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_SmartDocumentRecognizerKvResult_H_
