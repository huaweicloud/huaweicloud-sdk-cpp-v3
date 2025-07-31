
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssessProperty_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssessProperty_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 评估指标详情
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AssessProperty
    : public ModelBase
{
public:
    AssessProperty();
    virtual ~AssessProperty();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssessProperty members

    /// <summary>
    /// 预期信息
    /// </summary>

    std::string getExpected() const;
    bool expectedIsSet() const;
    void unsetexpected();
    void setExpected(const std::string& value);

    /// <summary>
    /// 实际信息
    /// </summary>

    std::string getActual() const;
    bool actualIsSet() const;
    void unsetactual();
    void setActual(const std::string& value);

    /// <summary>
    /// 中文建议
    /// </summary>

    std::string getSuggestion() const;
    bool suggestionIsSet() const;
    void unsetsuggestion();
    void setSuggestion(const std::string& value);

    /// <summary>
    /// 英文建议
    /// </summary>

    std::string getSuggestionEn() const;
    bool suggestionEnIsSet() const;
    void unsetsuggestionEn();
    void setSuggestionEn(const std::string& value);

    /// <summary>
    /// 是否超出范围
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string expected_;
    bool expectedIsSet_;
    std::string actual_;
    bool actualIsSet_;
    std::string suggestion_;
    bool suggestionIsSet_;
    std::string suggestionEn_;
    bool suggestionEnIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssessProperty_H_
