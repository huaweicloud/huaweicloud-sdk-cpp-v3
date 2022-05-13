
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_HealthCodeResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_HealthCodeResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
    /// 姓名 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 健康码更新时间 
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 健康码颜色，可选值包括： - \&quot;green\&quot; - \&quot;yellow\&quot; - \&quot;red\&quot; - \&quot;gray\&quot; 
    /// </summary>

    std::string getColor() const;
    bool colorIsSet() const;
    void unsetcolor();
    void setColor(const std::string& value);

    /// <summary>
    /// 各个字段的置信度 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string color_;
    bool colorIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_HealthCodeResult_H_
