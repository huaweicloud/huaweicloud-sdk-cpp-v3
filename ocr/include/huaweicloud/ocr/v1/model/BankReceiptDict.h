
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_BankReceiptDict_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_BankReceiptDict_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/BankReceiptKvPair.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  BankReceiptDict
    : public ModelBase
{
public:
    BankReceiptDict();
    virtual ~BankReceiptDict();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BankReceiptDict members

    /// <summary>
    /// 键值对数量 
    /// </summary>

    int32_t getKvPairCount() const;
    bool kvPairCountIsSet() const;
    void unsetkvPairCount();
    void setKvPairCount(int32_t value);

    /// <summary>
    /// 银行回单的区域位置信息，列表形式，包含文字区域四个顶点的二维坐标（x,y）;坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getBankReceiptLocation();
    bool bankReceiptLocationIsSet() const;
    void unsetbankReceiptLocation();
    void setBankReceiptLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 键值对识别结果列表。 
    /// </summary>

    std::vector<BankReceiptKvPair>& getKvPairList();
    bool kvPairListIsSet() const;
    void unsetkvPairList();
    void setKvPairList(const std::vector<BankReceiptKvPair>& value);


protected:
    int32_t kvPairCount_;
    bool kvPairCountIsSet_;
    std::vector<std::vector<int32_t>> bankReceiptLocation_;
    bool bankReceiptLocationIsSet_;
    std::vector<BankReceiptKvPair> kvPairList_;
    bool kvPairListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_BankReceiptDict_H_
