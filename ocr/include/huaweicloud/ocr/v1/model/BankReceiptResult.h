
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_BankReceiptResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_BankReceiptResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/BankReceiptDict.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  BankReceiptResult
    : public ModelBase
{
public:
    BankReceiptResult();
    virtual ~BankReceiptResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BankReceiptResult members

    /// <summary>
    /// 银行回单数量 
    /// </summary>

    int32_t getBankReceiptCount() const;
    bool bankReceiptCountIsSet() const;
    void unsetbankReceiptCount();
    void setBankReceiptCount(int32_t value);

    /// <summary>
    /// 银行回单键值对提取结果。 
    /// </summary>

    std::vector<BankReceiptDict>& getBankReceiptList();
    bool bankReceiptListIsSet() const;
    void unsetbankReceiptList();
    void setBankReceiptList(const std::vector<BankReceiptDict>& value);


protected:
    int32_t bankReceiptCount_;
    bool bankReceiptCountIsSet_;
    std::vector<BankReceiptDict> bankReceiptList_;
    bool bankReceiptListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_BankReceiptResult_H_
