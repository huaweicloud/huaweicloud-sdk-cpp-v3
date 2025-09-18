
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_MetricRequest3_dividend_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_MetricRequest3_dividend_H_


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
/// 指标分子过滤条件
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  MetricRequest3_dividend
    : public ModelBase
{
public:
    MetricRequest3_dividend();
    virtual ~MetricRequest3_dividend();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MetricRequest3_dividend members

    /// <summary>
    /// 是否按时
    /// </summary>

    std::string getOnTime() const;
    bool onTimeIsSet() const;
    void unsetonTime();
    void setOnTime(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField16() const;
    bool customField16IsSet() const;
    void unsetcustomField16();
    void setCustomField16(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField17() const;
    bool customField17IsSet() const;
    void unsetcustomField17();
    void setCustomField17(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField18() const;
    bool customField18IsSet() const;
    void unsetcustomField18();
    void setCustomField18(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField19() const;
    bool customField19IsSet() const;
    void unsetcustomField19();
    void setCustomField19(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField20() const;
    bool customField20IsSet() const;
    void unsetcustomField20();
    void setCustomField20(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField21() const;
    bool customField21IsSet() const;
    void unsetcustomField21();
    void setCustomField21(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField22() const;
    bool customField22IsSet() const;
    void unsetcustomField22();
    void setCustomField22(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField23() const;
    bool customField23IsSet() const;
    void unsetcustomField23();
    void setCustomField23(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField24() const;
    bool customField24IsSet() const;
    void unsetcustomField24();
    void setCustomField24(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField25() const;
    bool customField25IsSet() const;
    void unsetcustomField25();
    void setCustomField25(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField26() const;
    bool customField26IsSet() const;
    void unsetcustomField26();
    void setCustomField26(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField27() const;
    bool customField27IsSet() const;
    void unsetcustomField27();
    void setCustomField27(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField28() const;
    bool customField28IsSet() const;
    void unsetcustomField28();
    void setCustomField28(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField29() const;
    bool customField29IsSet() const;
    void unsetcustomField29();
    void setCustomField29(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField30() const;
    bool customField30IsSet() const;
    void unsetcustomField30();
    void setCustomField30(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField31() const;
    bool customField31IsSet() const;
    void unsetcustomField31();
    void setCustomField31(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField32() const;
    bool customField32IsSet() const;
    void unsetcustomField32();
    void setCustomField32(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField33() const;
    bool customField33IsSet() const;
    void unsetcustomField33();
    void setCustomField33(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField34() const;
    bool customField34IsSet() const;
    void unsetcustomField34();
    void setCustomField34(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField35() const;
    bool customField35IsSet() const;
    void unsetcustomField35();
    void setCustomField35(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField36() const;
    bool customField36IsSet() const;
    void unsetcustomField36();
    void setCustomField36(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField37() const;
    bool customField37IsSet() const;
    void unsetcustomField37();
    void setCustomField37(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField38() const;
    bool customField38IsSet() const;
    void unsetcustomField38();
    void setCustomField38(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField39() const;
    bool customField39IsSet() const;
    void unsetcustomField39();
    void setCustomField39(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField40() const;
    bool customField40IsSet() const;
    void unsetcustomField40();
    void setCustomField40(const std::string& value);


protected:
    std::string onTime_;
    bool onTimeIsSet_;
    std::string customField16_;
    bool customField16IsSet_;
    std::string customField17_;
    bool customField17IsSet_;
    std::string customField18_;
    bool customField18IsSet_;
    std::string customField19_;
    bool customField19IsSet_;
    std::string customField20_;
    bool customField20IsSet_;
    std::string customField21_;
    bool customField21IsSet_;
    std::string customField22_;
    bool customField22IsSet_;
    std::string customField23_;
    bool customField23IsSet_;
    std::string customField24_;
    bool customField24IsSet_;
    std::string customField25_;
    bool customField25IsSet_;
    std::string customField26_;
    bool customField26IsSet_;
    std::string customField27_;
    bool customField27IsSet_;
    std::string customField28_;
    bool customField28IsSet_;
    std::string customField29_;
    bool customField29IsSet_;
    std::string customField30_;
    bool customField30IsSet_;
    std::string customField31_;
    bool customField31IsSet_;
    std::string customField32_;
    bool customField32IsSet_;
    std::string customField33_;
    bool customField33IsSet_;
    std::string customField34_;
    bool customField34IsSet_;
    std::string customField35_;
    bool customField35IsSet_;
    std::string customField36_;
    bool customField36IsSet_;
    std::string customField37_;
    bool customField37IsSet_;
    std::string customField38_;
    bool customField38IsSet_;
    std::string customField39_;
    bool customField39IsSet_;
    std::string customField40_;
    bool customField40IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_MetricRequest3_dividend_H_
