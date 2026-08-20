
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchBaselineIpdIssuesParam_attribute_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchBaselineIpdIssuesParam_attribute_H_


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
/// 修改的工作项属性。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchBaselineIpdIssuesParam_attribute
    : public ModelBase
{
public:
    BatchBaselineIpdIssuesParam_attribute();
    virtual ~BatchBaselineIpdIssuesParam_attribute();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchBaselineIpdIssuesParam_attribute members

    /// <summary>
    /// 工作项基线标识。
    /// </summary>

    std::string getBaseline() const;
    bool baselineIsSet() const;
    void unsetbaseline();
    void setBaseline(const std::string& value);


protected:
    std::string baseline_;
    bool baselineIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchBaselineIpdIssuesParam_attribute_H_
