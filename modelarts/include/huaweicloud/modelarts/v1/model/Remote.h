
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Remote_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Remote_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/RemoteObs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据实际输出信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Remote
    : public ModelBase
{
public:
    Remote();
    virtual ~Remote();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Remote members

    /// <summary>
    /// 
    /// </summary>

    RemoteObs getObs() const;
    bool obsIsSet() const;
    void unsetobs();
    void setObs(const RemoteObs& value);


protected:
    RemoteObs obs_;
    bool obsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Remote_H_
