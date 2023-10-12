
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_Attributes_expression_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_Attributes_expression_H_


#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 人脸表情，包括中性、高兴、害怕、惊讶、伤心、生气、厌恶。
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  Attributes_expression
    : public ModelBase
{
public:
    Attributes_expression();
    virtual ~Attributes_expression();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Attributes_expression members

    /// <summary>
    /// 人脸表情类型： • neutral：中性 • happy：高兴 • fear：害怕 • surprise：惊讶 • sad：伤心 • angry：生气 • disgust：厌恶 • unknown：图片质量问题导致未识别
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 表情置信度，取值范围[0-1]。
    /// </summary>

    double getProbability() const;
    bool probabilityIsSet() const;
    void unsetprobability();
    void setProbability(double value);


protected:
    std::string type_;
    bool typeIsSet_;
    double probability_;
    bool probabilityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_Attributes_expression_H_
