
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MotionItem_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MotionItem_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  MotionItem
    : public ModelBase
{
public:
    MotionItem();
    virtual ~MotionItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MotionItem members

    /// <summary>
    /// 时间戳，相对时间戳。  单位秒。  保留3位小数。
    /// </summary>

    float getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(float value);

    /// <summary>
    /// root 3维坐标。
    /// </summary>

    std::vector<float>& getRoot();
    bool rootIsSet() const;
    void unsetroot();
    void setRoot(std::vector<float> value);

    /// <summary>
    /// 75个关节点，四元数。
    /// </summary>

    std::vector<float>& getJoints();
    bool jointsIsSet() const;
    void unsetjoints();
    void setJoints(std::vector<float> value);

    /// <summary>
    /// 眼动数据
    /// </summary>

    std::vector<float>& getEyes();
    bool eyesIsSet() const;
    void unseteyes();
    void setEyes(std::vector<float> value);


protected:
    float timestamp_;
    bool timestampIsSet_;
    std::vector<float> root_;
    bool rootIsSet_;
    std::vector<float> joints_;
    bool jointsIsSet_;
    std::vector<float> eyes_;
    bool eyesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MotionItem_H_
