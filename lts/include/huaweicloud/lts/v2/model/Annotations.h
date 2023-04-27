
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Annotations_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Annotations_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  Annotations
    : public ModelBase
{
public:
    Annotations();
    virtual ~Annotations();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Annotations members

    /// <summary>
    /// 告警列表详情
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 日志组/流id,名称
    /// </summary>

    std::string getLogInfo() const;
    bool logInfoIsSet() const;
    void unsetlogInfo();
    void setLogInfo(const std::string& value);

    /// <summary>
    /// 当前值
    /// </summary>

    std::string getCurrentValue() const;
    bool currentValueIsSet() const;
    void unsetcurrentValue();
    void setCurrentValue(const std::string& value);

    /// <summary>
    /// (sql/关键词)告警详情原始数据
    /// </summary>

    std::string getOldAnnotations() const;
    bool oldAnnotationsIsSet() const;
    void unsetoldAnnotations();
    void setOldAnnotations(const std::string& value);


protected:
    std::string message_;
    bool messageIsSet_;
    std::string logInfo_;
    bool logInfoIsSet_;
    std::string currentValue_;
    bool currentValueIsSet_;
    std::string oldAnnotations_;
    bool oldAnnotationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Annotations_H_
