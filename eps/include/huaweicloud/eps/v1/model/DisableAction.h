
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_DisableAction_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_DisableAction_H_

#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 停用企业项目操作
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  DisableAction
    : public ModelBase
{
public:
    DisableAction();
    virtual ~DisableAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DisableAction members

    /// <summary>
    /// 停用操作
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_DisableAction_H_
