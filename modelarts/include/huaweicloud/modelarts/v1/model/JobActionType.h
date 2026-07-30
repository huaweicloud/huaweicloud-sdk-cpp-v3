
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobActionType_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobActionType_H_


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
/// 对训练作业的操作请求体。终止训练作业请使用terminate。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobActionType
    : public ModelBase
{
public:
    JobActionType();
    virtual ~JobActionType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobActionType members

    /// <summary>
    /// 对训练作业的操作请求。参数值设置为terminate时，表示终止训练作业操作。
    /// </summary>

    std::string getActionType() const;
    bool actionTypeIsSet() const;
    void unsetactionType();
    void setActionType(const std::string& value);


protected:
    std::string actionType_;
    bool actionTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobActionType_H_
