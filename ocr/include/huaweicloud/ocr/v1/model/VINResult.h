
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_VINResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_VINResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_OCR_V1_EXPORT  VINResult
    : public ModelBase
{
public:
    VINResult();
    virtual ~VINResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VINResult members

    /// <summary>
    /// 识别检测到的车架号。 
    /// </summary>

    std::string getVin() const;
    bool vinIsSet() const;
    void unsetvin();
    void setVin(const std::string& value);


protected:
    std::string vin_;
    bool vinIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_VINResult_H_
