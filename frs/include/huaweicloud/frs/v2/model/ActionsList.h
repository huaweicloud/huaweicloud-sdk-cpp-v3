
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_ActionsList_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_ActionsList_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  ActionsList
    : public ModelBase
{
public:
    ActionsList();
    virtual ~ActionsList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ActionsList members

    /// <summary>
    /// 置信度，取值范围0～1。
    /// </summary>

    double getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(double value);

    /// <summary>
    /// 动作编号，取值范围：[1,2,3,4]，其中： • 1：左摇头 • 2：右摇头 • 3：点头 • 4：嘴部动作
    /// </summary>

    int32_t getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(int32_t value);


protected:
    double confidence_;
    bool confidenceIsSet_;
    int32_t action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_ActionsList_H_
