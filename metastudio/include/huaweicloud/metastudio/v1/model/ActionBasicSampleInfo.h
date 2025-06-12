
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ActionBasicSampleInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ActionBasicSampleInfo_H_


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
/// 原子动作样例详情。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ActionBasicSampleInfo
    : public ModelBase
{
public:
    ActionBasicSampleInfo();
    virtual ~ActionBasicSampleInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionBasicSampleInfo members

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
    /// 原子动作标签。
    /// </summary>

    std::string getActionTag() const;
    bool actionTagIsSet() const;
    void unsetactionTag();
    void setActionTag(const std::string& value);

    /// <summary>
    /// 原子动作标签。
    /// </summary>

    std::string getCatalog() const;
    bool catalogIsSet() const;
    void unsetcatalog();
    void setCatalog(const std::string& value);

    /// <summary>
    /// 推荐等级。
    /// </summary>

    int32_t getRecommendedValue() const;
    bool recommendedValueIsSet() const;
    void unsetrecommendedValue();
    void setRecommendedValue(int32_t value);

    /// <summary>
    /// 是否选择此动作。
    /// </summary>

    bool isIsSelected() const;
    bool isSelectedIsSet() const;
    void unsetisSelected();
    void setIsSelected(bool value);


protected:
    std::string actionNameZh_;
    bool actionNameZhIsSet_;
    std::string actionNameEn_;
    bool actionNameEnIsSet_;
    std::string actionTag_;
    bool actionTagIsSet_;
    std::string catalog_;
    bool catalogIsSet_;
    int32_t recommendedValue_;
    bool recommendedValueIsSet_;
    bool isSelected_;
    bool isSelectedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ActionBasicSampleInfo_H_
