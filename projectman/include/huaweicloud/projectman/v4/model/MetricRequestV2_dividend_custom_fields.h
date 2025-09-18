
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_MetricRequestV2_dividend_custom_fields_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_MetricRequestV2_dividend_custom_fields_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  MetricRequestV2_dividend_custom_fields
    : public ModelBase
{
public:
    MetricRequestV2_dividend_custom_fields();
    virtual ~MetricRequestV2_dividend_custom_fields();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MetricRequestV2_dividend_custom_fields members

    /// <summary>
    /// 自定义字段名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 自定义字段取值，逗号分隔
    /// </summary>

    std::string getOptions() const;
    bool optionsIsSet() const;
    void unsetoptions();
    void setOptions(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string options_;
    bool optionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_MetricRequestV2_dividend_custom_fields_H_
