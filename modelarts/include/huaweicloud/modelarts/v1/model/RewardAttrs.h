
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RewardAttrs_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RewardAttrs_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 搜索指标列表。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RewardAttrs
    : public ModelBase
{
public:
    RewardAttrs();
    virtual ~RewardAttrs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RewardAttrs members

    /// <summary>
    /// 指标名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 搜索方向。 - max指定时表示指标值越大越好； - min指定时表示指标值越小越好。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 指标正则表达式。
    /// </summary>

    std::string getRegex() const;
    bool regexIsSet() const;
    void unsetregex();
    void setRegex(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string regex_;
    bool regexIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RewardAttrs_H_
