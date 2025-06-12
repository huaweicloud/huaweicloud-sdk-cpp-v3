
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ActionMarkItem_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ActionMarkItem_H_


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
/// 标注的动作信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ActionMarkItem
    : public ModelBase
{
public:
    ActionMarkItem();
    virtual ~ActionMarkItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionMarkItem members

    /// <summary>
    /// 选取推理数据预处理视频起始时间。格式：“HH:MM:SS.mmm”。
    /// </summary>

    std::string getActionStartTime() const;
    bool actionStartTimeIsSet() const;
    void unsetactionStartTime();
    void setActionStartTime(const std::string& value);

    /// <summary>
    /// 选取推理数据预处理视频结束时间。格式：“HH:MM:SS.mmm”。
    /// </summary>

    std::string getActionEndTime() const;
    bool actionEndTimeIsSet() const;
    void unsetactionEndTime();
    void setActionEndTime(const std::string& value);

    /// <summary>
    /// 动作类型。 * SILENCE: 静默 * ACTION：动作
    /// </summary>

    std::string getActionType() const;
    bool actionTypeIsSet() const;
    void unsetactionType();
    void setActionType(const std::string& value);


protected:
    std::string actionStartTime_;
    bool actionStartTimeIsSet_;
    std::string actionEndTime_;
    bool actionEndTimeIsSet_;
    std::string actionType_;
    bool actionTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ActionMarkItem_H_
