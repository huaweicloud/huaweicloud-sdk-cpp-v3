
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ActionTagInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ActionTagInfo_H_


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
/// 分身动作Tag映射信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ActionTagInfo
    : public ModelBase
{
public:
    ActionTagInfo();
    virtual ~ActionTagInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionTagInfo members

    /// <summary>
    /// 原子动作中文名称。
    /// </summary>

    std::string getActionNameZh() const;
    bool actionNameZhIsSet() const;
    void unsetactionNameZh();
    void setActionNameZh(const std::string& value);

    /// <summary>
    /// 原子动作英文名称。
    /// </summary>

    std::string getActionNameEn() const;
    bool actionNameEnIsSet() const;
    void unsetactionNameEn();
    void setActionNameEn(const std::string& value);

    /// <summary>
    /// 动作时长
    /// </summary>

    float getActionDuration() const;
    bool actionDurationIsSet() const;
    void unsetactionDuration();
    void setActionDuration(float value);

    /// <summary>
    /// 动作分类名称。
    /// </summary>

    std::string getCatalog() const;
    bool catalogIsSet() const;
    void unsetcatalog();
    void setCatalog(const std::string& value);

    /// <summary>
    /// 样例视频文件名，最大长度256，最小长度1。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 动作标签。
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);


protected:
    std::string actionNameZh_;
    bool actionNameZhIsSet_;
    std::string actionNameEn_;
    bool actionNameEnIsSet_;
    float actionDuration_;
    bool actionDurationIsSet_;
    std::string catalog_;
    bool catalogIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ActionTagInfo_H_
