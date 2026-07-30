
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Event_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Event_H_


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
/// 训练作业事件
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Event
    : public ModelBase
{
public:
    Event();
    virtual ~Event();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Event members

    /// <summary>
    /// 事件信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 事件级别。
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// 事件发生的时间。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// **参数解释**：事件来源。 **取值范围**：不涉及。
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);


protected:
    std::string message_;
    bool messageIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string source_;
    bool sourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Event_H_
